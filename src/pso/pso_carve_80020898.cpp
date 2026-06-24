#include "types.h"

extern "C" {

void fn_80020898(void* p, void* q);

void fn_80020898(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); *(u32*)((char*)p + 0x8) = *(u32*)((char*)q + 0x8); }
int fn_800208B4(void) { return 0; }

}
