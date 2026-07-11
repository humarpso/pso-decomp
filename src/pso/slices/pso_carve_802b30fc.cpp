#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, M2C_UNK);
M2C_UNK set_flag_on_threshold__11TBoss6Type1FPv(void *);
M2C_UNK TBoss6Type1__sub_802B7E7C(void *);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);

void fn_802B30FC(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x40C) - 0xF;
    if (temp_r0 >= temp_r4) {
        TBoss6Type1__sub_802B4EAC(arg0, temp_r0 - temp_r4, 0xF);
    }
    set_flag_on_threshold__11TBoss6Type1FPv(arg0);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        TBoss6Type1__sub_802B7E7C(arg0);
        M2C_FIELD(arg0, s32 *, 0x414) = 1;
        TBoss6Type1__sub_802B865C(arg0, 1);
    }
}

}
