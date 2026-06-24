#include "types.h"

extern "C" {

void fn_802E4904(void* p, void* q);

void fn_802E4904(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

}
