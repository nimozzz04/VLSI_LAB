-- Testbench for alu_8bit (self-checking)
-- Runs 13 operand pairs through all 8 operations and checks result + 4 flags
-- against a behavioural model written with integers.
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_alu_8bit is
end tb_alu_8bit;

architecture sim of tb_alu_8bit is
  signal a, b, result : std_logic_vector(7 downto 0) := (others => '0');
  signal op           : std_logic_vector(2 downto 0) := "000";
  signal carry_out, zero, negative, overflow : std_logic;

  type int_vec is array (natural range <>) of integer;
  constant VEC_A : int_vec := (0, 1, 127, 128, 255, 255, 100,  50, 0,  85, 128, 200,  15);
  constant VEC_B : int_vec := (0, 1,   1,   1,   1, 255,  50, 100, 1, 170, 128, 100, 240);

  function tsl(x : boolean) return std_logic is
  begin
    if x then return '1'; else return '0'; end if;
  end function;
begin
  uut : entity work.alu_8bit
    port map (a => a, b => b, op => op, result => result,
              carry_out => carry_out, zero => zero,
              negative => negative, overflow => overflow);

  stim : process
    variable errors : integer := 0;

    procedure check (av, bv, opv : in integer) is
      variable sa, sb, sres, full, res_i : integer;
      variable c_e, v_e : boolean;
      variable u_a, u_b : unsigned(7 downto 0);
    begin
      a  <= std_logic_vector(to_unsigned(av, 8));
      b  <= std_logic_vector(to_unsigned(bv, 8));
      op <= std_logic_vector(to_unsigned(opv, 3));
      wait for 10 ns;

      sa := av; if sa > 127 then sa := sa - 256; end if;   -- signed view
      sb := bv; if sb > 127 then sb := sb - 256; end if;
      u_a := to_unsigned(av, 8);
      u_b := to_unsigned(bv, 8);
      c_e := false;  v_e := false;  res_i := 0;

      case opv is
        when 0 =>                                  -- ADD
          full  := av + bv;
          res_i := full mod 256;
          c_e   := full > 255;
          sres  := sa + sb;
          v_e   := (sres > 127) or (sres < -128);
        when 1 =>                                  -- SUB (carry = no borrow)
          full  := av - bv;
          res_i := (full + 256) mod 256;
          c_e   := av >= bv;
          sres  := sa - sb;
          v_e   := (sres > 127) or (sres < -128);
        when 2 => res_i := to_integer(u_a and u_b);
        when 3 => res_i := to_integer(u_a or  u_b);
        when 4 => res_i := to_integer(u_a xor u_b);
        when 5 => res_i := to_integer(not u_a);
        when 6 =>                                  -- INC
          full  := av + 1;
          res_i := full mod 256;
          c_e   := full > 255;
          sres  := sa + 1;
          v_e   := sres > 127;
        when others =>                             -- DEC
          full  := av - 1;
          res_i := (full + 256) mod 256;
          c_e   := av >= 1;
          sres  := sa - 1;
          v_e   := sres < -128;
      end case;

      if result    /= std_logic_vector(to_unsigned(res_i, 8)) or
         carry_out /= tsl(c_e)           or
         zero      /= tsl(res_i = 0)     or
         negative  /= tsl(res_i >= 128)  or
         overflow  /= tsl(v_e) then
        errors := errors + 1;
        report "alu_8bit: op=" & integer'image(opv) & " a=" & integer'image(av) &
               " b=" & integer'image(bv) & " result=" &
               integer'image(to_integer(unsigned(result))) &
               " expected=" & integer'image(res_i) &
               " C/Z/N/V=" & std_logic'image(carry_out) & std_logic'image(zero) &
               std_logic'image(negative) & std_logic'image(overflow) severity error;
      end if;
    end procedure;
  begin
    for o in 0 to 7 loop
      for k in VEC_A'range loop
        check(VEC_A(k), VEC_B(k), o);
      end loop;
    end loop;

    if errors = 0 then
      report "tb_alu_8bit: TEST PASSED" severity note;
    else
      report "tb_alu_8bit: TEST FAILED, errors = " & integer'image(errors) severity error;
    end if;
    wait;
  end process;
end sim;
