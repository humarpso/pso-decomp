#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer__sub_80125090(void *arg0);
s32 rotate_matrix_z(s32, s32);
s32 play_particle_effect_once__10TObjPlayerFv();
s32 drain_owner_hp_fraction__10TObjPlayerFf(void *, f32);
s32 is_mode_two_and_ready__10TObjPlayerFv();
s32 update_active_game_effect__10TObjPlayerFv(void *);
s32 get_player_list__10TObjPlayerFv();
s32 TObjPlayer__sub_80124C90(void *);
s16 get_stage_strike_count__10TObjPlayerFv(s32);

extern f32 lbl_805DAD3C;

void TObjPlayer::launch_double_cannon_extra() {
    if (is_mode_two_and_ready__10TObjPlayerFv() != 0) {
        if (get_stage_strike_count__10TObjPlayerFv(*(s32 *)((s8 *)this + 0xF0) + 0x7CC) == 0) {
            drain_owner_hp_fraction__10TObjPlayerFf(this, lbl_805DAD3C);
            TObjPlayer__sub_80124C90(this);
        }
    } else {
        update_active_game_effect__10TObjPlayerFv(this);
    }
}

void TObjPlayer::play_side_step_particle() {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        play_particle_effect_once__10TObjPlayerFv();
        rotate_matrix_z(0, *(s32 *)((s8 *)this + 0x1F8));
        return;
    case 4:
        play_particle_effect_once__10TObjPlayerFv();
        rotate_matrix_z(0, -*(s32 *)((s8 *)this + 0x1F8));
        return;
    }
}

void TObjPlayer__sub_80125090(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0x1F8) = (s32) (*(s32 *)((s8 *)arg0 + 0x1F8) + 0xAAA);
}

}
