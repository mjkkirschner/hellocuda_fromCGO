have to use x64 Native Tools Command Prompt For VS 2019 to actually get the correct compiler and toolset to work with nvcc.

```
nvcc -add.cu -o addcuda.dll --shared
```
the nvcc toolchain uses cl.exe (MSVSC compiler) and so we needed to mark the header with special export syntax - checkout add.h.



had to install a gcc compiler for CGO - I guess we could point to msbuild/vscpp toolchain - but instead

https://jmeubank.github.io/tdm-gcc/articles/2020-03/9.2.0-release
or
https://medium.com/@martin.kunc/golang-compile-go-gl-example-on-windows-in-mingw-64-bfb6eb66a143

mixing the two toolchains result linker errors unless exposing C abi



