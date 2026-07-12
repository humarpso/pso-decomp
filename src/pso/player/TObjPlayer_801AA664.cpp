#include "types.h"

extern "C" {

s32 fn_803966F8(s32, s32 *, s32, s32);
s32 TObjPlayer__sub_801AA584(s32 arg0, s16 arg1);
int __dl__FPv(void* a0 = 0);
int TObjPlayer__sub_801AA6E4(void* a0 = 0, void* a1 = 0);
void* TObjPlayer__sub_801AA66C(void* p, void* a1);
int TObjPlayer__sub_801AA64C(void* a0 = 0);
void* TObjPlayer__sub_801AA61C(void* p);
s16 TObjPlayer__sub_801AA508(void* p);
u16 TObjPlayer__sub_801AA510(void* p);
void TObjPlayer__sub_801AA518(void* p, s16 v);
void TObjPlayer__sub_801AA520(void* p, s16 v);
u16 TObjPlayer__sub_801AA664(void* p);

u16 TObjPlayer__sub_801AA664(void* p) { return *(u16*)((char*)p + 0x0); }
void* TObjPlayer__sub_801AA66C(void* p, void* a1) { *(short*)(p) = *(unsigned short*)(a1); *(short*)((char*)p + 0x2) = *(short*)((char*)a1 + 0x2); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); TObjPlayer__sub_801AA6E4((char*)p + 0x8, (char*)a1 + 0x8); TObjPlayer__sub_801AA6E4((char*)p + 0xc, (char*)a1 + 0xc); TObjPlayer__sub_801AA6E4((char*)p + 0x10, (char*)a1 + 0x10); TObjPlayer__sub_801AA6E4((char*)p + 0x14, (char*)a1 + 0x14); return p; }

}
