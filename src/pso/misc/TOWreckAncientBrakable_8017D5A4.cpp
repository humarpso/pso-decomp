#include "types.h"
#include "pso/misc/TOWreckAncientBrakable.h"

extern "C" {

s32 play_sound_effect(s32, void *, s32, s32);
u8 is_current_floor_switch_set(u16);
s32 spawn_particle_effect(void *, s32);
s32 check_demo_mode__10TObjPlayerFv();
s32 TOWreckAncientBrakable__sub_8017D444(void *);
s32 spawn_debris__22TOWreckAncientBrakableFv(void *);
s32 queue_destruction__7TObjectFv(void *);
s32 set_flag8__6TLobbyFPv(void *);

void TOWreckAncientBrakable::update_break_state() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    s32 temp_r0_2;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TOWreckAncientBrakable__sub_8017D444(arg0);
        return;
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xB4);
    switch (temp_r0) {
    default:
        *(s32 *)((s8 *)arg0 + 0xB4) = 0;
    case 0:
        temp_r0_2 = *(s32 *)((s8 *)arg0 + 0xB8);
        if ((temp_r0_2 >= 0) && (temp_r0_2 < 0x100) && (is_current_floor_switch_set((u16) temp_r0_2) == 1)) {
            *(s32 *)((s8 *)arg0 + 0xB4) = 1;
            play_sound_effect(0x43C11, arg0 + 0x38, 0, 0);
            spawn_particle_effect(arg0 + 0x38, 0x45);
            spawn_particle_effect(arg0 + 0x38, 0x46);
            spawn_debris__22TOWreckAncientBrakableFv(arg0);
        }
        return;
    case 1:
        set_flag8__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
        break;
    }
}

}
