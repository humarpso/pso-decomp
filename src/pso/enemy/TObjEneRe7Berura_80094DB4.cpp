#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneRe7Berura__sub_80094DB4(void *arg0);
u8 is_over_limit__16TObjEneRe7BeruraFPv(void *arg0);
s32 step_toward_target__16TObjEneRe7BeruraFPvii(void *arg0, s32 arg1, s32 arg2);
s32 angle_diff_s16(s32);

s32 TObjEneRe7Berura__sub_80094DB4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3D4) * 0x96;
}

u8 is_over_limit__16TObjEneRe7BeruraFPv(void *arg0) {
    int var_r4;
    s32 temp_r5;
    s32 temp_r0;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x4BC);
    var_r4 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4B8);
    if ((temp_r5 >= temp_r0) || (temp_r5 <= (s32) -temp_r0)) {
        var_r4 = 1;
    }
    return (u8) var_r4;
}

s32 step_toward_target__16TObjEneRe7BeruraFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
    temp_r3 = angle_diff_s16(M2C_FIELD(arg0, s32 *, 0x60));
    if (temp_r3 > arg2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + arg2);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4BC);
        if (temp_r0 < 0) {
            M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x4BC) = (s32) (temp_r0 + arg2);
        }
    } else if (temp_r3 < (s32) -arg2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) - arg2);
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x4BC);
        if (temp_r0_2 > 0) {
            M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x4BC) = (s32) (temp_r0_2 - arg2);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x60) = arg1;
        var_r31 = 1;
    }
    return var_r31;
}

}
