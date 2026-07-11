#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern f32 lbl_805DE878;

void TObjEneGibbles__sub_802DB670(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;

    temp_r0 = (s16) (lbl_805DE878 + M2C_FIELD(arg0, f32 *, 0x354));
    M2C_FIELD(arg0, s16 *, 0x388) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x38A) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x39C) = (s32) M2C_FIELD(arg0, f32 *, 0x358);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x39C);
    if (temp_r0_2 < 0) {
        M2C_FIELD(arg0, s32 *, 0x39C) = 0;
    } else if (temp_r0_2 > 8) {
        M2C_FIELD(arg0, s32 *, 0x39C) = 8;
    }
    M2C_FIELD(arg0, s32 *, 0x378) = 0;
    M2C_FIELD(arg0, s32 *, 0x378) = (s32) (M2C_FIELD(arg0, s32 *, 0x378) | (1 << M2C_FIELD(arg0, s32 *, 0x39C)));
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) M2C_FIELD(arg0, f32 *, 0x35C);
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) M2C_FIELD(arg0, f32 *, 0x360);
}

}
