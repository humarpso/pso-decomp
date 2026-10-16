#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TAdRicoRing.h"

extern "C" {

void*TObjPlayer::init_forward() { clear_id(); return this; }

void TObjPlayer::clear_id() { *(s32*)((char*)this + 0x0) = 0; }

}
