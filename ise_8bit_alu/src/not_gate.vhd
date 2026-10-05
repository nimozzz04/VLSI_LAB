-- ============================================================
-- not_gate : NOT built from one NAND (both inputs tied together)
-- ============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity not_gate is
  port ( a : in  std_logic;
         y : out std_logic );
end not_gate;

architecture structural of not_gate is
begin
  u1 : entity work.nand_gate port map (a => a, b => a, y => y);
end structural;
