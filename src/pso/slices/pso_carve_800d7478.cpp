#include "types.h"

extern "C" {

void fn_800D7478(void* p, void* q);

void fn_800D7478(void* p, void* q) { *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); }

}
