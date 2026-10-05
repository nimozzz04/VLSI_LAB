-- ============================================================
-- or_gate : OR = NAND( NOT a , NOT b )
-- (needed by the full adder carry and by the ALU OR operation)
-- ============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity or_gate is
  port ( a : in  std_logic;
         b : in  std_logic;
         y : out std_logic );
end or_gate;

architecture structural of or_gate is
  signal na, nb : std_logic;
begin
  u1 : entity work.not_gate  port map (a => a, y => na);
  u2 : entity work.not_gate  port map (a => b, y => nb);
  u3 : entity work.nand_gate port map (a => na, b => nb, y => y);
end structural;
