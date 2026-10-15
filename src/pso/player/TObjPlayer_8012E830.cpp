#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer::start_weapon_recoil() { *(s32*)((char*)this + 0x1fc) = 1; }

}
