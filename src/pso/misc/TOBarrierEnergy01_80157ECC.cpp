#include "types.h"
#include "pso/misc/TOBarrierEnergy01.h"

extern "C" {

void play_proximity_sound__17TOBarrierEnergy01Fv(void *arg0);
s32 set_indexed_flags(void *, s32, s32);
s32 update_anim_phase__17TOBarrierEnergy01Fv();

extern void *TOBarrierEnergy01__texture_lists;

void TOBarrierEnergy01::play_proximity_sound() {
    update_anim_phase__17TOBarrierEnergy01Fv();
    ((TOBarrierEnergy01 *)this)->play_ambient_loop_sound();
    if (*(s32 *)((s8 *)this + 0xD0) & 1) {
        *(s32 *)((s8 *)this + 0xAC) = 1;
        set_indexed_flags(this, 0, 8);
        *(s32 *)((s8 *)this + 0x24) = (s32) *(s32 *)((s8 *)TOBarrierEnergy01__texture_lists + 4);
    }
}

}
