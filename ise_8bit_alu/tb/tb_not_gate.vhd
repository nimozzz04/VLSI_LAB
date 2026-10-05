-- Testbench for not_gate (self-checking)
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_not_gate is
end tb_not_gate;

architecture sim of tb_not_gate is
  signal a : std_logic := '0';
  signal y : std_logic;
begin
  uut : entity work.not_gate port map (a => a, y => y);

  stim : process
    variable errors : integer := 0;
  begin
    a <= '0'; wait for 10 ns;
    if y /= '1' then errors := errors + 1; report "not_gate: a=0 expected y=1" severity error; end if;

    a <= '1'; wait for 10 ns;
    if y /= '0' then errors := errors + 1; report "not_gate: a=1 expected y=0" severity error; end if;

    if errors = 0 then
      report "tb_not_gate: TEST PASSED" severity note;
    else
      report "tb_not_gate: TEST FAILED, errors = " & integer'image(errors) severity error;
    end if;
    wait;
  end process;
end sim;
