#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TAdRicoRingCtrl__sub_8001BED0(void* p, f32 v);
void clear_flags__11TAdRicoRingFUl(void* p, u32 v);
void set_flags__10TObjPlayerFUl(void* p, u32 v);

void*TObjPlayer::init_forward() { clear_id(); return this; }

void TObjPlayer::clear_id() { *(s32*)((char*)this + 0x0) = 0; }

}
