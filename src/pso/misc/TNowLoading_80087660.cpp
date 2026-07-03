#include "types.h"

extern "C" {

void TBoss4Type2__sub_8008760C(void* p, void* q);
void TBoss4Type2__sub_80087628(void* p, u32 v);
void TNowLoading__sub_80087660(void* p, void* q);

void TNowLoading__sub_80087660(void* p, void* q) { *(f32*)((char*)p + 0x60) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x64) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x68) = *(f32*)((char*)q + 0x8); }

}
