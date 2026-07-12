#include "types.h"

extern "C" {

void TObjPlayer__sub_80020898(void* p, void* q);

void TObjPlayer__sub_80020898(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); *(u32*)((char*)p + 0x8) = *(u32*)((char*)q + 0x8); }

}
