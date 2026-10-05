#!/bin/bash
# Runs EVERY testbench with ISim from the command line (Linux).
# Edit ISE_SETTINGS if ISE 14.7 is installed somewhere else.
ISE_SETTINGS=/opt/Xilinx/14.7/ISE_DS/settings64.sh

if [ ! -f "$ISE_SETTINGS" ]; then echo "Cannot find $ISE_SETTINGS - edit this script"; exit 1; fi
source "$ISE_SETTINGS"
cd "$(dirname "$0")"

TESTS="tb_nand_gate tb_not_gate tb_and_gate tb_or_gate tb_xor_gate tb_half_adder tb_full_adder tb_adder_4bit tb_adder_8bit tb_sr_latch tb_d_latch tb_ms_flipflop tb_mux2 tb_reg_1bit tb_reg_8bit tb_alu_8bit tb_alu_system"
rm -f summary.txt
for T in $TESTS; do
  echo "===== $T ====="
  rm -f $T.exe
  fuse work.$T -prj all_sources.prj -o $T.exe > fuse_$T.log 2>&1
  if [ -x ./$T.exe ]; then
    ./$T.exe -tclbatch run_all.tcl > sim_$T.log 2>&1
    if grep -q "TEST PASSED" sim_$T.log; then echo "$T PASS" >> summary.txt
    else echo "$T FAIL - see sim_$T.log" >> summary.txt; fi
  else
    echo "$T BUILD FAILED - see fuse_$T.log" >> summary.txt
  fi
done
echo; echo "================= SUMMARY ================="; cat summary.txt
