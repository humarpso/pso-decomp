#include "types.h"

extern "C" {

void TWindowSubMag__sub_8027C114(void* p);
void TWindowSubMag__sub_8027C124(void* p);
s32 TWindowSubMag__sub_8027C134(void* p);

void TWindowSubMag__sub_8027C114(void* p) { *(u8*)((char*)p + 0x60) |= 0x8; }
void TWindowSubMag__sub_8027C124(void* p) { *(u8*)((char*)p + 0x60) &= 0xfffffff7; }
s32 TWindowSubMag__sub_8027C134(void* p) { return *(s32*)((char*)p + 0x68); }

}
