#include "types.h"

extern "C" {

void fn_800852C8(void* p, void* a1);
void fn_800852EC(void* p, void* q);

void fn_800852C8(void* p, void* a1) { fn_800852EC((char*)p + 0x38, a1); }
void fn_800852EC(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(u8*)((char*)p + 0x8) = *(u8*)((char*)q + 0x8); *(u8*)((char*)p + 0x9) = *(u8*)((char*)q + 0x9); *(u8*)((char*)p + 0xa) = *(u8*)((char*)q + 0xa); *(u8*)((char*)p + 0xb) = *(u8*)((char*)q + 0xb); *(u32*)((char*)p + 0xc) = *(u32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); }

}
