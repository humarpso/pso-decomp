#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer::reset_status_block() { *(u8*)((char*)this + 0x0) = 0; *(s32*)((char*)this + 0x4) = 0; *(s32*)((char*)this + 0x8) = 0; *(s32*)((char*)this + 0xc) = 0; *(s32*)((char*)this + 0x10) = 0; }

}
