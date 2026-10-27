#include "types.h"
#include "pso/boss/TBoss3Volopt_80040F7C.h"
#include "pso/boss/TBoss3VoloptHiraisin.h"

void TBoss3VoloptHiraisin::clear_flag_08000000() {
    clear_player_status_flag(0, 0x08000000);
}

void TBoss3VoloptHiraisin::set_flag_08000000() {
    set_indexed_flags(0, 0x08000000);
}

s32 TBoss3Volopt__sub_80040FCC(TBoss3VoloptHiraisin *hiraisin) {
    return (((ActorCollisionState *)hiraisin->m_a4)->flags >> 1) & 1;
}
