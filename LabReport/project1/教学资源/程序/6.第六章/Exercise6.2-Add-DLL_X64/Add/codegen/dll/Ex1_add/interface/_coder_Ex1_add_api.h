/*
 * File: _coder_Ex1_add_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 18-Jul-2021 15:55:14
 */

#ifndef _CODER_EX1_ADD_API_H
#define _CODER_EX1_ADD_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_Ex1_add_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
#ifdef __cplusplus

extern "C" {

#endif

  extern real_T Ex1_add(real_T a, real_T b);
  extern void Ex1_add_api(const mxArray * const prhs[2], const mxArray *plhs[1]);
  extern void Ex1_add_atexit(void);
  extern void Ex1_add_initialize(void);
  extern void Ex1_add_terminate(void);
  extern void Ex1_add_xil_terminate(void);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for _coder_Ex1_add_api.h
 *
 * [EOF]
 */
