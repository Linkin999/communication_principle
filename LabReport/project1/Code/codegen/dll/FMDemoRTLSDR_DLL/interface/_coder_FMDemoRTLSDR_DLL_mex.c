/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_FMDemoRTLSDR_DLL_mex.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2022 23:48:43
 */

/* Include Files */
#include "_coder_FMDemoRTLSDR_DLL_mex.h"
#include "_coder_FMDemoRTLSDR_DLL_api.h"

/* Function Definitions */
/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[1]
 *                int32_T nrhs
 *                const mxArray *prhs[2]
 * Return Type  : void
 */
void FMDemoRTLSDR_DLL_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[2])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *outputs[1];
  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        16, "FMDemoRTLSDR_DLL");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 16,
                        "FMDemoRTLSDR_DLL");
  }

  /* Call the function. */
  FMDemoRTLSDR_DLL_api(prhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[]
 *                int32_T nrhs
 *                const mxArray *prhs[]
 * Return Type  : void
 */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(&FMDemoRTLSDR_DLL_atexit);

  /* Module initialization. */
  FMDemoRTLSDR_DLL_initialize();

  /* Dispatch the entry-point. */
  FMDemoRTLSDR_DLL_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  FMDemoRTLSDR_DLL_terminate();
}

/*
 * Arguments    : void
 * Return Type  : emlrtCTX
 */
emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/*
 * File trailer for _coder_FMDemoRTLSDR_DLL_mex.c
 *
 * [EOF]
 */
