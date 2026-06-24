#include "types.h"

extern "C" {

void fn_80266B04(void* p, void* q);

void fn_80266B04(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }
int fn_80266B18(void) { return 0; }

}
