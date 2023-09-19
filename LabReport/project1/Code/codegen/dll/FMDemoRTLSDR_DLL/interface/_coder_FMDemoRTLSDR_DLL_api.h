/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_FMDemoRTLSDR_DLL_api.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2022 23:48:43
 */

#ifndef _CODER_FMDEMORTLSDR_DLL_API_H
#define _CODER_FMDEMORTLSDR_DLL_API_H

/* Include Files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  void FMDemoRTLSDR_DLL(real_T ISamples[35830], real_T QSamples[35830], real_T
                        Baseband[35829]);
  void FMDemoRTLSDR_DLL_api(const mxArray * const prhs[2], const mxArray *plhs[1]);
  void FMDemoRTLSDR_DLL_atexit(void);
  void FMDemoRTLSDR_DLL_initialize(void);
  void FMDemoRTLSDR_DLL_terminate(void);
  void FMDemoRTLSDR_DLL_xil_shutdown(void);
  void FMDemoRTLSDR_DLL_xil_terminate(void);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for _coder_FMDemoRTLSDR_DLL_api.h
 *
 * [EOF]
 */
