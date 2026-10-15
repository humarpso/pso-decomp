#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 play_particle_effect_once__10TObjPlayerFv();
s32 get_player_list__10TObjPlayerFv();
s32 get_current_matrix(s32);

void TObjPlayer::apply_conveyor_effect() {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    get_current_matrix(*(s32 *)((s8 *)(*(void **)((s8 *)this + 0xF0)) + 0xDB4) + (temp_r3 * 0x30));
    if (temp_r3 == 9) {
        play_particle_effect_once__10TObjPlayerFv();
    }
}

}
