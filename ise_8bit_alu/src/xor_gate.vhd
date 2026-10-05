-- ============================================================
-- xor_gate : classic 4-NAND XOR
-- ============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity xor_gate is
  port ( a : in  std_logic;
         b : in  std_logic;
         y : out std_logic );
end xor_gate;

architecture structural of xor_gate is
  signal n1, n2, n3 : std_logic;
begin
  g1 : entity work.nand_gate port map (a => a,  b => b,  y => n1);
  g2 : entity work.nand_gate port map (a => a,  b => n1, y => n2);
  g3 : entity work.nand_gate port map (a => b,  b => n1, y => n3);
  g4 : entity work.nand_gate port map (a => n2, b => n3, y => y);
end structural;
