#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_params__15TOAttackableColFPv(void *arg0);
M2C_UNK fn_80154764(void *, M2C_UNK, M2C_UNK);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

extern const f32 lbl_805DB2C8;

void init_params__15TOAttackableColFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    M2C_FIELD(arg0, s32 *, 0x33C) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) + 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x33C);
    if (temp_r0 < 1) {
        M2C_FIELD(arg0, s32 *, 0x33C) = 1;
    } else if (temp_r0 > 0x100) {
        M2C_FIELD(arg0, s32 *, 0x33C) = 0x100;
    }
    M2C_FIELD(arg0, s32 *, 0x340) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x340) < 0) {
        M2C_FIELD(arg0, s32 *, 0x340) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x344) = (s32) M2C_FIELD(arg0, s32 *, 0x8C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x344) < 0) {
        M2C_FIELD(arg0, s32 *, 0x344) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x34C) = (s32) M2C_FIELD(arg0, f32 *, 0x68);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x34C);
    if ((temp_r0_2 < 0) || (temp_r0_2 >= 0x100)) {
        M2C_FIELD(arg0, s32 *, 0x34C) = -1;
    }
    if (M2C_FIELD(arg0, f32 *, 0x6C) < lbl_805DB2C8) {
        set_indexed_flags(arg0, 0, 0x08000000);
    } else {
        fn_80154764(arg0, 0, 0x08000000);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x344) == 0) {
        M2C_FIELD(arg0, s32 *, 0x348) = (s32) M2C_FIELD(arg0, f32 *, 0x70);
        temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x348);
        if ((temp_r0_3 < 0) || (temp_r0_3 >= 0x100)) {
            M2C_FIELD(arg0, s32 *, 0x348) = -1;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x348) = -1;
    }
}

}
