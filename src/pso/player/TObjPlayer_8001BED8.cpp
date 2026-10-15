#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TAdRicoRingCtrl__sub_8001BED0(void* p, f32 v);
void clear_flags__11TAdRicoRingFUl(void* p, u32 v);
void clear_id__10TObjPlayerFv(void* p);

void TObjPlayer::set_flags(u32 v) { *(u32*)((char*)this + 0x0) |= v; }

}
