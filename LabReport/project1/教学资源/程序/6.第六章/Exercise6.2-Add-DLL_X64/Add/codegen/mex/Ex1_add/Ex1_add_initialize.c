/*
 * Ex1_add_initialize.c
 *
 * Code generation for function 'Ex1_add_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Ex1_add.h"
#include "Ex1_add_initialize.h"
#include "_coder_Ex1_add_mex.h"
#include "Ex1_add_data.h"

/* Function Declarations */
static void Ex1_add_once(void);

/* Function Definitions */
static void Ex1_add_once(void)
{
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "D:\\\\\xd7\xc0\xc3\xe6\x32\x30\x32\x31\xc4\xea\x32\xd4\xc2\\\\\xca\xe9\xbc\xae\xb3\xf6\xb0\xe6\\\\\xb3\xcc\xd0\xf2\\\\6.\xb5\xda\xc1\xf9\xd5\xc2\\\\Exercise6.2-Add-DLL_X64\\\\Add\\\\Ex1_add.m",
                  0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0, 0, "Ex1_add", 0, -1, 38);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 0, 26, -1, 33);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void Ex1_add_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    Ex1_add_once();
  }
}

/* End of code generation (Ex1_add_initialize.c) */
