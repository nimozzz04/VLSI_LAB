-- Testbench for adder_8bit (self-checking)
-- Corner cases + a 16 x 18 x 2 sweep (a step 17, b step 15, both cin values)
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_adder_8bit is
end tb_adder_8bit;

architecture sim of tb_adder_8bit is
  signal a, b, sum : std_logic_vector(7 downto 0) := (others => '0');
  signal cin, cout : std_logic := '0';
begin
  uut : entity work.adder_8bit
    port map (a => a, b => b, cin => cin, sum => sum, cout => cout);

  stim : process
    variable errors : integer := 0;

    procedure check (av, bv, cv : in integer) is
      variable expected : integer;
    begin
      a <= std_logic_vector(to_unsigned(av, 8));
      b <= std_logic_vector(to_unsigned(bv, 8));
      if cv = 1 then cin <= '1'; else cin <= '0'; end if;
      wait for 10 ns;
      expected := av + bv + cv;
      if sum /= std_logic_vector(to_unsigned(expected mod 256, 8)) or
         (cout = '1') /= (expected >= 256) then
        errors := errors + 1;
        report "adder_8bit: " & integer'image(av) & " + " & integer'image(bv) &
               " + " & integer'image(cv) & " wrong, sum=" &
               integer'image(to_integer(unsigned(sum))) severity error;
      end if;
    end procedure;
  begin
    -- corner cases
    check(0,   0,   0);
    check(0,   0,   1);
    check(255, 0,   0);
    check(255, 0,   1);   -- ripple across all 8 bits
    check(255, 1,   0);
    check(255, 255, 0);
    check(255, 255, 1);
    check(127, 1,   0);
    check(128, 128, 0);
    check(15,  1,   0);   -- carry between the two nibbles
    check(240, 16,  0);

    -- sweep
    for ia in 0 to 15 loop
      for ib in 0 to 17 loop
        check(ia * 17, ib * 15, 0);
        check(ia * 17, ib * 15, 1);
      end loop;
    end loop;

    if errors = 0 then
      report "tb_adder_8bit: TEST PASSED" severity note;
    else
      report "tb_adder_8bit: TEST FAILED, errors = " & integer'image(errors) severity error;
    end if;
    wait;
  end process;
end sim;
