-- Testbench for half_adder (self-checking, all 4 combinations)
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_half_adder is
end tb_half_adder;

architecture sim of tb_half_adder is
  signal a, b, sum, carry : std_logic := '0';
begin
  uut : entity work.half_adder port map (a => a, b => b, sum => sum, carry => carry);

  stim : process
    variable v      : unsigned(1 downto 0);
    variable errors : integer := 0;
  begin
    for i in 0 to 3 loop
      v := to_unsigned(i, 2);
      a <= v(1);
      b <= v(0);
      wait for 10 ns;
      if sum /= (a xor b) or carry /= (a and b) then
        errors := errors + 1;
        report "half_adder: wrong result for a=" & std_logic'image(a) &
               " b=" & std_logic'image(b) severity error;
      end if;
    end loop;

    if errors = 0 then
      report "tb_half_adder: TEST PASSED" severity note;
    else
      report "tb_half_adder: TEST FAILED, errors = " & integer'image(errors) severity error;
    end if;
    wait;
  end process;
end sim;
