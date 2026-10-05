-- ============================================================
-- reg_1bit : 1-bit register = master-slave FF + load-enable mux
--   en = 1 : q <= d on the rising clock edge
--   en = 0 : q keeps its value
-- ============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity reg_1bit is
  port ( d   : in  std_logic;
         clk : in  std_logic;
         en  : in  std_logic;
         q   : out std_logic );
end reg_1bit;

architecture structural of reg_1bit is
  signal d_mux : std_logic;
  signal q_i, qn_i : std_logic;
begin
  u_mux : entity work.mux2        port map (a => q_i, b => d, sel => en, y => d_mux);
  u_ff  : entity work.ms_flipflop port map (d => d_mux, clk => clk, q => q_i, q_n => qn_i);

  q <= q_i;
end structural;
