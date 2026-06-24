#include "types.h"

extern "C" {

s32 fn_8019DCD0(void* p);
void fn_8019DCD8(void* p, s32 v);
void fn_8019DD14(void* p, u32 v);
void fn_8019DD24(void* p, u32 v);

s32 fn_8019DCD0(void* p) { return *(s32*)((char*)p + 0xc); }
void fn_8019DCD8(void* p, s32 v) { *(s32*)((char*)p + 0x3c8) = v; }
int fn_8019DCE0(void) { return 0; }
void fn_8019DD14(void* p, u32 v) { *(u32*)((char*)p + 0x8) &= ~v; }
void fn_8019DD24(void* p, u32 v) { *(u32*)((char*)p + 0x8) |= v; }

}
