/*
 * File: _coder_Ex1_add_api.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 16-Mar-2020 18:53:54
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_Ex1_add_api.h"
#include "_coder_Ex1_add_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true, false, 131434U, NULL, "Ex1_add", NULL,
  false, { 2045744189U, 2170104910U, 2743257031U, 4284093946U }, NULL };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[2]);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *a, const
  char_T *identifier, real_T **y_data, int32_T y_size[2]);
static const mxArray *emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2]);

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                real_T **y_data
 *                int32_T y_size[2]
 * Return Type  : void
 */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[2])
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                real_T **ret_data
 *                int32_T ret_size[2]
 * Return Type  : void
 */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2] = { 1, 8 };

  boolean_T bv0[2] = { false, true };

  int32_T iv1[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv1);
  ret_size[0] = iv1[0];
  ret_size[1] = iv1[1];
  *ret_data = (real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *a
 *                const char_T *identifier
 *                real_T **y_data
 *                int32_T y_size[2]
 * Return Type  : void
 */
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *a, const
  char_T *identifier, real_T **y_data, int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(a), &thisId, y_data, y_size);
  emlrtDestroyArray(&a);
}

/*
 * Arguments    : const real_T u_data[]
 *                const int32_T u_size[2]
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m0, (void *)u_data);
  emlrtSetDimensions((mxArray *)m0, u_size, 2);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const mxArray *prhs[2]
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void Ex1_add_api(const mxArray *prhs[2], const mxArray *plhs[1])
{
  real_T (*sum_data)[8];
  real_T (*a_data)[8];
  int32_T a_size[2];
  real_T (*b_data)[8];
  int32_T b_size[2];
  int32_T sum_size[2];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  sum_data = (real_T (*)[8])mxMalloc(sizeof(real_T [8]));
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, 8);
  prhs[1] = emlrtProtectR2012b(prhs[1], 1, false, 8);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "a", (real_T **)&a_data, a_size);
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "b", (real_T **)&b_data, b_size);

  /* Invoke the target function */
  Ex1_add(*a_data, a_size, *b_data, b_size, *sum_data, sum_size);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*sum_data, sum_size);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void Ex1_add_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  Ex1_add_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void Ex1_add_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void Ex1_add_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_Ex1_add_api.c
 *
 * [EOF]
 */
