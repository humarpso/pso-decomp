#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 is_mode_two_and_ready__10TObjPlayerFv();
s32 launch_rare_weapon_special__10TObjPlayerFv(s32, s32, s32, f32);
s32 update_active_game_effect__10TObjPlayerFv(s32);

extern f32 lbl_805DACC0;

void TObjPlayer::update_game_effect_mode(s32 arg0) {
    if (is_mode_two_and_ready__10TObjPlayerFv() != 0) {
        launch_rare_weapon_special__10TObjPlayerFv(arg0, 0, 1, lbl_805DACC0);
        return;
    }
    update_active_game_effect__10TObjPlayerFv(arg0);
}

}
