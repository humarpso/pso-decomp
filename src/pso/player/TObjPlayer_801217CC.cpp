#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 is_mode_two_and_ready__10TObjPlayerFv();

extern f32 lbl_805DACC0;

void TObjPlayer::update_game_effect_mode(s32 arg0) {
    if (is_mode_two_and_ready__10TObjPlayerFv() != 0) {
        ((TObjPlayer *)arg0)->launch_rare_weapon_special(0, 1, lbl_805DACC0);
        return;
    }
    ((TObjPlayer *)arg0)->update_active_game_effect();
}

}
