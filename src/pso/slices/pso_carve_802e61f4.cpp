#include "types.h"

extern "C" {

void fn_802E61F4(void* p, void* q);

void fn_802E61F4(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(u32*)((char*)p + 0x8) = *(u32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); }
int fn_802E6218(void) { return 0; }

}
