-- Testbench for reg_8bit (self-checking)
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_reg_8bit is
end tb_reg_8bit;

architecture sim of tb_reg_8bit is
  signal d, q       : std_logic_vector(7 downto 0) := (others => '0');
  signal clk, en    : std_logic := '0';
begin
  uut : entity work.reg_8bit port map (d => d, clk => clk, en => en, q => q);

  stim : process
    variable errors : integer := 0;

    procedure tick is
    begin
      wait for 2 ns;  clk <= '1';
      wait for 5 ns;  clk <= '0';
      wait for 3 ns;
    end procedure;

    procedure expect_q (ev : in integer; msg : in string) is
    begin
      if q /= std_logic_vector(to_unsigned(ev, 8)) then
        errors := errors + 1;
        report "reg_8bit: " & msg & " -> q=" &
               integer'image(to_integer(unsigned(q))) &
               " expected " & integer'image(ev) severity error;
      end if;
    end procedure;
  begin
    en <= '1';
    d <= x"A5"; tick;  expect_q(16#A5#, "load A5");
    d <= x"3C"; tick;  expect_q(16#3C#, "load 3C");

    en <= '0';
    d <= x"FF"; tick;  expect_q(16#3C#, "en=0 holds 3C");

    en <= '1';
    d <= x"00"; tick;  expect_q(16#00#, "load 00");
    d <= x"FF"; tick;  expect_q(16#FF#, "load FF");

    -- walking one
    for i in 0 to 7 loop
      d <= std_logic_vector(to_unsigned(2 ** i, 8));
      tick;
      expect_q(2 ** i, "walking one");
    end loop;

    -- edge-triggered: a change while clk=1 must not get through
    d <= x"55"; wait for 2 ns;
    clk <= '1'; wait for 2 ns;
    d <= x"AA"; wait for 2 ns;
    expect_q(16#55#, "d change while clk=1 ignored");
    clk <= '0'; wait for 5 ns;
    expect_q(16#55#, "still 55 after falling edge");

    if errors = 0 then
      report "tb_reg_8bit: TEST PASSED" severity note;
    else
      report "tb_reg_8bit: TEST FAILED, errors = " & integer'image(errors) severity error;
    end if;
    wait;
  end process;
end sim;
