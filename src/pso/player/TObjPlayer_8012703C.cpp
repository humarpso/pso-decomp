#include "types.h"

extern "C" {

void start_shield_action__10TObjPlayerFPv(void *arg0);
s32 play_sound_effect(s32, s32, s32, s32);
u8 get_slot_count__14TItemProShieldFPv();
s32 drain_owner_hp_fraction__10TObjPlayerFPvf(void *, f32);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
s32 launch_rare_weapon_special__10TObjPlayerFv(void *, s32, s32, f32);
s32 update_active_game_effect__10TObjPlayerFPv(void *);

extern f32 lbl_805DADB0;
extern f32 lbl_805DADB4;

void start_shield_action__10TObjPlayerFPv(void *arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 0) {
        if (is_mode_two_and_ready__10TObjPlayerFPv(arg0) != 0) {
            drain_owner_hp_fraction__10TObjPlayerFPvf(arg0, lbl_805DADB0);
            launch_rare_weapon_special__10TObjPlayerFv(arg0, 0, 1, lbl_805DADB4);
            play_sound_effect(0x4001A341, *(s32 *)((s8 *)arg0 + 0xF0) + 0x38, 0, 0);
            return;
        }
        update_active_game_effect__10TObjPlayerFPv(arg0);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

}
