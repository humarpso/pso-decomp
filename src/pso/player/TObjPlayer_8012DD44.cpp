#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 get_slot_count__14TItemProShieldFv(void *);
s32 rotate_matrix_z(s32, s32);
s32 rotate_matrix_x(s32, s32);
s32 translate_matrix(s32, f32, f32, f32);

extern const f32 lbl_805DAF58;

void TObjPlayer::apply_frame_camera_shake() {
    s32 temp_r31;
    s32 var_r30;

    temp_r31 = TObjPlayer::get_player_list();
    if (get_slot_count__14TItemProShieldFv(this) != 6) {
        if (temp_r31 == (s32) *(s32 *)((s8 *)this + 0x21C)) {
            translate_matrix(0, lbl_805DAF58, *(f32 *)((s8 *)this + 0x224), lbl_805DAF58);
        }
        var_r30 = *(s32 *)((s8 *)this + 0x220);
    } else {
        if (temp_r31 == (s32) *(s32 *)((s8 *)this + 0x21C)) {
            rotate_matrix_x(0, -*(s32 *)((s8 *)this + 0x220));
        }
        var_r30 = (s32) (*(s32 *)((s8 *)this + 0x220) * 2) / 3;
    }
    if ((temp_r31 == (s32) *(s32 *)((s8 *)this + 0x20C)) || (temp_r31 == (s32) *(s32 *)((s8 *)this + 0x214))) {
        rotate_matrix_z(0, var_r30);
    }
    if ((temp_r31 == (s32) *(s32 *)((s8 *)this + 0x210)) || (temp_r31 == (s32) *(s32 *)((s8 *)this + 0x218))) {
        rotate_matrix_z(0, -var_r30);
    }
}

}
