#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer::clear_header_struct() { *(u8*)((char*)this + 0x0) = 0; *(u8*)((char*)this + 0x1) = 0; *(s16*)((char*)this + 0x2) = 0; *(s32*)((char*)this + 0x4) = 0; }

}
