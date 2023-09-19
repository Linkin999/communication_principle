#include "Class1_com.hpp"

Class1::Class1()
{
  g_pModule->InitializeComponentInstanceEx(&m_hinst);
}
Class1::~Class1()
{
  if (m_hinst)
    g_pModule->TerminateInstance(&m_hinst);
}

HRESULT __stdcall Class1::Ex1_add(/*[in]*/long nargout, /*[in,out]*/VARIANT* sum, 
                                   /*[in]*/VARIANT a, /*[in]*/VARIANT b) {
  return( CallComFcn( "Ex1_add", (int) nargout, 1, 2, sum, &a, &b ) );
}
HRESULT __stdcall Class1::MCRWaitForFigures()
{
  mclWaitForFiguresToDie(m_hinst);
  return(S_OK);
}
