#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 fn_80080750();
M2C_UNK fn_800D35D4(void *);
M2C_UNK fn_800D37F4(void *);
M2C_UNK fn_800D39EC(void *);
M2C_UNK fn_800F6DD8(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);

void fn_800D3A68(u8 *arg0) {
    s32 temp_r3;

    if (fn_80080750() == 1) {
        fn_800D35D4(arg0);
        return;
    }
    fn_800D37F4(arg0);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3B8);
    if (temp_r3 >= 0) {
        M2C_FIELD(arg0, s32 *, 0x3B8) = (s32) (temp_r3 - 1);
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            fn_800D39EC(arg0);
        }
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    fn_800D39EC(arg0);
    fn_800F6DD8(arg0);
    copy_position__20TBoss3VoloptHiraisinFi(arg0);
    TObjPlayer__sub_801B4A18(arg0, -1);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}

}
