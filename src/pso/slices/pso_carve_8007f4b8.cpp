#include "types.h"

extern "C" {

void fn_8007F560(void* p, void* q);

int fn_8007F4B8(void) { return 0; }
void fn_8007F560(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

}
