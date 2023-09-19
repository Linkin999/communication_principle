/*
 * Ex1_add.c
 *
 * Code generation for function 'Ex1_add'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Ex1_add.h"
#include "Ex1_add_data.h"

/* Function Definitions */
real_T Ex1_add(const emlrtStack *sp, real_T a, real_T b)
{
  (void)sp;
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0);
  return a + b;
}

/* End of code generation (Ex1_add.c) */
