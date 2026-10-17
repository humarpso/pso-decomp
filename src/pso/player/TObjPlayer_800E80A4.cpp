#include "types.h"
#include "pso/player/TObjPlayer.h"

void TObjPlayer::copy_vec3(void* q) { *(u32*)((char*)this + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)this + 0x4) = *(u32*)((char*)q + 0x4); *(u32*)((char*)this + 0x8) = *(u32*)((char*)q + 0x8); }
