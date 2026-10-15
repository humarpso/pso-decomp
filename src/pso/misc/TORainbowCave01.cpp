#include "types.h"

extern "C" {

void update__15TORainbowCave01FPv(void *arg0);

s32 check_demo_mode__10TObjPlayerFv();
s32 update_anim_phase__17TOBarrierEnergy01FPv(void *);
s32 TORainbowCave01__sub_80158604(void *);

void update__15TORainbowCave01FPv(void *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TORainbowCave01__sub_80158604(arg0);
        return;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0xBC) != 0U) {
        update_anim_phase__17TOBarrierEnergy01FPv(arg0);
    }
}

}
