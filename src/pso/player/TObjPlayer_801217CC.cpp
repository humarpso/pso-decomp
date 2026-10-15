#include "types.h"

extern "C" {

void update_game_effect_mode__10TObjPlayerFi(s32 arg0);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
s32 launch_rare_weapon_special__10TObjPlayerFv(s32, s32, s32, f32);
s32 update_active_game_effect__10TObjPlayerFPv(s32);

extern f32 lbl_805DACC0;

void update_game_effect_mode__10TObjPlayerFi(s32 arg0) {
    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        launch_rare_weapon_special__10TObjPlayerFv(arg0, 0, 1, lbl_805DACC0);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

}
