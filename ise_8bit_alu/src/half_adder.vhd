-- ============================================================
-- half_adder : sum = a XOR b , carry = a AND b
-- ============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity half_adder is
  port ( a     : in  std_logic;
         b     : in  std_logic;
         sum   : out std_logic;
         carry : out std_logic );
end half_adder;

architecture structural of half_adder is
begin
  u_xor : entity work.xor_gate port map (a => a, b => b, y => sum);
  u_and : entity work.and_gate port map (a => a, b => b, y => carry);
end structural;
