#include "types.h"

extern "C" {

s16 fn_800A7764(void* p);
s16 fn_800A776C(void* p);
int fn_800A7774(void* p);
void fn_800A77C0(void* p, u32 v);
int VecCopy__FP3VecPC3Vec(void*);

s16 fn_800A7764(void* p) { return *(s16*)((char*)p + 0x2c8); }
s16 fn_800A776C(void* p) { return *(s16*)((char*)p + 0x2ca); }
int fn_800A7774(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x38); }
int fn_800A7798(void) { return 0; }
void fn_800A77C0(void* p, u32 v) { *(u32*)((char*)p + 0xb0) |= v; }
int fn_800A77D0(void) { return 0; }
int fn_800A77D4(void) { return 0; }
int fn_800A7820(void) { return 0; }
int fn_800A786C(void) { return 0; }
int fn_800A78B8(void) { return 0; }

}
