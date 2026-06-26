#include "types.h"

extern "C" {

f32 TObjEneDelDepthBomb__sub_80316244(void* p);
int fn_8031624C(void* p);
s32 fn_803162A0(void* p);

f32 TObjEneDelDepthBomb__sub_80316244(void* p) { return *(f32*)((char*)p + 0x390); }
int fn_8031624C(void* p) { return (*(u32*)((char*)p + 0x30) >> 4) & 0x1; }
int fn_80316258(void) { return 0; }
s32 fn_803162A0(void* p) { return *(s32*)((char*)p + 0x4); }
int fn_803162A8(void) { return 0; }

}
