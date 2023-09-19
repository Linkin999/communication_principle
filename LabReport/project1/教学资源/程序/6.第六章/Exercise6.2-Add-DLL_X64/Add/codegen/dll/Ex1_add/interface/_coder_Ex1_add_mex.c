/*
 * File: _coder_Ex1_add_mex.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 18-Jul-2021 15:55:14
 */

/* Include Files */
#include "_coder_Ex1_add_api.h"
#include "_coder_Ex1_add_mex.h"

/* Function Declarations */
static void Ex1_add_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[2]);

/* Function Definitions */

/*
 * Arguments    : int32_T nlhs
 *                const mxArray *plhs[1]
 *                int32_T nrhs
 *                const mxArray *prhs[2]
 * Return Type  : void
 */
static void Ex1_add_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[2])
{
  int32_T n;
  const mxArray *inputs[2];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4, 7,
                        "Ex1_add");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 7,
                        "Ex1_add");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
  }

  /* Call the function. */
  Ex1_add_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  Ex1_add_terminate();
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
  mexAtExit(Ex1_add_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  Ex1_add_initialize();

  /* Dispatch the entry-point. */
  Ex1_add_mexFunction(nlhs, plhs, nrhs, prhs);
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
 * File trailer for _coder_Ex1_add_mex.c
 *
 * [EOF]
 */
