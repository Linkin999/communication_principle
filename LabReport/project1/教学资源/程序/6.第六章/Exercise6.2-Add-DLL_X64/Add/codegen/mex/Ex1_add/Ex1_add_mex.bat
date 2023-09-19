@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=Ex1_add_mex
set MEX_NAME=Ex1_add_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for Ex1_add > Ex1_add_mex.mki
echo COMPILER=%COMPILER%>> Ex1_add_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> Ex1_add_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> Ex1_add_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> Ex1_add_mex.mki
echo LINKER=%LINKER%>> Ex1_add_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> Ex1_add_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> Ex1_add_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> Ex1_add_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> Ex1_add_mex.mki
echo BORLAND=%BORLAND%>> Ex1_add_mex.mki
echo OMPFLAGS= >> Ex1_add_mex.mki
echo OMPLINKFLAGS= >> Ex1_add_mex.mki
echo EMC_COMPILER=msvcsdk>> Ex1_add_mex.mki
echo EMC_CONFIG=optim>> Ex1_add_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f Ex1_add_mex.mk
