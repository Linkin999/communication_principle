/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: FMDemoRTLSDR_DLL.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2022 23:48:43
 */

/* Include Files */
#include "FMDemoRTLSDR_DLL.h"
#include "FMDemoRTLSDR_DLL_data.h"
#include "FMDemoRTLSDR_DLL_initialize.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include <float.h>
#include <math.h>

/* Function Declarations */
static double rt_atan2d_snf(double u0, double u1);
static double rt_remd_snf(double u0, double u1);
static double rt_roundd_snf(double u);

/* Function Definitions */
/*
 * Arguments    : double u0
 *                double u1
 * Return Type  : double
 */
static double rt_atan2d_snf(double u0, double u1)
{
  double y;
  int b_u0;
  int b_u1;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      b_u0 = 1;
    } else {
      b_u0 = -1;
    }

    if (u1 > 0.0) {
      b_u1 = 1;
    } else {
      b_u1 = -1;
    }

    y = atan2(b_u0, b_u1);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/*
 * Arguments    : double u0
 *                double u1
 * Return Type  : double
 */
static double rt_remd_snf(double u0, double u1)
{
  double b_u1;
  double y;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = rtNaN;
  } else if (rtIsInf(u1)) {
    y = u0;
  } else {
    if (u1 < 0.0) {
      b_u1 = ceil(u1);
    } else {
      b_u1 = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != b_u1)) {
      b_u1 = fabs(u0 / u1);
      if (!(fabs(b_u1 - floor(b_u1 + 0.5)) > DBL_EPSILON * b_u1)) {
        y = 0.0 * u0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

/*
 * Arguments    : double u
 * Return Type  : double
 */
static double rt_roundd_snf(double u)
{
  double y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/*
 * Arguments    : const double ISamples[35830]
 *                const double QSamples[35830]
 *                double Baseband[35829]
 * Return Type  : void
 */
void FMDemoRTLSDR_DLL(const double ISamples[35830], const double QSamples[35830],
                      double Baseband[35829])
{
  static double phase[35830];
  double cumsum_dp_corr;
  double dp_corr;
  double pkm1;
  int exitg1;
  int ixLead;
  int iyLead;
  int m;
  if (!isInitialized_FMDemoRTLSDR_DLL) {
    FMDemoRTLSDR_DLL_initialize();
  }

  for (ixLead = 0; ixLead < 35830; ixLead++) {
    phase[ixLead] = rt_atan2d_snf(ISamples[ixLead], QSamples[ixLead]);
  }

  cumsum_dp_corr = 0.0;
  ixLead = 0;
  while ((ixLead + 1 < 35830) && (rtIsInf(phase[ixLead]) || rtIsNaN(phase[ixLead])))
  {
    ixLead++;
  }

  if (ixLead + 1 < 35830) {
    pkm1 = phase[ixLead];
    do {
      exitg1 = 0;
      ixLead++;
      while ((ixLead + 1 <= 35830) && (rtIsInf(phase[ixLead]) || rtIsNaN
              (phase[ixLead]))) {
        ixLead++;
      }

      if (ixLead + 1 > 35830) {
        exitg1 = 1;
      } else {
        pkm1 = phase[ixLead] - pkm1;
        dp_corr = pkm1 / 6.2831853071795862;
        if (fabs(rt_remd_snf(dp_corr, 1.0)) <= 0.5) {
          if (dp_corr < 0.0) {
            dp_corr = ceil(dp_corr);
          } else {
            dp_corr = floor(dp_corr);
          }
        } else {
          dp_corr = rt_roundd_snf(dp_corr);
        }

        if (fabs(pkm1) >= 3.1415926535897931) {
          cumsum_dp_corr += dp_corr;
        }

        pkm1 = phase[ixLead];
        phase[ixLead] -= 6.2831853071795862 * cumsum_dp_corr;
      }
    } while (exitg1 == 0);
  }

  ixLead = 1;
  iyLead = 0;
  pkm1 = phase[0];
  for (m = 0; m < 35829; m++) {
    dp_corr = pkm1;
    pkm1 = phase[ixLead];
    Baseband[iyLead] = phase[ixLead] - dp_corr;
    ixLead++;
    iyLead++;
  }
}

/*
 * File trailer for FMDemoRTLSDR_DLL.c
 *
 * [EOF]
 */
