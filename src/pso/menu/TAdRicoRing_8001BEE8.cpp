#include "types.h"
#include "pso/menu/TAdRicoRing_8001BEE8.h"
#include "pso/TAdRicoRing.h"
#include "pso/player/TObjPlayer.h"

void TAdRicoRing::clear_flags(u32 v) { *(u32 *)&this->m_name &= ~v; }

u8 test_flags_any(s32 *arg0, s32 arg1) {
    return (u8) ((*arg0 & arg1) != 0);
}
