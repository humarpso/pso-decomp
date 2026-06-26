#include "types.h"

extern "C" {

int fn_800B96FC(void*, void*, void*);
int fn_800B9680(void* p);
int VecCopy__FP3VecPC3Vec(void*);

int fn_800B95E0(void) { return 0; }
int fn_800B965C(void) { return 0; }
int fn_800B9680(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x394); }
int fn_800B96A4(void) { return 0; }
void fn_800B96D4(void* p) { fn_800B96FC(p, (char*)p + 0x3b0, *(void**)((char*)p + 0x3b4)); }

}
