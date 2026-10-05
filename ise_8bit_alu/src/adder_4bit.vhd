-- ============================================================
-- adder_4bit : ripple-carry adder, 4 x full_adder
-- ============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity adder_4bit is
  port ( a    : in  std_logic_vector(3 downto 0);
         b    : in  std_logic_vector(3 downto 0);
         cin  : in  std_logic;
         sum  : out std_logic_vector(3 downto 0);
         cout : out std_logic );
end adder_4bit;

architecture structural of adder_4bit is
  signal c : std_logic_vector(4 downto 0);   -- carry chain
begin
  c(0) <= cin;

  gen_fa : for i in 0 to 3 generate
    u_fa : entity work.full_adder
      port map (a => a(i), b => b(i), cin => c(i), sum => sum(i), cout => c(i+1));
  end generate;

  cout <= c(4);
end structural;
