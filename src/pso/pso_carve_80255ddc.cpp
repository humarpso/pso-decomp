#include "types.h"

extern "C" {

s32 fn_80255DDC(void* p);
void fn_80255DE4(void* p);
s16 fn_80255DF4(void* p);
s16 fn_80255DFC(void* p);
s16 fn_80255E04(void* p);
s16 fn_80255E0C(void* p);
void fn_80255E14(void* p);

s32 fn_80255DDC(void* p) { return *(s32*)((char*)p + 0x1c); }
void fn_80255DE4(void* p) { *(u16*)((char*)p + 0x0) |= 0x20; }
s16 fn_80255DF4(void* p) { return *(s16*)((char*)p + 0x2fa); }
s16 fn_80255DFC(void* p) { return *(s16*)((char*)p + 0x2f8); }
s16 fn_80255E04(void* p) { return *(s16*)((char*)p + 0x2f2); }
s16 fn_80255E0C(void* p) { return *(s16*)((char*)p + 0x2ce); }
void fn_80255E14(void* p) { *(u8*)((char*)p + 0x60) |= 0x4; }
int fn_80255E24(void) { return 0; }
int fn_80255E3C(void) { return 0; }
int fn_80255E88(void) { return 0; }

}
