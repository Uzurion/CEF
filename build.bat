mkdir build
cd build

:launch
cls
echo "win":    build launcher windows
echo "mac":    build launcher MACos
echo "linux":  build launcher linux
set /P c=enter your choice: 
if /I "%c%" EQU "win" goto windows
if /I "%c%" EQU "mac" goto macos
if /I "%c%" EQU "linux" goto linux
goto :launch


:linux
cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release ..
make -j4

:macos
cmake -G "Xcode" -DPROJECT_ARCH="x86_64" ..
cmake -G "Xcode" -DPROJECT_ARCH="arm64" ..

:windows
cmake -G "Visual Studio 16" -A Win32 ..
cmake -G "Visual Studio 16" -A x64 ..