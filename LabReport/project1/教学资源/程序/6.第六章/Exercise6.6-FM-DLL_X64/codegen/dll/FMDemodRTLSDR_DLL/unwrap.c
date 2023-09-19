/*
 * File: unwrap.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 17-Mar-2020 00:03:38
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "FMDemodRTLSDR_DLL.h"
#include "unwrap.h"

/* Function Declarations */
static double rt_remd_snf(double u0, double u1);
static double rt_roundd_snf(double u);

/* Function Definitions */

/*
 * Arguments    : double u0
 *                double u1
 * Return Type  : double
 */
static double rt_remd_snf(double u0, double u1)
{
  double y;
  double b_u1;
  double tr;
  if (!((!rtIsNaN(u0)) && (!rtIsInf(u0)) && ((!rtIsNaN(u1)) && (!rtIsInf(u1)))))
  {
    y = rtNaN;
  } else {
    if (u1 < 0.0) {
      b_u1 = ceil(u1);
    } else {
      b_u1 = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != b_u1)) {
      tr = u0 / u1;
      if (fabs(tr - rt_roundd_snf(tr)) <= DBL_EPSILON * fabs(tr)) {
        y = 0.0;
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
 * Arguments    : double p[35830]
 * Return Type  : void
 */
void unwrap(double p[35830])
{
  double cumsum_dp_corr;
  int k;
  double pkm1;
  int exitg1;
  double dp_corr;
  cumsum_dp_corr = 0.0;
  k = 0;
  while ((k + 1 < 35830) && (!((!rtIsInf(p[k])) && (!rtIsNaN(p[k]))))) {
    k++;
  }

  if (k + 1 < 35830) {
    pkm1 = p[k];
    do {
      exitg1 = 0;
      k++;
      while ((k + 1 <= 35830) && (!((!rtIsInf(p[k])) && (!rtIsNaN(p[k]))))) {
        k++;
      }

      if (k + 1 > 35830) {
        exitg1 = 1;
      } else {
        pkm1 = p[k] - pkm1;
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

        pkm1 = p[k];
        p[k] -= 6.2831853071795862 * cumsum_dp_corr;
      }
    } while (exitg1 == 0);
  }
}

/*
 * File trailer for unwrap.c
 *
 * [EOF]
 */
