-- Testbench for ms_flipflop (self-checking): only the RISING edge captures d
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_ms_flipflop is
end tb_ms_flipflop;

architecture sim of tb_ms_flipflop is
  signal d, clk : std_logic := '0';
  signal q, q_n : std_logic;
begin
  uut : entity work.ms_flipflop port map (d => d, clk => clk, q => q, q_n => q_n);

  stim : process
    variable errors : integer := 0;

    procedure expect_q (eq : in std_logic; msg : in string) is
    begin
      if q /= eq or q_n /= (not eq) then
        errors := errors + 1;
        report "ms_flipflop: " & msg & " -> q=" & std_logic'image(q) &
               " q_n=" & std_logic'image(q_n) severity error;
      end if;
    end procedure;
  begin
    clk <= '0'; d <= '1'; wait for 10 ns;       -- master follows d while clk=0

    clk <= '1';           wait for 10 ns;       -- rising edge
    expect_q('1', "rising edge captures 1");

    d <= '0';             wait for 10 ns;       -- change while clk=1
    expect_q('1', "d change while clk=1 ignored");

    clk <= '0';           wait for 10 ns;       -- falling edge
    expect_q('1', "falling edge does not change q");

    clk <= '1';           wait for 10 ns;       -- rising edge
    expect_q('0', "rising edge captures 0");

    d <= '1';             wait for 10 ns;
    expect_q('0', "d change while clk=1 ignored (2)");
    clk <= '0';           wait for 10 ns;
    expect_q('0', "still 0 after falling edge");

    clk <= '1';           wait for 10 ns;
    expect_q('1', "rising edge captures 1 again");

    if errors = 0 then
      report "tb_ms_flipflop: TEST PASSED" severity note;
    else
      report "tb_ms_flipflop: TEST FAILED, errors = " & integer'image(errors) severity error;
    end if;
    wait;
  end process;
end sim;
