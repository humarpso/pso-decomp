#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 TObjPlayer::get_tp() { return *(s32*)((char*)this + 0x1c0); }
void TObjPlayer::set_effect_state(s32 v) { *(s32*)((char*)this + 0x1c4) = v; }

}
