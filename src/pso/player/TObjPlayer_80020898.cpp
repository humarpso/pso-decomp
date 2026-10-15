#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer::copy_xyz(void* q) { *(u32*)((char*)this + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)this + 0x4) = *(u32*)((char*)q + 0x4); *(u32*)((char*)this + 0x8) = *(u32*)((char*)q + 0x8); }

}
