-- ============================================================
-- alu_system : operands come FROM two 8-bit registers INTO the ALU
--
--   a_in / b_in --> [reg A] [reg B] --> alu_8bit --> result + flags
--
--   Registers load on the rising edge of clk when load = 1.
--   reg_a_q / reg_b_q are brought out so you can watch them.
-- ============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu_system is
  port ( clk       : in  std_logic;
         load      : in  std_logic;
         a_in      : in  std_logic_vector(7 downto 0);
         b_in      : in  std_logic_vector(7 downto 0);
         op        : in  std_logic_vector(2 downto 0);
         reg_a_q   : out std_logic_vector(7 downto 0);
         reg_b_q   : out std_logic_vector(7 downto 0);
         result    : out std_logic_vector(7 downto 0);
         carry_out : out std_logic;
         zero      : out std_logic;
         negative  : out std_logic;
         overflow  : out std_logic );
end alu_system;

architecture structural of alu_system is
  signal a_q, b_q : std_logic_vector(7 downto 0);
begin
  u_reg_a : entity work.reg_8bit port map (d => a_in, clk => clk, en => load, q => a_q);
  u_reg_b : entity work.reg_8bit port map (d => b_in, clk => clk, en => load, q => b_q);

  u_alu : entity work.alu_8bit
    port map (a => a_q, b => b_q, op => op, result => result,
              carry_out => carry_out, zero => zero,
              negative => negative, overflow => overflow);

  reg_a_q <= a_q;
  reg_b_q <= b_q;
end structural;
