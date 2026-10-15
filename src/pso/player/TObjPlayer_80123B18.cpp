#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

extern const f32 lbl_805DAD14;
extern const f32 lbl_805DAD18;

void TObjPlayer::approach_field200_cap() {
    f32 temp_f2;

    temp_f2 = *(f32 *)((s8 *)this + 0x200);
    if (temp_f2 < lbl_805DAD18) {
        *(f32 *)((s8 *)this + 0x200) = (f32) (temp_f2 + lbl_805DAD14);
        if (lbl_805DAD18 < *(f32 *)((s8 *)this + 0x200)) {
            *(f32 *)((s8 *)this + 0x200) = (f32) lbl_805DAD18;
        }
    }
}

void TObjPlayer::update_1f8_if_ready() { if (get_player_list__10TObjPlayerFv(this) == 0) { scale_current_matrix((char*)this + 0x1f8); } }

}
