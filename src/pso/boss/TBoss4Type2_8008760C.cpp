#include "types.h"

extern "C" {

void TBoss4Type2__sub_8008760C(void* p, void* q);
void TBoss4Type2__sub_80087628(void* p, u32 v);
void TNowLoading__sub_80087660(void* p, void* q);

void TBoss4Type2__sub_8008760C(void* p, void* q) { *(u32*)((char*)p + 0x6c) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x70) = *(u32*)((char*)q + 0x4); *(u32*)((char*)p + 0x74) = *(u32*)((char*)q + 0x8); }
void TBoss4Type2__sub_80087628(void* p, u32 v) { *(u16*)((char*)p + 0x2c) |= v; }

}
