#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_clamped_index__10TObjPlayerFPv(void *arg0);
void set_move_mode__10TObjPlayerFi(s32 arg0);
void apply_input_mode__10TObjPlayerFi(s32 arg0);
s32 get_move_mode__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_801BE8E4(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_801BE8EC(s32, M2C_UNK);

s32 get_clamped_index__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3D8);
    if ((temp_r3 < 0) || (temp_r3 >= 3)) {
        return 0;
    }
    return temp_r3;
}

void set_move_mode__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = get_move_mode__10TObjPlayerFPv();
    if (temp_r3 & 0x10) {
        TObjPlayer__sub_801BE8E4(arg0, 2);
        return;
    }
    if (temp_r3 & 8) {
        TObjPlayer__sub_801BE8E4(arg0, 1);
        return;
    }
    TObjPlayer__sub_801BE8E4(arg0, 0);
}

void apply_input_mode__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = get_move_mode__10TObjPlayerFPv();
    if (temp_r3 & 0x20) {
        TObjPlayer__sub_801BE8EC(arg0, 0);
        return;
    }
    if (temp_r3 & 0x40) {
        TObjPlayer__sub_801BE8EC(arg0, 1);
        return;
    }
    TObjPlayer__sub_801BE8EC(arg0, 2);
}

}
