#include "types.h"

extern "C" {

void fn_80290884(void* p, void* q);

void fn_80290884(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
int fn_80290898(void) { return 0; }

}
