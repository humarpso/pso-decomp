#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_active_state__10TObjPlayerFPv(u8 *arg0);
s16 get_action_animation__10TObjPlayerFPv(void *);
M2C_UNK set_pos_z__10TObjPlayerFPvf(void *, f32);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(void *, M2C_UNK, M2C_UNK);
s32 TObjPlayer__sub_8001BEF8(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011E204(void *, M2C_UNK);
s32 TObjPlayer__sub_801AFF0C();
M2C_UNK revive_or_spawn_marker__10TObjPlayerFi(void *);
M2C_UNK TObjPlayer__sub_801CA35C(void *);

s32 obj_testFlags30(void *, M2C_UNK);
extern const f32 TObjPlayer__data_805DC360;

void update_active_state__10TObjPlayerFPv(u8 *arg0) {
    if (TObjPlayer__sub_801AFF0C() != 0) {
        TObjPlayer__sub_8011E204(arg0, 4);
        if (obj_testFlags30(arg0, 0x800) == 0) {
            run_action_state_phase__10TObjPlayerFisi(arg0, 1, 0);
            return;
        }
        run_action_state_phase__10TObjPlayerFisi(arg0, 0xF, 0);
        if (TObjPlayer__sub_8001BEF8(arg0 + 0x858, 1) != 0) {
            M2C_FIELD(arg0, s16 *, 0xB8) = get_action_animation__10TObjPlayerFPv(arg0);
        } else {
            TObjPlayer__sub_801CA35C(arg0);
        }
        set_pos_z__10TObjPlayerFPvf(arg0 + 0x5FC, TObjPlayer__data_805DC360);
        revive_or_spawn_marker__10TObjPlayerFi(arg0);
    }
}

}
