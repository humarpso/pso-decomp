#include "types.h"

extern "C" {

void copy_vec3__11TBoss4Type2FPvPv(void* p, void* q);
void set_flags__11TBoss4Type2FPvUi(void* p, u32 v);
void copy_pos__11TNowLoadingFPvPv(void* p, void* q);

void copy_vec3__11TBoss4Type2FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x6c) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x70) = *(u32*)((char*)q + 0x4); *(u32*)((char*)p + 0x74) = *(u32*)((char*)q + 0x8); }
void set_flags__11TBoss4Type2FPvUi(void* p, u32 v) { *(u16*)((char*)p + 0x2c) |= v; }

}
