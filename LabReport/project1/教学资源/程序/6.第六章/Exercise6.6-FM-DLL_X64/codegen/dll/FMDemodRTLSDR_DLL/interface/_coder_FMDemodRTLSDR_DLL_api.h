/*
 * File: _coder_FMDemodRTLSDR_DLL_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 17-Mar-2020 00:03:38
 */

#ifndef _CODER_FMDEMODRTLSDR_DLL_API_H
#define _CODER_FMDEMODRTLSDR_DLL_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_FMDemodRTLSDR_DLL_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
#ifdef __cplusplus

extern "C" {

#endif

  extern void FMDemodRTLSDR_DLL(real_T ISamples[35830], real_T QSamples[35830],
    real_T Baseband[35829]);
  extern void FMDemodRTLSDR_DLL_api(const mxArray *prhs[2], const mxArray *plhs
    [1]);
  extern void FMDemodRTLSDR_DLL_atexit(void);
  extern void FMDemodRTLSDR_DLL_initialize(void);
  extern void FMDemodRTLSDR_DLL_terminate(void);
  extern void FMDemodRTLSDR_DLL_xil_terminate(void);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for _coder_FMDemodRTLSDR_DLL_api.h
 *
 * [EOF]
 */
