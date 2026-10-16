#include "types.h"
#include "pso/misc/TOBarrierEnergy01.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void vfunc_17__17TOBarrierEnergy01Fv(void *arg0);
s32 update_anim_phase__17TOBarrierEnergy01Fv();

extern s32 *TOBarrierEnergy01__texture_lists;

void TOBarrierEnergy01::vfunc_17() {
    update_anim_phase__17TOBarrierEnergy01Fv();
    ((TOBarrierEnergy01 *)this)->play_ambient_loop_sound();
    if (!(*(s32 *)((s8 *)this + 0xD0) & 1)) {
        *(s32 *)((s8 *)this + 0xAC) = 3;
        ((TObjPlayer *)this)->clear_player_status_flag(0, 8);
        *(s32 *)((s8 *)this + 0x24) = (s32) *TOBarrierEnergy01__texture_lists;
    }
}

}
