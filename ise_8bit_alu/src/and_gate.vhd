-- ============================================================
-- and_gate : AND = NAND followed by NOT
-- ============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity and_gate is
  port ( a : in  std_logic;
         b : in  std_logic;
         y : out std_logic );
end and_gate;

architecture structural of and_gate is
  signal n : std_logic;
begin
  u1 : entity work.nand_gate port map (a => a, b => b, y => n);
  u2 : entity work.not_gate  port map (a => n,          y => y);
end structural;
