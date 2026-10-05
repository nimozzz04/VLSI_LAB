-- ============================================================
-- sr_latch : cross-coupled NAND SR latch (ACTIVE-LOW inputs)
--   s_n=0,r_n=1 -> Q=1 (set)      s_n=1,r_n=0 -> Q=0 (reset)
--   s_n=1,r_n=1 -> hold           s_n=0,r_n=0 -> forbidden (Q=Qn=1)
-- ============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity sr_latch is
  port ( s_n : in  std_logic;
         r_n : in  std_logic;
         q   : out std_logic;
         q_n : out std_logic );
end sr_latch;

architecture structural of sr_latch is
  signal q_i, qn_i : std_logic;   -- internal copies (out ports can't be read)
begin
  g1 : entity work.nand_gate port map (a => s_n, b => qn_i, y => q_i);
  g2 : entity work.nand_gate port map (a => r_n, b => q_i,  y => qn_i);

  q   <= q_i;
  q_n <= qn_i;
end structural;
