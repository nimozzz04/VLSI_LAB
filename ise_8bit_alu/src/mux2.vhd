-- ============================================================
-- mux2 : 1-bit 2:1 multiplexer from NAND gates
--   y = a when sel = 0 , y = b when sel = 1
-- (used for the load-enable of the register)
-- ============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux2 is
  port ( a   : in  std_logic;
         b   : in  std_logic;
         sel : in  std_logic;
         y   : out std_logic );
end mux2;

architecture structural of mux2 is
  signal nsel, n1, n2 : std_logic;
begin
  u_not : entity work.not_gate  port map (a => sel, y => nsel);
  g1    : entity work.nand_gate port map (a => a,   b => nsel, y => n1);
  g2    : entity work.nand_gate port map (a => b,   b => sel,  y => n2);
  g3    : entity work.nand_gate port map (a => n1,  b => n2,   y => y);
end structural;
