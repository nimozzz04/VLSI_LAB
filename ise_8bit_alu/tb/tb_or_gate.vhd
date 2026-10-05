-- Testbench for or_gate (self-checking, all 4 input combinations)
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_or_gate is
end tb_or_gate;

architecture sim of tb_or_gate is
  signal a : std_logic := '0';
  signal b : std_logic := '0';
  signal y : std_logic;
begin
  uut : entity work.or_gate port map (a => a, b => b, y => y);

  stim : process
    variable v      : unsigned(1 downto 0);
    variable errors : integer := 0;
    variable expect : std_logic;
  begin
    for i in 0 to 3 loop
      v := to_unsigned(i, 2);
      a <= v(1);
      b <= v(0);
      wait for 10 ns;
      expect := a or b;
      if y /= expect then
        errors := errors + 1;
        report "or_gate: a=" & std_logic'image(a) & " b=" & std_logic'image(b) &
               " y=" & std_logic'image(y) & " expected " & std_logic'image(expect)
               severity error;
      end if;
    end loop;

    if errors = 0 then
      report "tb_or_gate: TEST PASSED" severity note;
    else
      report "tb_or_gate: TEST FAILED, errors = " & integer'image(errors) severity error;
    end if;
    wait;
  end process;
end sim;
