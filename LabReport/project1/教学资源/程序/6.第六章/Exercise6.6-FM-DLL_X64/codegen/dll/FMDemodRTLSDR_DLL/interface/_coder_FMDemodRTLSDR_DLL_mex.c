/*
 * File: _coder_FMDemodRTLSDR_DLL_mex.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 17-Mar-2020 00:03:38
 */

/* Include Files */
#include "_coder_FMDemodRTLSDR_DLL_api.h"
#include "_coder_FMDemodRTLSDR_DLL_mex.h"

/* Function Declarations */
static void FMDemodRTLSDR_DLL_mexFunction(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[2]);

/* Function Definitions */

/*
 * Arguments    : int32_T nlhs
 *                const mxArray *plhs[1]
 *                int32_T nrhs
 *                const mxArray *prhs[2]
 * Return Type  : void
 */
static void FMDemodRTLSDR_DLL_mexFunction(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[2])
{
  int32_T n;
  const mxArray *inputs[2];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        17, "FMDemodRTLSDR_DLL");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 17,
                        "FMDemodRTLSDR_DLL");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
  }

  /* Call the function. */
  FMDemodRTLSDR_DLL_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  FMDemodRTLSDR_DLL_terminate();
}

/*
 * Arguments    : int32_T nlhs
 *                const mxArray * const plhs[]
 *                int32_T nrhs
 *                const mxArray * const prhs[]
 * Return Type  : void
 */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(FMDemodRTLSDR_DLL_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  FMDemodRTLSDR_DLL_initialize();

  /* Dispatch the entry-point. */
  FMDemodRTLSDR_DLL_mexFunction(nlhs, plhs, nrhs, prhs);
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
 * File trailer for _coder_FMDemodRTLSDR_DLL_mex.c
 *
 * [EOF]
 */
