#include "types.h"
#include "pso/TAdRicoRing.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
u8 test_flags_any(s32 *arg0, s32 arg1);
}

extern "C" {

void TAdRicoRingCtrl__sub_8001BED0(void* p, f32 v);

void TAdRicoRing::clear_flags(u32 v) { *(u32*)((char*)this + 0x0) &= ~v; }

u8 test_flags_any(s32 *arg0, s32 arg1) {
    return (u8) ((*arg0 & arg1) != 0);
}

}
