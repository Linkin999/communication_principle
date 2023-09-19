/*
 * File: Ex1_add.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 16-Mar-2020 18:53:54
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Ex1_add.h"

/* Function Definitions */

/*
 * Arguments    : const double a_data[]
 *                const int a_size[2]
 *                const double b_data[]
 *                const int b_size[2]
 *                double sum_data[]
 *                int sum_size[2]
 * Return Type  : void
 */
void Ex1_add(const double a_data[], const int a_size[2], const double b_data[],
             const int b_size[2], double sum_data[], int sum_size[2])
{
  int loop_ub;
  int i0;
  (void)b_size;
  sum_size[0] = 1;
  sum_size[1] = a_size[1];
  loop_ub = a_size[0] * a_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    sum_data[i0] = a_data[i0] + b_data[i0];
  }
}

/*
 * File trailer for Ex1_add.c
 *
 * [EOF]
 */
