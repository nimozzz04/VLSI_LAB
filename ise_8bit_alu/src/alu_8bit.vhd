-- ============================================================
-- alu_8bit : 8-bit ALU (combinational)
--
--   op   operation        notes
--   000  A + B
--   001  A - B            A + (not B) + 1 ; carry_out = 1 means NO borrow
--   010  A AND B
--   011  A OR  B
--   100  A XOR B
--   101  NOT A
--   110  A + 1
--   111  A - 1            A + 0xFF
--
-- Arithmetic uses adder_8bit, logic uses and/or/xor/not gates.
-- Flags: carry_out, zero, negative (MSB), overflow (signed).
-- carry_out and overflow are 0 for the logic operations.
-- ============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu_8bit is
  port ( a         : in  std_logic_vector(7 downto 0);
         b         : in  std_logic_vector(7 downto 0);
         op        : in  std_logic_vector(2 downto 0);
         result    : out std_logic_vector(7 downto 0);
         carry_out : out std_logic;
         zero      : out std_logic;
         negative  : out std_logic;
         overflow  : out std_logic );
end alu_8bit;

architecture structural of alu_8bit is
  signal b_arith    : std_logic_vector(7 downto 0);  -- conditioned 2nd adder operand
  signal cin_arith  : std_logic;
  signal sum_arith  : std_logic_vector(7 downto 0);
  signal cout_arith : std_logic;

  signal and_res, or_res, xor_res, not_res : std_logic_vector(7 downto 0);

  signal result_i   : std_logic_vector(7 downto 0);
  signal is_arith   : std_logic;
begin
  -- ---------- operand conditioning for the adder ----------
  with op select
    b_arith <= b                    when "000",   -- ADD
               not b                when "001",   -- SUB
               (others => '0')      when "110",   -- INC
               (others => '1')      when others;  -- DEC (and don't-care for logic ops)

  with op select
    cin_arith <= '1' when "001" | "110",          -- SUB, INC need +1
                 '0' when others;

  u_add : entity work.adder_8bit
    port map (a => a, b => b_arith, cin => cin_arith,
              sum => sum_arith, cout => cout_arith);

  -- ---------- bitwise logic units ----------
  gen_logic : for i in 0 to 7 generate
    g_and : entity work.and_gate port map (a => a(i), b => b(i), y => and_res(i));
    g_or  : entity work.or_gate  port map (a => a(i), b => b(i), y => or_res(i));
    g_xor : entity work.xor_gate port map (a => a(i), b => b(i), y => xor_res(i));
    g_not : entity work.not_gate port map (a => a(i),            y => not_res(i));
  end generate;

  -- ---------- result select ----------
  with op select
    result_i <= and_res   when "010",
                or_res    when "011",
                xor_res   when "100",
                not_res   when "101",
                sum_arith when others;            -- 000, 001, 110, 111

  -- ---------- flags ----------
  is_arith <= '1' when (op = "000" or op = "001" or op = "110" or op = "111") else '0';

  result    <= result_i;
  zero      <= '1' when result_i = "00000000" else '0';
  negative  <= result_i(7);
  carry_out <= cout_arith and is_arith;
  overflow  <= (not (a(7) xor b_arith(7))) and (a(7) xor sum_arith(7)) and is_arith;
end structural;
