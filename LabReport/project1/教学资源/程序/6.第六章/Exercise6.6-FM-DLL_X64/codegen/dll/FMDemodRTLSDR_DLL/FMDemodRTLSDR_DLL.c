/*
 * File: FMDemodRTLSDR_DLL.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 17-Mar-2020 00:03:38
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "FMDemodRTLSDR_DLL.h"
#include "diff.h"
#include "unwrap.h"
#include "atan2.h"

/* Function Definitions */

/*
 * 1、 反正切
 * Arguments    : const double ISamples[35830]
 *                const double QSamples[35830]
 *                double Baseband[35829]
 * Return Type  : void
 */
void FMDemodRTLSDR_DLL(const double ISamples[35830], const double QSamples[35830],
  double Baseband[35829])
{
  static double Phase[35830];
  b_atan2(ISamples, QSamples, Phase);

  /* 2、 相位连续 */
  unwrap(Phase);

  /* 3、 微分 */
  diff(Phase, Baseband);
}

/*
 * File trailer for FMDemodRTLSDR_DLL.c
 *
 * [EOF]
 */
