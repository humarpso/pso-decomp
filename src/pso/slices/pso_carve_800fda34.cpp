#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8007EBFC(s32);
M2C_UNK fn_800FDCB4(M2C_UNK *, s32, s32);
s32 fn_800FDD68(M2C_UNK *);
M2C_UNK fn_800FE154(M2C_UNK *, M2C_UNK);
M2C_UNK fn_800FE1C4(M2C_UNK *, s32, M2C_UNK);

s32 fn_800FDA34(s32 arg0) {
    M2C_UNK sp8[0xC];
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;

    fn_800FE1C4(sp8, arg0, 1);
    temp_r3_2 = fn_800FDD68(sp8);
    if (temp_r3_2 <= 0) {
        fn_800FE154(sp8, -1);
        return 0;
    }
    temp_r31 = (s32) (temp_r3_2 + 0x7FF) / 2048;
    temp_r3 = fn_8007EBFC(temp_r31 << 0xB);
    if (temp_r3 == 0) {
        fn_800FE154(sp8, -1);
        return 0;
    }
    fn_800FDCB4(sp8, temp_r31, temp_r3);
    fn_800FE154(sp8, -1);
    return temp_r3;
}

}
