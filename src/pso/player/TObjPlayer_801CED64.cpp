#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_movement_if_ready__10TObjPlayerFPv(u8 *arg0);
s32 check_actor_blocking_move__10TObjPlayerFPv(void *);
u32 TObjPlayer__sub_801B5EA4(void *);
s32 TObjPlayer__sub_801D2680(void *);
M2C_UNK TObjPlayer__sub_8001053C(void *);
M2C_UNK apply_velocity__10TObjPlayerFPv(void *);
s32 is_flag_b0_4__10TObjPlayerFPv(void *);
f32 fn_80142950(void *, void *, void *);
s16 get_handle_value__10TObjPlayerFPv();

extern const f32 TObjPlayer__data_805DC36C;

void apply_movement_if_ready__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r3;

    temp_r3 = get_handle_value__10TObjPlayerFPv();
    if ((temp_r3 != 0x11) && ((temp_r3 >= 0x11) || (temp_r3 >= 0xA) || (temp_r3 < 6)) && (is_flag_b0_4__10TObjPlayerFPv(arg0) == 0) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == (s16) M2C_FIELD(arg0, s16 *, 0xBA)) && (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20000000) && (TObjPlayer__sub_801D2680(arg0) == 0)) {
        if (TObjPlayer__data_805DC36C > fn_80142950(arg0, arg0 + 0x308, arg0 + 0x310)) {
            TObjPlayer__sub_8001053C(arg0);
        }
        if (check_actor_blocking_move__10TObjPlayerFPv(arg0) != 0) {
            TObjPlayer__sub_8001053C(arg0);
        }
        if (TObjPlayer__sub_801B5EA4(arg0) == 0U) {
            apply_velocity__10TObjPlayerFPv(arg0);
        }
    }
}

}
