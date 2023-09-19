/*
 * File: _coder_FMDemodRTLSDR_DLL_api.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 17-Mar-2020 00:03:38
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_FMDemodRTLSDR_DLL_api.h"
#include "_coder_FMDemodRTLSDR_DLL_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true, false, 131434U, NULL,
  "FMDemodRTLSDR_DLL", NULL, false, { 2045744189U, 2170104910U, 2743257031U,
    4284093946U }, NULL };

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[35830];
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[35830];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *ISamples,
  const char_T *identifier))[35830];
static const mxArray *emlrt_marshallOut(const real_T u[35829]);

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[35830]
 */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[35830]
{
  real_T (*y)[35830];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[35830]
 */
  static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[35830]
{
  real_T (*ret)[35830];
  static const int32_T dims[2] = { 1, 35830 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[35830])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *ISamples
 *                const char_T *identifier
 * Return Type  : real_T (*)[35830]
 */
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *ISamples,
  const char_T *identifier))[35830]
{
  real_T (*y)[35830];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(ISamples), &thisId);
  emlrtDestroyArray(&ISamples);
  return y;
}
/*
 * Arguments    : const real_T u[35829]
 * Return Type  : const mxArray *
 */
  static const mxArray *emlrt_marshallOut(const real_T u[35829])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 1, 35829 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m0, (void *)u);
  emlrtSetDimensions((mxArray *)m0, iv1, 2);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const mxArray *prhs[2]
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void FMDemodRTLSDR_DLL_api(const mxArray *prhs[2], const mxArray *plhs[1])
{
  real_T (*Baseband)[35829];
  real_T (*ISamples)[35830];
  real_T (*QSamples)[35830];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  Baseband = (real_T (*)[35829])mxMalloc(sizeof(real_T [35829]));
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, -1);
  prhs[1] = emlrtProtectR2012b(prhs[1], 1, false, -1);

  /* Marshall function inputs */
  ISamples = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "ISamples");
  QSamples = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "QSamples");

  /* Invoke the target function */
  FMDemodRTLSDR_DLL(*ISamples, *QSamples, *Baseband);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*Baseband);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void FMDemodRTLSDR_DLL_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  FMDemodRTLSDR_DLL_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void FMDemodRTLSDR_DLL_initialize(void)
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
void FMDemodRTLSDR_DLL_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_FMDemodRTLSDR_DLL_api.c
 *
 * [EOF]
 */
