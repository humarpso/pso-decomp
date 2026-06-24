#include "types.h"

extern "C" {

void fn_8013E26C(void* p, s32 a1);
void fn_8013E290(void* p, s32 v);
s16 fn_8013E298(void* p);
s32 fn_8013E2A0(void* p);
s32 fn_8013E2A8(void* p);
void fn_8013E2C0(void* p);
void fn_8013E2CC(void* p, s32 v);

void fn_8013E26C(void* p, s32 a1) { fn_8013E290((char*)p + 0x3c, a1); }
void fn_8013E290(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
s16 fn_8013E298(void* p) { return *(s16*)((char*)p + 0x0); }
s32 fn_8013E2A0(void* p) { return *(s32*)((char*)p + 0x0); }
s32 fn_8013E2A8(void* p) { return *(s32*)((char*)p + 0x4); }
int fn_8013E2B0(void) { return 0; }
void fn_8013E2C0(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void fn_8013E2CC(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }

}
