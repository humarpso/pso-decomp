#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void enlarge_flight_cutter_slicer(void *arg0);
s32 scale_current_matrix(void *);
u8 get_slot_count__14TItemProShieldFv();
s32 post_translate_matrix(void *);
s32 rotate_matrix_z(s32, s32);
s32 rotate_matrix_x(s32, s32);

extern const f32 lbl_805DAF34;

void enlarge_flight_cutter_slicer(void *arg0) {
    if (arg0 != NULL) {
        *(f32 *)((s8 *)arg0 + 0x68) = (f32) lbl_805DAF34;
        *(f32 *)((s8 *)arg0 + 0x6C) = (f32) lbl_805DAF34;
        *(f32 *)((s8 *)arg0 + 0x70) = (f32) lbl_805DAF34;
    }
}

void TObjPlayer::setup_item_render() {
    u8 *arg0 = (u8 *)this;
    s32 player_list;
    s32 temp_r3_3;
    u8 temp_r3;

    temp_r3 = get_slot_count__14TItemProShieldFv();
    switch ((s32) temp_r3) {
    case 5:
        player_list = TObjPlayer::get_player_list();
        switch (player_list) {
        case 1:
            rotate_matrix_x(0, *(s32 *)&this->unk_1F8);
            return;
        case 2:
            scale_current_matrix((u8 *)&this->m_1fc);
            return;
        }
        break;
    case 7:
        temp_r3_3 = TObjPlayer::get_player_list();
        switch (temp_r3_3) {
        case 4:
            post_translate_matrix((u8 *)&this->m_1fc);
            return;
        case 2:
            rotate_matrix_z(0, *(s32 *)&this->unk_1F8);
            break;
        }
        break;
    }
}

}
