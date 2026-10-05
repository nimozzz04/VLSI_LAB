-- ============================================================
-- ms_flipflop : master-slave D flip-flop, RISING-edge triggered
--   master latch transparent while clk = 0
--   slave  latch transparent while clk = 1
-- ============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ms_flipflop is
  port ( d   : in  std_logic;
         clk : in  std_logic;
         q   : out std_logic;
         q_n : out std_logic );
end ms_flipflop;

architecture structural of ms_flipflop is
  signal clk_n  : std_logic;
  signal qm, qm_n : std_logic;   -- master outputs
begin
  u_inv    : entity work.not_gate port map (a => clk, y => clk_n);

  u_master : entity work.d_latch  port map (d => d,  en => clk_n, q => qm, q_n => qm_n);
  u_slave  : entity work.d_latch  port map (d => qm, en => clk,   q => q,  q_n => q_n);
end structural;
