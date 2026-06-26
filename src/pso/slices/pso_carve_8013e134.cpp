#include "types.h"

extern "C" {

int fn_8013E1FC(void* a0 = 0, void* a1 = 0);
void fn_8013E1D0(void* p);
void fn_8013E17C(void* p, f32 v);
f32 fn_8013E184(void* p);
void fn_8013E18C(void* p, s16 v);
u16 fn_8013E194(void* p);
void fn_8013E19C(void* p, s32 a1);
void fn_8013E1C0(void* p, s32 v);
void fn_8013E1C8(void* p, s16 v);

int fn_8013E134(void) { return 0; }
void fn_8013E17C(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
f32 fn_8013E184(void* p) { return *(f32*)((char*)p + 0xc); }
void fn_8013E18C(void* p, s16 v) { *(s16*)((char*)p + 0x4) = v; }
u16 fn_8013E194(void* p) { return *(u16*)((char*)p + 0x6); }
void fn_8013E19C(void* p, s32 a1) { fn_8013E1C0((char*)p + 0x3c, a1); }
void fn_8013E1C0(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void fn_8013E1C8(void* p, s16 v) { *(s16*)((char*)p + 0x4) = v; }
void fn_8013E1D0(void* p) { fn_8013E1FC((char*)p + 0x14, (char*)p + 0xc); }
int fn_8013E1FC(void*, void*) { return 0; }

}
