#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void s_rank_bazooka_slide_barrel(void *arg0);
void translate_matrix(u32 arg0, f32 x, f32 y, f32 z);

extern f32 lbl_805DAE48;
extern f32 lbl_805DAE4C;

void s_rank_bazooka_slide_barrel(void *arg0) {
    if (TObjPlayer::get_player_list() == 1) {
        translate_matrix(0, lbl_805DAE48, lbl_805DAE4C * *(f32 *)((s8 *)arg0 + 0x1FC), lbl_805DAE48);
    }
}

}
