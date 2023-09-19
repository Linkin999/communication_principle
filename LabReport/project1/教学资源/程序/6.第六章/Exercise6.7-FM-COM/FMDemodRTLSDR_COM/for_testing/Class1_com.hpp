#ifndef _FMDemodRTLSDR_COM_Class1_com_HPP
#define _FMDemodRTLSDR_COM_Class1_com_HPP 1

#include <windows.h>
#include "FMDemodRTLSDR_COM_idl.h"
#include "mclmcrrt.h"
#include "mclcom.h"
#include "mclcommain.h"
#include "mclcomclass.h"

class Class1 : public CMCLClassImpl<IClass1, &IID_IClass1, Class1, &CLSID_Class1>
{
public:
  Class1();
  ~Class1();

  HRESULT __stdcall FMDemodRTLSDR_COM(/*[in]*/long nargout, /*[in,out]*/VARIANT* 
                                      Baseband, /*[in]*/VARIANT ISamples, /*[in]*/VARIANT 
                                      QSamples); 
  HRESULT __stdcall MCRWaitForFigures();
};
#endif
