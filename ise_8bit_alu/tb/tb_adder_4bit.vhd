-- Testbench for adder_4bit (self-checking, EXHAUSTIVE: 16 x 16 x 2 = 512 cases)
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_adder_4bit is
end tb_adder_4bit;

architecture sim of tb_adder_4bit is
  signal a, b, sum : std_logic_vector(3 downto 0) := (others => '0');
  signal cin, cout : std_logic := '0';
begin
  uut : entity work.adder_4bit
    port map (a => a, b => b, cin => cin, sum => sum, cout => cout);

  stim : process
    variable expected : integer;
    variable errors   : integer := 0;
  begin
    for ia in 0 to 15 loop
      for ib in 0 to 15 loop
        for ic in 0 to 1 loop
          a <= std_logic_vector(to_unsigned(ia, 4));
          b <= std_logic_vector(to_unsigned(ib, 4));
          if ic = 1 then cin <= '1'; else cin <= '0'; end if;
          wait for 10 ns;
          expected := ia + ib + ic;
          if sum /= std_logic_vector(to_unsigned(expected mod 16, 4)) or
             (cout = '1') /= (expected >= 16) then
            errors := errors + 1;
            report "adder_4bit: " & integer'image(ia) & " + " & integer'image(ib) &
                   " + " & integer'image(ic) & " wrong" severity error;
          end if;
        end loop;
      end loop;
    end loop;

    if errors = 0 then
      report "tb_adder_4bit: TEST PASSED" severity note;
    else
      report "tb_adder_4bit: TEST FAILED, errors = " & integer'image(errors) severity error;
    end if;
    wait;
  end process;
end sim;
