#include "types.h"

extern "C" {

void copy_vec3__11TBoss4Type2FPvPv(void* p, void* q);
void set_flags__11TBoss4Type2FPvUi(void* p, u32 v);
void copy_pos__11TNowLoadingFPvPv(void* p, void* q);

void copy_pos__11TNowLoadingFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x60) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x64) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x68) = *(f32*)((char*)q + 0x8); }

}
