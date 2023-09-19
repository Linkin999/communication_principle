/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_FMDemoRTLSDR_DLL_api.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2022 23:48:43
 */

/* Include Files */
#include "_coder_FMDemoRTLSDR_DLL_api.h"
#include "_coder_FMDemoRTLSDR_DLL_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131595U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "FMDemoRTLSDR_DLL",                  /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

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
  static const int32_T dims[2] = { 1, 35830 };

  real_T (*ret)[35830];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[35830])emlrtMxGetData(src);
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
  emlrtMsgIdentifier thisId;
  real_T (*y)[35830];
  thisId.fIdentifier = (const char_T *)identifier;
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
  static const int32_T iv[2] = { 0, 0 };

  static const int32_T iv1[2] = { 1, 35829 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, iv1, 2);
  emlrtAssign(&y, m);
  return y;
}

/*
 * Arguments    : const mxArray * const prhs[2]
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void FMDemoRTLSDR_DLL_api(const mxArray * const prhs[2], const mxArray *plhs[1])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T (*ISamples)[35830];
  real_T (*QSamples)[35830];
  real_T (*Baseband)[35829];
  st.tls = emlrtRootTLSGlobal;
  Baseband = (real_T (*)[35829])mxMalloc(sizeof(real_T [35829]));

  /* Marshall function inputs */
  ISamples = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "ISamples");
  QSamples = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "QSamples");

  /* Invoke the target function */
  FMDemoRTLSDR_DLL(*ISamples, *QSamples, *Baseband);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*Baseband);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void FMDemoRTLSDR_DLL_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  FMDemoRTLSDR_DLL_xil_terminate();
  FMDemoRTLSDR_DLL_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void FMDemoRTLSDR_DLL_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

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
void FMDemoRTLSDR_DLL_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_FMDemoRTLSDR_DLL_api.c
 *
 * [EOF]
 */
