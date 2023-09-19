/*
 * File: FMDemodRTLSDR_DLL.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 17-Mar-2020 00:03:38
 */

#ifndef FMDEMODRTLSDR_DLL_H
#define FMDEMODRTLSDR_DLL_H

/* Include Files */
#include <float.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "FMDemodRTLSDR_DLL_types.h"

/* Function Declarations */
#ifdef __cplusplus

extern "C" {

#endif

  extern void FMDemodRTLSDR_DLL(const double ISamples[35830], const double
    QSamples[35830], double Baseband[35829]);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for FMDemodRTLSDR_DLL.h
 *
 * [EOF]
 */
