/*
 * Ex1_add_terminate.c
 *
 * Code generation for function 'Ex1_add_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Ex1_add.h"
#include "Ex1_add_terminate.h"
#include "_coder_Ex1_add_mex.h"
#include "Ex1_add_data.h"

/* Function Definitions */
void Ex1_add_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void Ex1_add_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (Ex1_add_terminate.c) */
