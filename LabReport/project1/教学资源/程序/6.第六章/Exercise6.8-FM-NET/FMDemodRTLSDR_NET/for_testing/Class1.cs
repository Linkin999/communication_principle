/*
* MATLAB Compiler: 6.2 (R2016a)
* Date: Tue Mar 17 01:58:27 2020
* Arguments: "-B" "macro_default" "-W" "dotnet:FMDemodRTLSDR_NET,Class1,0.0,private" "-T"
* "link:lib" "-d"
* "D:\5-无线通信书籍编写\软件无线电入门教程：从实践到理论\书籍章节\程序\6.第六章\6.3_DLL_X
* 64\FMDemod\NET\FMDemodRTLSDR_NET\for_testing" "-v"
* "class{Class1:D:\5-无线通信书籍编写\软件无线电入门教程：从实践到理论\书籍章节\程序\6.第�
* 耚6.3_DLL_X64\FMDemod\NET\FMDemodRTLSDR_NET.m}" 
*/
using System;
using System.Reflection;
using System.IO;
using MathWorks.MATLAB.NET.Arrays;
using MathWorks.MATLAB.NET.Utility;

#if SHARED
[assembly: System.Reflection.AssemblyKeyFile(@"")]
#endif

namespace FMDemodRTLSDR_NET
{

  /// <summary>
  /// The Class1 class provides a CLS compliant, MWArray interface to the MATLAB
  /// functions contained in the files:
  /// <newpara></newpara>
  /// D:\5-无线通信书籍编写\软件无线电入门教程：从实践到理论\书籍章节\程序\6.第六章\6.3_DL
  /// L_X64\FMDemod\NET\FMDemodRTLSDR_NET.m
  /// </summary>
  /// <remarks>
  /// @Version 0.0
  /// </remarks>
  public class Class1 : IDisposable
  {
    #region Constructors

    /// <summary internal= "true">
    /// The static constructor instantiates and initializes the MATLAB Runtime instance.
    /// </summary>
    static Class1()
    {
      if (MWMCR.MCRAppInitialized)
      {
        try
        {
          Assembly assembly= Assembly.GetExecutingAssembly();

          string ctfFilePath= assembly.Location;

          int lastDelimiter= ctfFilePath.LastIndexOf(@"\");

          ctfFilePath= ctfFilePath.Remove(lastDelimiter, (ctfFilePath.Length - lastDelimiter));

          string ctfFileName = "FMDemodRTLSDR_NET.ctf";

          Stream embeddedCtfStream = null;

          String[] resourceStrings = assembly.GetManifestResourceNames();

          foreach (String name in resourceStrings)
          {
            if (name.Contains(ctfFileName))
            {
              embeddedCtfStream = assembly.GetManifestResourceStream(name);
              break;
            }
          }
          mcr= new MWMCR("",
                         ctfFilePath, embeddedCtfStream, true);
        }
        catch(Exception ex)
        {
          ex_ = new Exception("MWArray assembly failed to be initialized", ex);
        }
      }
      else
      {
        ex_ = new ApplicationException("MWArray assembly could not be initialized");
      }
    }


    /// <summary>
    /// Constructs a new instance of the Class1 class.
    /// </summary>
    public Class1()
    {
      if(ex_ != null)
      {
        throw ex_;
      }
    }


    #endregion Constructors

    #region Finalize

    /// <summary internal= "true">
    /// Class destructor called by the CLR garbage collector.
    /// </summary>
    ~Class1()
    {
      Dispose(false);
    }


    /// <summary>
    /// Frees the native resources associated with this object
    /// </summary>
    public void Dispose()
    {
      Dispose(true);

      GC.SuppressFinalize(this);
    }


    /// <summary internal= "true">
    /// Internal dispose function
    /// </summary>
    protected virtual void Dispose(bool disposing)
    {
      if (!disposed)
      {
        disposed= true;

        if (disposing)
        {
          // Free managed resources;
        }

        // Free native resources
      }
    }


    #endregion Finalize

    #region Methods

    /// <summary>
    /// Provides a single output, 0-input MWArrayinterface to the FMDemodRTLSDR_NET
    /// MATLAB function.
    /// </summary>
    /// <remarks>
    /// M-Documentation:
    /// 1、 反正切
    /// </remarks>
    /// <returns>An MWArray containing the first output argument.</returns>
    ///
    public MWArray FMDemodRTLSDR_NET()
    {
      return mcr.EvaluateFunction("FMDemodRTLSDR_NET", new MWArray[]{});
    }


    /// <summary>
    /// Provides a single output, 1-input MWArrayinterface to the FMDemodRTLSDR_NET
    /// MATLAB function.
    /// </summary>
    /// <remarks>
    /// M-Documentation:
    /// 1、 反正切
    /// </remarks>
    /// <param name="ISamples">Input argument #1</param>
    /// <returns>An MWArray containing the first output argument.</returns>
    ///
    public MWArray FMDemodRTLSDR_NET(MWArray ISamples)
    {
      return mcr.EvaluateFunction("FMDemodRTLSDR_NET", ISamples);
    }


    /// <summary>
    /// Provides a single output, 2-input MWArrayinterface to the FMDemodRTLSDR_NET
    /// MATLAB function.
    /// </summary>
    /// <remarks>
    /// M-Documentation:
    /// 1、 反正切
    /// </remarks>
    /// <param name="ISamples">Input argument #1</param>
    /// <param name="QSamples">Input argument #2</param>
    /// <returns>An MWArray containing the first output argument.</returns>
    ///
    public MWArray FMDemodRTLSDR_NET(MWArray ISamples, MWArray QSamples)
    {
      return mcr.EvaluateFunction("FMDemodRTLSDR_NET", ISamples, QSamples);
    }


    /// <summary>
    /// Provides the standard 0-input MWArray interface to the FMDemodRTLSDR_NET MATLAB
    /// function.
    /// </summary>
    /// <remarks>
    /// M-Documentation:
    /// 1、 反正切
    /// </remarks>
    /// <param name="numArgsOut">The number of output arguments to return.</param>
    /// <returns>An Array of length "numArgsOut" containing the output
    /// arguments.</returns>
    ///
    public MWArray[] FMDemodRTLSDR_NET(int numArgsOut)
    {
      return mcr.EvaluateFunction(numArgsOut, "FMDemodRTLSDR_NET", new MWArray[]{});
    }


    /// <summary>
    /// Provides the standard 1-input MWArray interface to the FMDemodRTLSDR_NET MATLAB
    /// function.
    /// </summary>
    /// <remarks>
    /// M-Documentation:
    /// 1、 反正切
    /// </remarks>
    /// <param name="numArgsOut">The number of output arguments to return.</param>
    /// <param name="ISamples">Input argument #1</param>
    /// <returns>An Array of length "numArgsOut" containing the output
    /// arguments.</returns>
    ///
    public MWArray[] FMDemodRTLSDR_NET(int numArgsOut, MWArray ISamples)
    {
      return mcr.EvaluateFunction(numArgsOut, "FMDemodRTLSDR_NET", ISamples);
    }


    /// <summary>
    /// Provides the standard 2-input MWArray interface to the FMDemodRTLSDR_NET MATLAB
    /// function.
    /// </summary>
    /// <remarks>
    /// M-Documentation:
    /// 1、 反正切
    /// </remarks>
    /// <param name="numArgsOut">The number of output arguments to return.</param>
    /// <param name="ISamples">Input argument #1</param>
    /// <param name="QSamples">Input argument #2</param>
    /// <returns>An Array of length "numArgsOut" containing the output
    /// arguments.</returns>
    ///
    public MWArray[] FMDemodRTLSDR_NET(int numArgsOut, MWArray ISamples, MWArray QSamples)
    {
      return mcr.EvaluateFunction(numArgsOut, "FMDemodRTLSDR_NET", ISamples, QSamples);
    }


    /// <summary>
    /// Provides an interface for the FMDemodRTLSDR_NET function in which the input and
    /// output
    /// arguments are specified as an array of MWArrays.
    /// </summary>
    /// <remarks>
    /// This method will allocate and return by reference the output argument
    /// array.<newpara></newpara>
    /// M-Documentation:
    /// 1、 反正切
    /// </remarks>
    /// <param name="numArgsOut">The number of output arguments to return</param>
    /// <param name= "argsOut">Array of MWArray output arguments</param>
    /// <param name= "argsIn">Array of MWArray input arguments</param>
    ///
    public void FMDemodRTLSDR_NET(int numArgsOut, ref MWArray[] argsOut, MWArray[] argsIn)
    {
      mcr.EvaluateFunction("FMDemodRTLSDR_NET", numArgsOut, ref argsOut, argsIn);
    }



    /// <summary>
    /// This method will cause a MATLAB figure window to behave as a modal dialog box.
    /// The method will not return until all the figure windows associated with this
    /// component have been closed.
    /// </summary>
    /// <remarks>
    /// An application should only call this method when required to keep the
    /// MATLAB figure window from disappearing.  Other techniques, such as calling
    /// Console.ReadLine() from the application should be considered where
    /// possible.</remarks>
    ///
    public void WaitForFiguresToDie()
    {
      mcr.WaitForFiguresToDie();
    }



    #endregion Methods

    #region Class Members

    private static MWMCR mcr= null;

    private static Exception ex_= null;

    private bool disposed= false;

    #endregion Class Members
  }
}
