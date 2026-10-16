#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TAdRicoRing.h"

extern "C" {

void TObjPlayer::set_flags(u32 v) { *(u32*)((char*)this + 0x0) |= v; }

}
