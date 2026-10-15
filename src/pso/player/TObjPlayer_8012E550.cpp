#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 get_player_list__10TObjPlayerFv();
s32 translate_matrix(s32, f32, f32, f32);

extern f32 lbl_805DAF7C;
extern f32 lbl_805DAF80;

void TObjPlayer::apply_scale_effect() {
    if (get_player_list__10TObjPlayerFv() == 1) {
        translate_matrix(0, lbl_805DAF7C, lbl_805DAF80 * *(f32 *)((s8 *)this + 0x1F8), lbl_805DAF7C);
    }
}

}
