-- Testbench for alu_system: values go  a_in/b_in -> registers -> ALU
-- Checks the register contents, the result and the flags.
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_alu_system is
end tb_alu_system;

architecture sim of tb_alu_system is
  signal clk, load : std_logic := '0';
  signal a_in, b_in : std_logic_vector(7 downto 0) := (others => '0');
  signal op         : std_logic_vector(2 downto 0) := "000";
  signal reg_a_q, reg_b_q, result : std_logic_vector(7 downto 0);
  signal carry_out, zero, negative, overflow : std_logic;

  function tsl(x : boolean) return std_logic is
  begin
    if x then return '1'; else return '0'; end if;
  end function;
begin
  uut : entity work.alu_system
    port map (clk => clk, load => load, a_in => a_in, b_in => b_in, op => op,
              reg_a_q => reg_a_q, reg_b_q => reg_b_q, result => result,
              carry_out => carry_out, zero => zero,
              negative => negative, overflow => overflow);

  stim : process
    variable errors : integer := 0;

    procedure tick is
    begin
      wait for 2 ns;  clk <= '1';
      wait for 5 ns;  clk <= '0';
      wait for 3 ns;
    end procedure;

    -- put a value into both registers (load=1 for one clock)
    procedure load_regs (av, bv : in integer) is
    begin
      a_in <= std_logic_vector(to_unsigned(av, 8));
      b_in <= std_logic_vector(to_unsigned(bv, 8));
      load <= '1';
      tick;
      load <= '0';
    end procedure;

    -- select an operation, wait, then check regs + result + flags
    procedure do_op (opv  : in std_logic_vector(2 downto 0);
                     name : in string;
                     ea, eb, er : in integer;
                     c, z, n, v : in std_logic) is
    begin
      op <= opv;
      wait for 10 ns;
      if reg_a_q /= std_logic_vector(to_unsigned(ea, 8)) or
         reg_b_q /= std_logic_vector(to_unsigned(eb, 8)) or
         result  /= std_logic_vector(to_unsigned(er, 8)) or
         carry_out /= c or zero /= z or negative /= n or overflow /= v then
        errors := errors + 1;
        report "alu_system: " & name & " wrong. A=" &
               integer'image(to_integer(unsigned(reg_a_q))) & " B=" &
               integer'image(to_integer(unsigned(reg_b_q))) & " result=" &
               integer'image(to_integer(unsigned(result))) & " expected=" &
               integer'image(er) severity error;
      end if;
    end procedure;
  begin
    -- ---- A = 0x37 (55), B = 0x15 (21): every operation ----
    load_regs(16#37#, 16#15#);
    do_op("000", "ADD", 16#37#, 16#15#, 16#4C#, '0','0','0','0');
    do_op("001", "SUB", 16#37#, 16#15#, 16#22#, '1','0','0','0');
    do_op("010", "AND", 16#37#, 16#15#, 16#15#, '0','0','0','0');
    do_op("011", "OR ", 16#37#, 16#15#, 16#37#, '0','0','0','0');
    do_op("100", "XOR", 16#37#, 16#15#, 16#22#, '0','0','0','0');
    do_op("101", "NOT", 16#37#, 16#15#, 16#C8#, '0','0','1','0');
    do_op("110", "INC", 16#37#, 16#15#, 16#38#, '0','0','0','0');
    do_op("111", "DEC", 16#37#, 16#15#, 16#36#, '1','0','0','0');

    -- ---- load=0: registers must ignore new inputs ----
    a_in <= x"FF"; b_in <= x"FF"; load <= '0';
    tick;
    do_op("000", "ADD (regs held)", 16#37#, 16#15#, 16#4C#, '0','0','0','0');

    -- ---- flag corner cases ----
    load_regs(16#7F#, 16#01#);
    do_op("000", "127+1 overflow", 16#7F#, 16#01#, 16#80#, '0','0','1','1');

    load_regs(16#FF#, 16#01#);
    do_op("000", "255+1 zero+carry", 16#FF#, 16#01#, 16#00#, '1','1','0','0');

    load_regs(16#05#, 16#0A#);
    do_op("001", "5-10 borrow", 16#05#, 16#0A#, 16#FB#, '0','0','1','0');

    load_regs(16#80#, 16#01#);
    do_op("001", "-128-1 overflow", 16#80#, 16#01#, 16#7F#, '1','0','0','1');

    if errors = 0 then
      report "tb_alu_system: TEST PASSED" severity note;
    else
      report "tb_alu_system: TEST FAILED, errors = " & integer'image(errors) severity error;
    end if;
    wait;
  end process;
end sim;
