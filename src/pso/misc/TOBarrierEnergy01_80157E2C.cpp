#include "types.h"
#include "pso/misc/TOBarrierEnergy01.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TOBarrierEnergy01__vt15(void *arg0);
s32 update_anim_phase__17TOBarrierEnergy01Fv();

extern s32 *TOBarrierEnergy01__texture_lists;

void TOBarrierEnergy01__vt15(void *arg0) {
    update_anim_phase__17TOBarrierEnergy01Fv();
    ((TOBarrierEnergy01 *)arg0)->play_ambient_loop_sound();
    if (!(*(s32 *)((s8 *)arg0 + 0xD0) & 1)) {
        *(s32 *)((s8 *)arg0 + 0xAC) = 3;
        ((TObjPlayer *)arg0)->clear_player_status_flag(0, 8);
        *(s32 *)((s8 *)arg0 + 0x24) = (s32) *TOBarrierEnergy01__texture_lists;
    }
}

}
