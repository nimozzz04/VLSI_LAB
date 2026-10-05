-- Testbench for mux2 (self-checking, all 8 combinations)
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_mux2 is
end tb_mux2;

architecture sim of tb_mux2 is
  signal a, b, sel, y : std_logic := '0';
begin
  uut : entity work.mux2 port map (a => a, b => b, sel => sel, y => y);

  stim : process
    variable v      : unsigned(2 downto 0);
    variable expect : std_logic;
    variable errors : integer := 0;
  begin
    for i in 0 to 7 loop
      v := to_unsigned(i, 3);
      sel <= v(2);
      a   <= v(1);
      b   <= v(0);
      wait for 10 ns;
      if v(2) = '1' then expect := v(0); else expect := v(1); end if;
      if y /= expect then
        errors := errors + 1;
        report "mux2: wrong output for sel,a,b = " & integer'image(i) severity error;
      end if;
    end loop;

    if errors = 0 then
      report "tb_mux2: TEST PASSED" severity note;
    else
      report "tb_mux2: TEST FAILED, errors = " & integer'image(errors) severity error;
    end if;
    wait;
  end process;
end sim;
