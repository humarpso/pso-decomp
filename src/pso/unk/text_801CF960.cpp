#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 obj_testFlags30(void *, int);
s32 TObjPlayer__sub_8001BEF8(void *, int);
s32 calc_scaled_value__10TObjPlayerFii(void *, int);
s32 TObjPlayer__sub_801B3C20(void *);
s32 check_flag_48__10TObjPlayerFPv(void *);
M2C_UNK set_ring_action__10TObjPlayerFPvi(void *, int);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(void *, int, int);
M2C_UNK TObjPlayer__sub_801D2860(void *);
s32 get_target_field_1c__10TObjPlayerFPv(void *);
f32 get_attached_float_24__10TObjPlayerFPv(void *);
extern const f32 TObjPlayer__data_805DC368;
extern const f32 TObjPlayer__data_805DC3AC;
void TObjPlayer__sub_801CF960(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_801CF960(u8 *arg0) {
    f32 temp_f31;
    s32 temp_r31;
    s32 temp_r31_2;
    temp_r31 = get_target_field_1c__10TObjPlayerFPv(arg0 + 0x550);
    temp_f31 = get_attached_float_24__10TObjPlayerFPv(arg0 + 0x550);
    if ((TObjPlayer__sub_801B3C20(arg0) == 0) || (check_flag_48__10TObjPlayerFPv(arg0) == 0)) {
        if (temp_f31 < TObjPlayer__data_805DC368) {
            if (TObjPlayer__sub_8001BEF8(arg0 + 0x5EC, 4) != 0) {
                run_action_state_phase__10TObjPlayerFisi(arg0, 1, 5);
                return;
            }
            return;
        } else {
            temp_r31_2 = calc_scaled_value__10TObjPlayerFii(arg0, temp_r31);
            if ((obj_testFlags30(arg0, 0x100000) != 0) || (temp_f31 < TObjPlayer__data_805DC3AC)) {
                set_ring_action__10TObjPlayerFPvi(arg0 + 0x5E0, 0);
                if (TObjPlayer__sub_8001BEF8(arg0 + 0x5EC, 4) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x3F0) = temp_r31_2;
                    run_action_state_phase__10TObjPlayerFisi(arg0, 2, 5);
                }
            } else {
                TObjPlayer__sub_801D2860(arg0 + 0x5E0);
                if (TObjPlayer__sub_8001BEF8(arg0 + 0x5EC, 4) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x3F0) = temp_r31_2;
                    run_action_state_phase__10TObjPlayerFisi(arg0, 4, 5);
                }
            }
        }
    }
}

}
