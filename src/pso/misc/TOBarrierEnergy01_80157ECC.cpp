#include "types.h"

extern "C" {

void TOBarrierEnergy01__vt13(void *arg0);
s32 play_ambient_loop_sound__17TOBarrierEnergy01Fi(void *);
s32 set_indexed_flags(void *, s32, s32);
s32 update_anim_phase__17TOBarrierEnergy01FPv();

extern void *TOBarrierEnergy01__texture_lists;

void TOBarrierEnergy01__vt13(void *arg0) {
    update_anim_phase__17TOBarrierEnergy01FPv();
    play_ambient_loop_sound__17TOBarrierEnergy01Fi(arg0);
    if (*(s32 *)((s8 *)arg0 + 0xD0) & 1) {
        *(s32 *)((s8 *)arg0 + 0xAC) = 1;
        set_indexed_flags(arg0, 0, 8);
        *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)TOBarrierEnergy01__texture_lists + 4);
    }
}

}
