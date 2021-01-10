
#ifdef __cplusplus
extern "C" {  // only need to export C interface if
              // used by C++ source code
#endif

 __declspec(dllexport) int  wrapper();
 
#ifdef __cplusplus
}
#endif