/*
 * File: diff.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 17-Mar-2020 00:03:38
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "FMDemodRTLSDR_DLL.h"
#include "diff.h"

/* Function Definitions */

/*
 * Arguments    : const double x[35830]
 *                double y[35829]
 * Return Type  : void
 */
void diff(const double x[35830], double y[35829])
{
  int ixLead;
  int iyLead;
  double work;
  int m;
  double tmp2;
  ixLead = 1;
  iyLead = 0;
  work = x[0];
  for (m = 0; m < 35829; m++) {
    tmp2 = work;
    work = x[ixLead];
    tmp2 = x[ixLead] - tmp2;
    ixLead++;
    y[iyLead] = tmp2;
    iyLead++;
  }
}

/*
 * File trailer for diff.c
 *
 * [EOF]
 */
