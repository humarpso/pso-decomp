#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type1__sub_802B34D0(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4B64(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B5648(void *, void *);

void TBoss6Type1__sub_802B34D0(u8 *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3E;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    if ((temp_r0 == 0xB) || (temp_r0 == 0x10)) {
        M2C_FIELD(arg0, s32 *, 0x40C) = (s32) (M2C_FIELD(arg0, s32 *, 0x40C) + 0x1E);
    }
    M2C_FIELD(arg0, s32 *, 0x410) = (s32) M2C_FIELD(arg0, s32 *, 0x40C);
    TBoss6Type1__sub_802B5648(arg0, arg0 + 0x420);
    TBoss3Volopt__sub_8022675C(0x40039C21, arg0 + 0x5E4, 0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 1);
}

}
