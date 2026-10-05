@echo off
setlocal
rem ==========================================================
rem  Runs EVERY testbench with ISim from the command line.
rem  1) Edit ISE_SETTINGS if ISE 14.7 lives somewhere else
rem     (use settings32.bat on a 32-bit PC)
rem  2) Double-click this file
rem ==========================================================
set ISE_SETTINGS=C:\Xilinx\14.7\ISE_DS\settings64.bat

if not exist "%ISE_SETTINGS%" (
  echo Cannot find %ISE_SETTINGS%
  echo Edit ISE_SETTINGS at the top of this file.
  pause
  exit /b 1
)
call "%ISE_SETTINGS%"
cd /d "%~dp0"

set TESTS=tb_nand_gate tb_not_gate tb_and_gate tb_or_gate tb_xor_gate tb_half_adder tb_full_adder tb_adder_4bit tb_adder_8bit tb_sr_latch tb_d_latch tb_ms_flipflop tb_mux2 tb_reg_1bit tb_reg_8bit tb_alu_8bit tb_alu_system
if exist summary.txt del summary.txt

for %%T in (%TESTS%) do (
  echo ===== %%T =====
  if exist %%T.exe del %%T.exe
  fuse work.%%T -prj all_sources.prj -o %%T.exe > fuse_%%T.log 2>&1
  if exist %%T.exe (
    %%T.exe -tclbatch run_all.tcl > sim_%%T.log 2>&1
    findstr /C:"TEST PASSED" sim_%%T.log >nul && (echo %%T PASS >> summary.txt) || (echo %%T FAIL - see sim_%%T.log >> summary.txt)
  ) else (
    echo %%T BUILD FAILED - see fuse_%%T.log >> summary.txt
  )
)

echo.
echo ================= SUMMARY =================
type summary.txt
echo ===========================================
pause
