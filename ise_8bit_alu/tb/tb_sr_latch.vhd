-- Testbench for sr_latch (self-checking). Inputs are ACTIVE-LOW.
-- NOTE: the latch starts as 'U' - it must be set or reset first.
-- Releasing (0,0) -> (1,1) is not tested: that is the classic race.
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_sr_latch is
end tb_sr_latch;

architecture sim of tb_sr_latch is
  signal s_n, r_n : std_logic := '1';
  signal q, q_n   : std_logic;
begin
  uut : entity work.sr_latch port map (s_n => s_n, r_n => r_n, q => q, q_n => q_n);

  stim : process
    variable errors : integer := 0;

    procedure expect_q (eq, eqn : in std_logic; msg : in string) is
    begin
      if q /= eq or q_n /= eqn then
        errors := errors + 1;
        report "sr_latch: " & msg & " -> q=" & std_logic'image(q) &
               " q_n=" & std_logic'image(q_n) severity error;
      end if;
    end procedure;
  begin
    s_n <= '1'; r_n <= '1'; wait for 10 ns;      -- power-up, unknown state

    s_n <= '0'; r_n <= '1'; wait for 10 ns;      -- SET
    expect_q('1', '0', "set");
    s_n <= '1'; r_n <= '1'; wait for 10 ns;      -- HOLD
    expect_q('1', '0', "hold after set");

    s_n <= '1'; r_n <= '0'; wait for 10 ns;      -- RESET
    expect_q('0', '1', "reset");
    s_n <= '1'; r_n <= '1'; wait for 10 ns;      -- HOLD
    expect_q('0', '1', "hold after reset");

    s_n <= '0'; r_n <= '0'; wait for 10 ns;      -- FORBIDDEN: both outputs high
    expect_q('1', '1', "forbidden 0,0");
    s_n <= '0'; r_n <= '1'; wait for 10 ns;      -- recover via SET
    expect_q('1', '0', "set after forbidden");

    if errors = 0 then
      report "tb_sr_latch: TEST PASSED" severity note;
    else
      report "tb_sr_latch: TEST FAILED, errors = " & integer'image(errors) severity error;
    end if;
    wait;
  end process;
end sim;
