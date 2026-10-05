-- ============================================================
-- nand_gate : 2-input NAND  (the ONLY primitive in this project)
-- ============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity nand_gate is
  port ( a : in  std_logic;
         b : in  std_logic;
         y : out std_logic );
end nand_gate;

architecture dataflow of nand_gate is
begin
  y <= a nand b;
end dataflow;
