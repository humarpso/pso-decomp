#include "types.h"

extern "C" {

void fn_801A4C6C(void* p);
void fn_801A4C7C(void* p, s32 v);

void fn_801A4C6C(void* p) { *(u32*)((char*)p + 0x20) |= 0x1; }
void fn_801A4C7C(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }

}
