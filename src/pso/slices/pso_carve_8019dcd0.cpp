#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int fn_8001960C(void*);
s32 fn_8019DCD0(void* p);
void fn_8019DCD8(void* p, s32 v);
void fn_8019DD14(void* p, u32 v);
void fn_8019DD24(void* p, u32 v);

s32 fn_8019DCD0(void* p) { return *(s32*)((char*)p + 0xc); }
void fn_8019DCD8(void* p, s32 v) { *(s32*)((char*)p + 0x3c8) = v; }
void fn_8019DCE0(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); }
void fn_8019DD14(void* p, u32 v) { *(u32*)((char*)p + 0x8) &= ~v; }
void fn_8019DD24(void* p, u32 v) { *(u32*)((char*)p + 0x8) |= v; }

}
