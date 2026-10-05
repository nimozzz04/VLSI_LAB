-- Testbench for full_adder (self-checking, all 8 combinations)
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_full_adder is
end tb_full_adder;

architecture sim of tb_full_adder is
  signal a, b, cin, sum, cout : std_logic := '0';

  function tsl(x : boolean) return std_logic is
  begin
    if x then return '1'; else return '0'; end if;
  end function;
begin
  uut : entity work.full_adder
    port map (a => a, b => b, cin => cin, sum => sum, cout => cout);

  stim : process
    variable v      : unsigned(2 downto 0);
    variable total  : integer;
    variable errors : integer := 0;
  begin
    for i in 0 to 7 loop
      v := to_unsigned(i, 3);
      a   <= v(2);
      b   <= v(1);
      cin <= v(0);
      wait for 10 ns;
      total := (i / 4) + ((i / 2) mod 2) + (i mod 2);   -- a + b + cin
      if sum /= tsl((total mod 2) = 1) or cout /= tsl(total >= 2) then
        errors := errors + 1;
        report "full_adder: wrong result for a,b,cin = " & integer'image(i) severity error;
      end if;
    end loop;

    if errors = 0 then
      report "tb_full_adder: TEST PASSED" severity note;
    else
      report "tb_full_adder: TEST FAILED, errors = " & integer'image(errors) severity error;
    end if;
    wait;
  end process;
end sim;
