-- Testbench for reg_1bit (self-checking): load on rising edge, hold when en=0
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_reg_1bit is
end tb_reg_1bit;

architecture sim of tb_reg_1bit is
  signal d, clk, en : std_logic := '0';
  signal q          : std_logic;
begin
  uut : entity work.reg_1bit port map (d => d, clk => clk, en => en, q => q);

  stim : process
    variable errors : integer := 0;

    -- one clock pulse; 2 ns of set-up before the rising edge
    procedure tick is
    begin
      wait for 2 ns;  clk <= '1';
      wait for 5 ns;  clk <= '0';
      wait for 3 ns;
    end procedure;

    procedure expect_q (eq : in std_logic; msg : in string) is
    begin
      if q /= eq then
        errors := errors + 1;
        report "reg_1bit: " & msg & " -> q=" & std_logic'image(q) severity error;
      end if;
    end procedure;
  begin
    en <= '1'; d <= '1'; tick;  expect_q('1', "load 1");
    d <= '0';            tick;  expect_q('0', "load 0");
    d <= '1';            tick;  expect_q('1', "load 1 again");

    en <= '0'; d <= '0'; tick;  expect_q('1', "en=0 holds 1");
    tick;                       expect_q('1', "en=0 still holds 1");

    en <= '1';           tick;  expect_q('0', "en=1 loads 0");
    en <= '0'; d <= '1'; tick;  expect_q('0', "en=0 holds 0");

    if errors = 0 then
      report "tb_reg_1bit: TEST PASSED" severity note;
    else
      report "tb_reg_1bit: TEST FAILED, errors = " & integer'image(errors) severity error;
    end if;
    wait;
  end process;
end sim;
