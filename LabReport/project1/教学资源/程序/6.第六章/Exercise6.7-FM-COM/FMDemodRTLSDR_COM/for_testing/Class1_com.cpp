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

HRESULT __stdcall Class1::FMDemodRTLSDR_COM(/*[in]*/long nargout, /*[in,out]*/VARIANT* 
                                             Baseband, /*[in]*/VARIANT ISamples, 
                                             /*[in]*/VARIANT QSamples) {
  return( CallComFcn( "FMDemodRTLSDR_COM", (int) nargout, 1, 2, Baseband, &ISamples, 
                      &QSamples ) );
}
HRESULT __stdcall Class1::MCRWaitForFigures()
{
  mclWaitForFiguresToDie(m_hinst);
  return(S_OK);
}
