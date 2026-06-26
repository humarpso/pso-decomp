#include "types.h"

extern "C" {

void fn_80072048(void* p, void* q);

void fn_80072048(void* p, void* q) { *(u8*)((char*)p + 0x0) = *(u8*)((char*)q + 0x0); *(u8*)((char*)p + 0x1) = *(u8*)((char*)q + 0x1); *(u16*)((char*)p + 0x2) = *(u16*)((char*)q + 0x2); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
int fn_8007206C(void) { return 0; }

}
