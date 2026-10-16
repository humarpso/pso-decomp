#include "types.h"
#include "pso/misc/TORainbowCave01.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 update_anim_phase__17TOBarrierEnergy01Fv(void *);
s32 TORainbowCave01__sub_80158604(void *);

void TORainbowCave01::update() {
    if (TObjPlayer::check_demo_mode() == 1) {
        TORainbowCave01__sub_80158604(this);
        return;
    }
    if ((u32) *(u32 *)((s8 *)this + 0xBC) != 0U) {
        update_anim_phase__17TOBarrierEnergy01Fv(this);
    }
}

}
