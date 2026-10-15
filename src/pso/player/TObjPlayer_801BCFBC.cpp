#include "types.h"

extern "C" {

void update_action_animation__10TObjPlayerFPv(u8 *arg0);
s32 is_lobby_floor_15__15TFontSmallLobbyFv();
s16 get_action_animation__10TObjPlayerFPv(void *);
s32 set_pos_z__10TObjPlayerFPvf(void *, f32);
s32 is_mounted__15TPlyPhotonChairFPv(void *);
s32 test_flags_any(void *, s32);
s32 TObjPlayer__sub_8011E204(void *, s32);
s32 is_on_current_floor__10TObjPlayerFi(void *);
s32 revive_or_spawn_marker__10TObjPlayerFi(void *);
s32 restart_death_pose__10TObjPlayerFPv(void *);
s32 update_position_from_target__10TObjPlayerFPv(void *);
s32 run_action_state_phase__10TObjPlayerFisi(void *, s32, s32);

s32 obj_isState2_324();
s32 obj_testFlags30(void *, s32);
extern const f32 TObjPlayer__data_805DC294;

void update_action_animation__10TObjPlayerFPv(u8 *arg0) {
    if (obj_isState2_324() == 0) {
        update_position_from_target__10TObjPlayerFPv(arg0);
        return;
    }
    if (is_on_current_floor__10TObjPlayerFi(arg0) != 0) {
        TObjPlayer__sub_8011E204(arg0, 4);
        if (obj_testFlags30(arg0, 0x800) != 0) {
            run_action_state_phase__10TObjPlayerFisi(arg0, 0xF, 0);
            if (test_flags_any(arg0 + 0x858, 1) != 0) {
                *(s16 *)((s8 *)arg0 + 0xB8) = get_action_animation__10TObjPlayerFPv(arg0);
            } else {
                restart_death_pose__10TObjPlayerFPv(arg0);
            }
            set_pos_z__10TObjPlayerFPvf(arg0 + 0x5FC, TObjPlayer__data_805DC294);
            revive_or_spawn_marker__10TObjPlayerFi(arg0);
            return;
        }
        if ((is_lobby_floor_15__15TFontSmallLobbyFv() != 0) && (is_mounted__15TPlyPhotonChairFPv(arg0) != 0)) {
            run_action_state_phase__10TObjPlayerFisi(arg0, 0x18, 0);
            return;
        }
        run_action_state_phase__10TObjPlayerFisi(arg0, 1, 0);
    }
}

}
