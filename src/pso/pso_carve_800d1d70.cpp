#include "types.h"

extern "C" {

s32 fn_800D1D70(void* p);
void* fn_800D1D78(void* p);

s32 fn_800D1D70(void* p) { return *(s32*)((char*)p + 0x46c); }
void* fn_800D1D78(void* p) { return (char*)p + 0x47c; }
int fn_800D1D80(void) { return 0; }
int fn_800D1DBC(void) { return 0; }
int fn_800D1E04(void) { return 0; }

}
