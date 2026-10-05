-- ============================================================
-- adder_8bit : 2 x adder_4bit chained through the carry
-- ============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity adder_8bit is
  port ( a    : in  std_logic_vector(7 downto 0);
         b    : in  std_logic_vector(7 downto 0);
         cin  : in  std_logic;
         sum  : out std_logic_vector(7 downto 0);
         cout : out std_logic );
end adder_8bit;

architecture structural of adder_8bit is
  signal c4 : std_logic;   -- carry between the two nibbles
begin
  u_low : entity work.adder_4bit
    port map (a => a(3 downto 0), b => b(3 downto 0), cin => cin,
              sum => sum(3 downto 0), cout => c4);

  u_high : entity work.adder_4bit
    port map (a => a(7 downto 4), b => b(7 downto 4), cin => c4,
              sum => sum(7 downto 4), cout => cout);
end structural;
