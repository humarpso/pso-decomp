#include "types.h"
#include "pso/enemy/TObjEneDD.h"

extern "C" {

void TObjEneRecon__sub_8031F408(void *arg0, s32 arg1);
s32 advance_animation_playback();
s32 transition_enemy_state(void *, s32);
s32 get_flag_b4__9TObjEneDDFv();

void TObjEneRecon__sub_8031F408(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x40C) & 0xFFFFFFFE;
        *(s32 *)((s8 *)arg0 + 0x40C) = temp_r4;
        *(s16 *)((s8 *)arg0 + 0xB8) = 3;
        ((TObjEneDD *)arg0)->vfunc_96();
        ((TObjEneDD *)arg0)->set_field_378(5);
        break;
    case 3:
        if (get_flag_b4__9TObjEneDDFv() != 0) {
            transition_enemy_state(arg0, 2);
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback();
        break;
    }
}

}
