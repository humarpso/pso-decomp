#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_action_animation__10TObjPlayerFPv(u8 *arg0);
s32 TFontSmallLobby__sub_801AFEE0();
s16 get_action_animation__10TObjPlayerFPv(void *);
M2C_UNK set_pos_z__10TObjPlayerFPvf(void *, f32);
s32 is_mounted__15TPlyPhotonChairFPv(void *);
s32 test_flags_any(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011E204(void *, M2C_UNK);
s32 is_on_current_floor__10TObjPlayerFi(void *);
M2C_UNK revive_or_spawn_marker__10TObjPlayerFi(void *);
M2C_UNK restart_death_pose__10TObjPlayerFPv(void *);
M2C_UNK update_position_from_target__10TObjPlayerFPv(void *);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(void *, M2C_UNK, M2C_UNK);

s32 obj_isState2_324();
s32 obj_testFlags30(void *, M2C_UNK);
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
                M2C_FIELD(arg0, s16 *, 0xB8) = get_action_animation__10TObjPlayerFPv(arg0);
            } else {
                restart_death_pose__10TObjPlayerFPv(arg0);
            }
            set_pos_z__10TObjPlayerFPvf(arg0 + 0x5FC, TObjPlayer__data_805DC294);
            revive_or_spawn_marker__10TObjPlayerFi(arg0);
            return;
        }
        if ((TFontSmallLobby__sub_801AFEE0() != 0) && (is_mounted__15TPlyPhotonChairFPv(arg0) != 0)) {
            run_action_state_phase__10TObjPlayerFisi(arg0, 0x18, 0);
            return;
        }
        run_action_state_phase__10TObjPlayerFisi(arg0, 1, 0);
    }
}

}
