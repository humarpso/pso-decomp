#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 is_mode_two_and_ready__10TObjPlayerFv();
s32 launch_rare_weapon_special__10TObjPlayerFPvlf(s32, s32, s32, f32);

extern f32 lbl_805DADC0;
extern f32 lbl_805DADC4;

void TObjPlayer::apply_state_effect(s32 arg0) {
    if (is_mode_two_and_ready__10TObjPlayerFv() != 0) {
        ((TObjPlayer *)arg0)->drain_owner_hp_fraction(lbl_805DADC0);
        launch_rare_weapon_special__10TObjPlayerFPvlf(arg0, 0, 1, lbl_805DADC4);
        return;
    }
    ((TObjPlayer *)arg0)->update_active_game_effect();
}

}
