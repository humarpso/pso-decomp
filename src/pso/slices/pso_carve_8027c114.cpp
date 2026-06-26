#include "types.h"

extern "C" {

void fn_8027C114(void* p);
void fn_8027C124(void* p);
s32 fn_8027C134(void* p);

void fn_8027C114(void* p) { *(u8*)((char*)p + 0x60) |= 0x8; }
void fn_8027C124(void* p) { *(u8*)((char*)p + 0x60) &= 0xfffffff7; }
s32 fn_8027C134(void* p) { return *(s32*)((char*)p + 0x68); }

}
