#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B5100(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B82B8(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);

void fn_802B2510(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r3b;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    TBoss6Type1__sub_802B5100(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x40C) - 2;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410);
    temp_r3b = temp_r3 - 0xA;
    if (temp_r0 == temp_r3) {
        TBoss6Type1__sub_802B82B8(arg0, 6);
    } else if (temp_r0 == temp_r3b) {
        M2C_FIELD(arg0, s32 *, 0x438) = 0;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 0x23);
    }
}

}
