#include "types.h"

extern "C" {

void s_rank_bazooka_slide_barrel(void *arg0);
s32 get_player_list__10TObjPlayerFv();
s32 translate_matrix(s32, f32, f32, f32);

extern f32 lbl_805DAE48;
extern f32 lbl_805DAE4C;

void s_rank_bazooka_slide_barrel(void *arg0) {
    if (get_player_list__10TObjPlayerFv() == 1) {
        translate_matrix(0, lbl_805DAE48, lbl_805DAE4C * *(f32 *)((s8 *)arg0 + 0x1FC), lbl_805DAE48);
    }
}

}
