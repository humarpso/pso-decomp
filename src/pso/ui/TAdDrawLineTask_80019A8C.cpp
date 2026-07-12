#include "types.h"

extern "C" {

void TAdDrawLineTask__sub_80019A8C(void* p, void* q);

void TAdDrawLineTask__sub_80019A8C(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(u32*)((char*)p + 0xc) = *(u32*)((char*)q + 0xc); }

}
