-- ============================================================
-- d_latch : level-sensitive D latch (transparent while en = 1)
--           built from NOT + 2 NAND gating + the SR latch
-- ============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity d_latch is
  port ( d   : in  std_logic;
         en  : in  std_logic;
         q   : out std_logic;
         q_n : out std_logic );
end d_latch;

architecture structural of d_latch is
  signal nd, s_n, r_n : std_logic;
begin
  u_not : entity work.not_gate  port map (a => d,  y => nd);
  g_s   : entity work.nand_gate port map (a => d,  b => en, y => s_n);
  g_r   : entity work.nand_gate port map (a => nd, b => en, y => r_n);

  u_sr  : entity work.sr_latch  port map (s_n => s_n, r_n => r_n, q => q, q_n => q_n);
end structural;
