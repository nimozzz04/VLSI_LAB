-- Testbench for d_latch (self-checking): transparent when en=1, holds when en=0
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_d_latch is
end tb_d_latch;

architecture sim of tb_d_latch is
  signal d, en  : std_logic := '0';
  signal q, q_n : std_logic;
begin
  uut : entity work.d_latch port map (d => d, en => en, q => q, q_n => q_n);

  stim : process
    variable errors : integer := 0;

    procedure expect_q (eq : in std_logic; msg : in string) is
    begin
      if q /= eq or q_n /= (not eq) then
        errors := errors + 1;
        report "d_latch: " & msg & " -> q=" & std_logic'image(q) &
               " q_n=" & std_logic'image(q_n) severity error;
      end if;
    end procedure;
  begin
    en <= '1'; d <= '1'; wait for 10 ns;   expect_q('1', "transparent, d=1");
    d <= '0';            wait for 10 ns;   expect_q('0', "transparent, d=0");
    d <= '1';            wait for 10 ns;   expect_q('1', "transparent, d=1 again");

    en <= '0';           wait for 10 ns;   expect_q('1', "closed, holds 1");
    d <= '0';            wait for 10 ns;   expect_q('1', "closed, ignores d=0");

    en <= '1';           wait for 10 ns;   expect_q('0', "re-opened, follows d=0");
    en <= '0';           wait for 10 ns;   expect_q('0', "closed, holds 0");
    d <= '1';            wait for 10 ns;   expect_q('0', "closed, ignores d=1");

    if errors = 0 then
      report "tb_d_latch: TEST PASSED" severity note;
    else
      report "tb_d_latch: TEST FAILED, errors = " & integer'image(errors) severity error;
    end if;
    wait;
  end process;
end sim;
