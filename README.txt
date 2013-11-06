Calling C++ methods in DLL without .h and .lib file

This is an exercise of http://www.codeproject.com/Articles/529680/Accessing-an-API-through-a-closed-source-Cplusplus

The main idea is use LoadLibrary and GetProcAddress. However, there is a gotcha
of how to pass the "this" pointer.

1. Compile DLL
cl.exe /D_USRDLL /D_WINDLL lib1.cpp /link /DLL /OUT:lib1.dll

2. Compile main1.cpp
cl.exe main1.cpp /link lib1.lib

3. Compile main2.cpp
cl.exe main2.cpp
