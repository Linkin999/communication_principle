#ifndef _Ex1_add_Class1_com_HPP
#define _Ex1_add_Class1_com_HPP 1

#include <windows.h>
#include "Ex1_add_idl.h"
#include "mclmcrrt.h"
#include "mclcom.h"
#include "mclcommain.h"
#include "mclcomclass.h"

class Class1 : public CMCLClassImpl<IClass1, &IID_IClass1, Class1, &CLSID_Class1>
{
public:
  Class1();
  ~Class1();

  HRESULT __stdcall Ex1_add(/*[in]*/long nargout, /*[in,out]*/VARIANT* sum, 
                            /*[in]*/VARIANT a, /*[in]*/VARIANT b); 
  HRESULT __stdcall MCRWaitForFigures();
};
#endif
