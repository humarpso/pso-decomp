#include "types.h"
#include "pso/misc/TNowLoading.h"

extern "C" {

void copy_vec3__11TBoss4Type2FPv(void* p, void* q);
void set_flags__11TBoss4Type2FUl(void* p, u32 v);

void TNowLoading::copy_pos(void* q) { *(f32*)((char*)this + 0x60) = *(f32*)((char*)q + 0x0); *(f32*)((char*)this + 0x64) = *(f32*)((char*)q + 0x4); *(f32*)((char*)this + 0x68) = *(f32*)((char*)q + 0x8); }

}
