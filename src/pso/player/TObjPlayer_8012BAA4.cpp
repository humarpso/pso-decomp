#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void psycho_wand_update_tp_spend(void *arg0);
void psycho_wand_marker(s32 arg0);
void psycho_wand_node_callback(void *arg0);
s32 rotate_matrix_z(s32, s32);
s32 add_actor_tp(s32, s16);
s32 spawn_cane_effect__10TObjPlayerFiUii(s32, s32, s32);
s32 get_attack_stage__11TItemWeaponFv();
s32 psycho_wand_roll_extra(s32);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 translate_matrix(s32, f32, f32, f32);
s32 TObjectV8047c128_subtract_hp(s32, s16);
s16 obj_getS16_32E(s32);

void psycho_wand_update_tp_spend(void *arg0) {
    s16 temp_r0;
    s16 temp_r3;

    if (reset_key_machine_state__10TObjPlayerFv() != 0) {
        temp_r3 = obj_getS16_32E(*(s32 *)((s8 *)arg0 + 0xF0));
        temp_r0 = *(s16 *)((s8 *)arg0 + 0x1F8) - temp_r3;
        if (temp_r0 != 0) {
            *(s16 *)((s8 *)arg0 + 0x1F8) = temp_r3;
        }
        if (temp_r0 > 0) {
            TObjectV8047c128_subtract_hp(*(s32 *)((s8 *)arg0 + 0xF0), temp_r0);
            add_actor_tp(*(s32 *)((s8 *)arg0 + 0xF0), (s16) (temp_r0 / 2));
        }
    }
}

extern s32 tl_05;

void psycho_wand_marker(s32 arg0) {
    if (get_attack_stage__11TItemWeaponFv() == 0) {
        spawn_cane_effect__10TObjPlayerFiUii(tl_05, arg0, 4);
    }
    if (((TObjPlayer *)arg0)->is_mode_two_and_ready() != 0) {
        psycho_wand_roll_extra(arg0);
        return;
    }
    ((TObjPlayer *)arg0)->update_active_game_effect();
}

extern const f32 lbl_805DAEC8;
extern const f32 lbl_805DAECC;

void psycho_wand_node_callback(void *arg0) {
    s32 temp_r3;

    temp_r3 = TObjPlayer::get_player_list();
    switch (temp_r3) {
    case 2:
        rotate_matrix_z(0, *(s32 *)((s8 *)arg0 + 0x278));
        return;
    case 5:
        rotate_matrix_z(0, -*(s32 *)((s8 *)arg0 + 0x278));
        return;
    case 1:
        translate_matrix(0, lbl_805DAEC8, lbl_805DAECC * *(f32 *)((s8 *)arg0 + 0x274), lbl_805DAEC8);
        return;
    case 3:
    case 4:
    case 6:
        TObjPlayer::play_particle_effect_once();
        return;
    }
}

}
