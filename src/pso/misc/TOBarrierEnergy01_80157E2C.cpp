#include "types.h"

extern "C" {

void TOBarrierEnergy01__vt15(void *arg0);
s32 play_ambient_loop_sound__17TOBarrierEnergy01Fv(void *);
s32 clear_player_status_flag__10TObjPlayerFlUl(void *, s32, s32);
s32 update_anim_phase__17TOBarrierEnergy01Fv();

extern s32 *TOBarrierEnergy01__texture_lists;

void TOBarrierEnergy01__vt15(void *arg0) {
    update_anim_phase__17TOBarrierEnergy01Fv();
    play_ambient_loop_sound__17TOBarrierEnergy01Fv(arg0);
    if (!(*(s32 *)((s8 *)arg0 + 0xD0) & 1)) {
        *(s32 *)((s8 *)arg0 + 0xAC) = 3;
        clear_player_status_flag__10TObjPlayerFlUl(arg0, 0, 8);
        *(s32 *)((s8 *)arg0 + 0x24) = (s32) *TOBarrierEnergy01__texture_lists;
    }
}

}
