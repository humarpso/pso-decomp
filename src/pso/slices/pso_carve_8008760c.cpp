#include "types.h"

extern "C" {

void fn_8008760C(void* p, void* q);
void fn_80087628(void* p, u32 v);
void fn_80087660(void* p, void* q);

void fn_8008760C(void* p, void* q) { *(u32*)((char*)p + 0x6c) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x70) = *(u32*)((char*)q + 0x4); *(u32*)((char*)p + 0x74) = *(u32*)((char*)q + 0x8); }
void fn_80087628(void* p, u32 v) { *(u16*)((char*)p + 0x2c) |= v; }
int fn_80087638(void) { return 0; }
int fn_8008764C(void) { return 0; }
void fn_80087660(void* p, void* q) { *(f32*)((char*)p + 0x60) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x64) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x68) = *(f32*)((char*)q + 0x8); }

}
