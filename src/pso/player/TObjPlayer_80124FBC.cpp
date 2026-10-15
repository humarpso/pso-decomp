#include "types.h"

extern "C" {

void launch_double_cannon_extra__10TObjPlayerFPv(void *arg0);
void play_side_step_particle__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80125090(void *arg0);
s32 rotate_matrix_z(s32, s32);
s32 play_particle_effect_once__10TObjPlayerFv();
s32 drain_owner_hp_fraction__10TObjPlayerFPvf(void *, f32);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
s32 update_active_game_effect__10TObjPlayerFPv(void *);
s32 get_player_list__10TObjPlayerFv();
s32 TObjPlayer__sub_80124C90(void *);
s16 get_stage_strike_count__10TObjPlayerFPv(s32);

extern f32 lbl_805DAD3C;

void launch_double_cannon_extra__10TObjPlayerFPv(void *arg0) {
    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        if (get_stage_strike_count__10TObjPlayerFPv(*(s32 *)((s8 *)arg0 + 0xF0) + 0x7CC) == 0) {
            drain_owner_hp_fraction__10TObjPlayerFPvf(arg0, lbl_805DAD3C);
            TObjPlayer__sub_80124C90(arg0);
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv(arg0);
    }
}

void play_side_step_particle__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        play_particle_effect_once__10TObjPlayerFv();
        rotate_matrix_z(0, *(s32 *)((s8 *)arg0 + 0x1F8));
        return;
    case 4:
        play_particle_effect_once__10TObjPlayerFv();
        rotate_matrix_z(0, -*(s32 *)((s8 *)arg0 + 0x1F8));
        return;
    }
}

void TObjPlayer__sub_80125090(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0x1F8) = (s32) (*(s32 *)((s8 *)arg0 + 0x1F8) + 0xAAA);
}

}
