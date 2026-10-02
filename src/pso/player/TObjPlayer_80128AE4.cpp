#include "types.h"

extern "C" {

s32 spawn_particle_effect(u32, s32);
s32 clear_rico_ring_flag__10TObjPlayerFUi(u32);
s32 play_sound_effect(s32, s32, s32, s32);
void TObjPlayer__sub_80128A70(void);
void TObjPlayer__sub_80128BD0(void);

void notify_hit_target__10TObjPlayerFUiUiUiUi(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    if ((arg1 != 0U) && (arg3 != 0U)) {
        clear_rico_ring_flag__10TObjPlayerFUi(arg1);
        spawn_particle_effect(arg3, 0x45);
        play_sound_effect(0x4001C112, 0, 0, 0);
    }
}

}
