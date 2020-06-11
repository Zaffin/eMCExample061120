This template is a standard C# class library project for use with Mastercam 2017 The project 
has a reference to the NETHook3_0.dll located in the root directory of your Mastercam 2017 installation. 
However, if you installed into a directory other than the default installation directory you may need to update the project reference to the NETHook3_0.dll 
in order for your project to compile. This project will work with other versions of Mastercam just remove the NETHook3_0 reference and add the one from the version of
Mastercam you want to use.


The included Project Setup documents detail setup for building debugging a NET-Hook.

**NOTE: Do not use spaces when naming your project as this will cause issues with loading resources
**NOTE: This NET-Hook class library targets the .NET 4.5 Framework x64 build.
**NOTE: Building will give a command copy error until you rename the FT file to match that of your project
**NOTE: Make sure you are running Visual Studio in Administrator mode, see the Project Setup documents for instructions.


Visual Studio 2017 Community Edition (Free) is recommended if you are using the previous Visual Studio Express Edition.
https://www.visualstudio.com/en-us/downloads/download-visual-studio-vs.aspx


** POST BUILD STEP **

copy "$(TargetPath)" "C:\Program Files\mcam2017\chooks\$(TargetFileName)"
copy "$(ProjectDir)FunctionTable\$(TargetName).ft" "C:\Program Files\mcam2017\chooks\$(TargetName).ft"


** DEBUGGING **

Start External Application -> C:\Program Files\mcam2017\Mastercam.exe

Working Directory -> C:\Program Files\mcam2017