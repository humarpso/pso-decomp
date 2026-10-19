#include "types.h"
#include "pso/unk/TUnk_804A4F60.h"
#include "pso/player/TObjPlayer.h"

void psycho_wand_node_callback(void *arg0);
extern "C" {
s32 rotate_matrix_z(s32, s32);
s32 add_actor_tp(u8 *arg0, s32 arg1);
s32 get_attack_stage__11TItemWeaponFv();
s32 reset_key_machine_state__10TObjPlayerFv();
void translate_matrix(u32 arg0, f32 x, f32 y, f32 z);
s32 TObjectV8047c128_subtract_hp(u8 *arg0, s16 arg1);
s16 obj_getS16_32E(u8 *p);

void TUnk_804A4F60::update_weapon() {
    s16 temp_r0;
    s16 temp_r3;

    if (reset_key_machine_state__10TObjPlayerFv() != 0) {
        temp_r3 = obj_getS16_32E((u8 *)this->player);
        temp_r0 = *(s16 *)((s8 *)this + 0x1F8) - temp_r3;
        if (temp_r0 != 0) {
            *(s16 *)((s8 *)this + 0x1F8) = temp_r3;
        }
        if (temp_r0 > 0) {
            TObjectV8047c128_subtract_hp((u8 *)this->player, temp_r0);
            add_actor_tp((u8 *)this->player, (s16) (temp_r0 / 2));
        }
    }
}

extern s32 tl_05;

void TUnk_804A4F60::emit_marker_effects() {
    s32 item = (s32)this;
    if (get_attack_stage__11TItemWeaponFv() == 0) {
        ((TObjPlayer *)tl_05)->spawn_cane_effect((TItem*)item, 4);
    }
    if (((TObjPlayer *)item)->is_mode_two_and_ready() != 0) {
        ((TUnk_804A4F60 *)item)->psycho_wand_roll_extra();
        return;
    }
    ((TObjPlayer *)item)->update_active_game_effect();
}
}

extern const f32 lbl_805DAEC8;
extern const f32 lbl_805DAECC;

void psycho_wand_node_callback(void *arg0) {
    s32 player_list;

    player_list = TObjPlayer::get_player_list();
    switch (player_list) {
    case 2:
        rotate_matrix_z(0, *(s32 *)((s8 *)arg0 + 0x278));
        return;
    case 5:
        rotate_matrix_z(0, -*(s32 *)((s8 *)arg0 + 0x278));
        return;
    case 1:
        translate_matrix(0, lbl_805DAEC8, lbl_805DAECC * ((TUnk_804A4F60 *)arg0)->m_274, lbl_805DAEC8);
        return;
    case 3:
    case 4:
    case 6:
        TObjPlayer::play_particle_effect_once();
        return;
    }
}
