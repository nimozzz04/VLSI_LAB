8-BIT ADDER + 8-BIT REGISTER -> 8-BIT ALU        (Xilinx ISE 14.7, VHDL)
==========================================================================
Everything is built from ONE primitive: the 2-input NAND (nand_gate.vhd).

HOW TO OPEN
  1. Unzip.
  2. Double-click ise_8bit_alu.xise  (or File > Open Project in ISE 14.7).
  If ISE refuses the project: File > New Project, then
  Project > Add Copy of Source... and add every .vhd in src\ and tb\.

HOW TO SIMULATE ONE TESTBENCH
  1. In the Design panel choose  View: Simulation  (Behavioral).
  2. Click a testbench (tb_xxx).
  3. Processes: ISim Simulator > double-click "Simulate Behavioral Model".
  4. If the waveform stops early, type   run all   in the ISim console
     (the project is set to 100 us, but run all is always safe).
  Every testbench is self-checking. The console prints
     "TEST PASSED"  or  "TEST FAILED" + what went wrong.

HOW TO RUN ALL TESTBENCHES AT ONCE (no GUI)
  sim\run_all_tests.bat      (Windows - edit the ISE path at the top first)
  sim\run_all_tests.sh       (Linux)
  A PASS/FAIL summary is printed at the end.

BUILD ORDER  (each file has its own testbench tb_<name>.vhd)
  ADDER  :  nand_gate -> not_gate -> and_gate -> or_gate -> xor_gate
            -> half_adder -> full_adder -> adder_4bit -> adder_8bit
  REGISTER: nand_gate -> not_gate -> sr_latch -> d_latch -> ms_flipflop
            -> mux2 -> reg_1bit -> reg_8bit
  ALU    :  alu_8bit (uses adder_8bit + gates)
            alu_system = reg_8bit A + reg_8bit B  ->  alu_8bit   (top level)

  or_gate and mux2 are extra: the full adder needs an OR for its carry,
  and mux2 gives the register a load-enable.

ALU OPERATIONS  (op = 3 bits)
  000 A+B    001 A-B    010 A AND B    011 A OR B
  100 A XOR B   101 NOT A   110 A+1   111 A-1
  Flags: carry_out, zero, negative, overflow.
  For SUB, carry_out = 1 means "no borrow" (same as ARM).
  carry_out / overflow are 0 for the logic operations.

alu_system PORTS
  clk, load, a_in[7:0], b_in[7:0], op[2:0]
  -> reg_a_q, reg_b_q, result[7:0], carry_out, zero, negative, overflow
  Registers capture a_in / b_in on the RISING edge of clk when load = 1.

THINGS TO KNOW
  * The latches/flip-flops start as 'U' in simulation (they are real
    gate-level feedback loops). They become defined after the first rising
    clock edge with load/en = 1. Same for the SR latch: set or reset it first.
  * Don't change data at the exact same instant as the clock edge.
  * Never release the SR latch from (s_n=0, r_n=0) straight to (1,1).
  * This design is meant for SIMULATION / learning. XST will warn about the
    combinational feedback loops if you synthesise the latch part.
  * Default device in the project is Spartan-3E xc3s500e-4-fg320; change it
    in Project > Design Properties if you want to implement.
