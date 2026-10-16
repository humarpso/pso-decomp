#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 get_slot_count__14TItemProShieldFv(void *);
s32 rotate_matrix_z(s32, s32);
s32 rotate_matrix_x(s32, s32);
s32 translate_matrix(s32, f32, f32, f32);

extern const f32 lbl_805DAF58;

void TObjPlayer::apply_frame_camera_shake() {
    s32 player_list;
    s32 var_r30;

    player_list = TObjPlayer::get_player_list();
    if (get_slot_count__14TItemProShieldFv(this) != 6) {
        if (player_list == (s32) this->m_21c) {
            translate_matrix(0, lbl_805DAF58, this->m_224, lbl_805DAF58);
        }
        var_r30 = *(s32 *)&this->unk_220;
    } else {
        if (player_list == (s32) this->m_21c) {
            rotate_matrix_x(0, -*(s32 *)&this->unk_220);
        }
        var_r30 = (s32) (*(s32 *)&this->unk_220 * 2) / 3;
    }
    if ((player_list == (s32) this->m_20c) || (player_list == (s32) this->m_214)) {
        rotate_matrix_z(0, var_r30);
    }
    if ((player_list == (s32) *(s32 *)&this->unk_210) || (player_list == (s32) *(s32 *)&this->unk_218)) {
        rotate_matrix_z(0, -var_r30);
    }
}

}
