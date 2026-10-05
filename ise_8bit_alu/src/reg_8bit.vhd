-- ============================================================
-- reg_8bit : 8 x reg_1bit sharing clk and en
-- ============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity reg_8bit is
  port ( d   : in  std_logic_vector(7 downto 0);
         clk : in  std_logic;
         en  : in  std_logic;
         q   : out std_logic_vector(7 downto 0) );
end reg_8bit;

architecture structural of reg_8bit is
begin
  gen_bits : for i in 0 to 7 generate
    u_bit : entity work.reg_1bit
      port map (d => d(i), clk => clk, en => en, q => q(i));
  end generate;
end structural;
