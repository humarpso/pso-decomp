#include "types.h"
#include "pso/misc/TNowLoading.h"
#include "pso/boss/TBoss4Type2.h"

void TNowLoading::copy_pos(void* q) { *(f32*)((char*)this + 0x60) = *(f32*)((char*)q + 0x0); *(f32*)((char*)this + 0x64) = *(f32*)((char*)q + 0x4); *(f32*)((char*)this + 0x68) = *(f32*)((char*)q + 0x8); }
