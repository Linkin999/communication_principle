/*
 * File: _coder_Ex1_add_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 16-Mar-2020 18:53:54
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
extern void Ex1_add(real_T a_data[], int32_T a_size[2], real_T b_data[], int32_T
                    b_size[2], real_T sum_data[], int32_T sum_size[2]);
extern void Ex1_add_api(const mxArray *prhs[2], const mxArray *plhs[1]);
extern void Ex1_add_atexit(void);
extern void Ex1_add_initialize(void);
extern void Ex1_add_terminate(void);
extern void Ex1_add_xil_terminate(void);

#endif

/*
 * File trailer for _coder_Ex1_add_api.h
 *
 * [EOF]
 */
