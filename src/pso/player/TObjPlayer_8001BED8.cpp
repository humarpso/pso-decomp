#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TAdRicoRing.h"

extern "C" {

void TAdRicoRingCtrl__sub_8001BED0(void* p, f32 v);

void TObjPlayer::set_flags(u32 v) { *(u32*)((char*)this + 0x0) |= v; }

}
