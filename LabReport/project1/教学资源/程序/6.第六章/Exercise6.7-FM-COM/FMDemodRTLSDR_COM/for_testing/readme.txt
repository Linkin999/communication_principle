MATLAB .NET Assembly (COM Component) 

1. Prerequisites for Deployment 

. Verify the MATLAB Runtime is installed and ensure you    
  have installed version 9.0.1 (R2016a).   

. If the MATLAB Runtime is not installed, do the following:
  (1) enter
  
      >>mcrinstaller
      
      at MATLAB prompt. The MCRINSTALLER command displays the 
      location of the MATLAB Runtime installer.

  (2) run the MATLAB Runtime installer.

Or download the Windows 64-bit version of the MATLAB Runtime for R2016a 
from the MathWorks Web site by navigating to

   http://www.mathworks.com/products/compiler/mcr/index.html
   
   
For more information about the MATLAB Runtime and the MATLAB Runtime installer, see 
Package and Distribute in the MATLAB Compiler SDK documentation  
in the MathWorks Documentation Center.    

NOTE: You will need administrator rights to run MCRInstaller.

2. Files to Deploy and Package

-FMDemodRTLSDR_COM_1_0.dll (output from mcc)
-MCRInstaller.exe
   -if end users are unable to download the MATLAB Runtime using the above  
    link, include it when building your component by clicking 
    the "Runtime downloaded from web" link in the Deployment Tool
-This readme file

NOTE: Verify FMDemodRTLSDR_COM_1_0.dll is registered on the target machine. If you have 
      trouble registering this DLL, see Troubleshooting in the MATLAB .NET Assembly 
      documentation in the MathWorks Documentation Center.

3. Definitions

For information on deployment terminology, go to 
http://www.mathworks.com/help. Select MATLAB Compiler >   
Getting Started > About Application Deployment > 
Deployment Product Terms in the MathWorks Documentation 
Center.

