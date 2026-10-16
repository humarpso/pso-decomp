#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 get_current_matrix(s32);

void TObjPlayer::apply_conveyor_effect() {
    s32 temp_r3;

    temp_r3 = TObjPlayer::get_player_list();
    get_current_matrix(*(s32 *)((s8 *)(*(void * *)&this->unk_F0) + 0xDB4) + (temp_r3 * 0x30));
    if (temp_r3 == 9) {
        TObjPlayer::play_particle_effect_once();
    }
}

}
