#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 play_sound_effect(s32, s32, s32, s32);
u8 get_slot_count__14TItemProShieldFv();
s32 drain_owner_hp_fraction__10TObjPlayerFf(void *, f32);
s32 is_mode_two_and_ready__10TObjPlayerFv(void *);
s32 launch_rare_weapon_special__10TObjPlayerFv(void *, s32, s32, f32);
s32 update_active_game_effect__10TObjPlayerFv(void *);

extern f32 lbl_805DADB0;
extern f32 lbl_805DADB4;

void TObjPlayer::start_shield_action() {
    if (get_slot_count__14TItemProShieldFv() == 0) {
        if (is_mode_two_and_ready__10TObjPlayerFv(this) != 0) {
            drain_owner_hp_fraction__10TObjPlayerFf(this, lbl_805DADB0);
            launch_rare_weapon_special__10TObjPlayerFv(this, 0, 1, lbl_805DADB4);
            play_sound_effect(0x4001A341, *(s32 *)((s8 *)this + 0xF0) + 0x38, 0, 0);
            return;
        }
        update_active_game_effect__10TObjPlayerFv(this);
        return;
    }
    update_active_game_effect__10TObjPlayerFv(this);
}

}
