/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: FMDemoRTLSDR_DLL_initialize.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2022 23:48:43
 */

/* Include Files */
#include "FMDemoRTLSDR_DLL_initialize.h"
#include "FMDemoRTLSDR_DLL_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : void
 */
void FMDemoRTLSDR_DLL_initialize(void)
{
  rt_InitInfAndNaN();
  isInitialized_FMDemoRTLSDR_DLL = true;
}

/*
 * File trailer for FMDemoRTLSDR_DLL_initialize.c
 *
 * [EOF]
 */
