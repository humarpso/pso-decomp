#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"
#include "pso/misc/TORainbowCave01.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 update_anim_phase__17TOBarrierEnergy01Fv(void *);
s32 TORainbowCave01__sub_80158604(void *);

void TUnk_804AFBF8::run_task() {
    if (TObjPlayer::check_demo_mode() == 1) {
        TORainbowCave01__sub_80158604(this);
        return;
    }
    if ((u32) *(u32 *)&this->unk_BC != 0U) {
        update_anim_phase__17TOBarrierEnergy01Fv(this);
    }
}

}
