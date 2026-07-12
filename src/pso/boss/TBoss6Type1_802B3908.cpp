#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type1__sub_802B3908(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4B64(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4BA8(void *, M2C_UNK);
s32 TBoss6Type1__sub_802B529C(void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B7E7C(void *);

void TBoss6Type1__sub_802B3908(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        M2C_FIELD(arg0, s32 *, 0x40C) = 0x1E;
        M2C_FIELD(arg0, s32 *, 0x410) = 0x1E;
    } else {
        M2C_FIELD(arg0, s32 *, 0x40C) = 0x1E;
        M2C_FIELD(arg0, s32 *, 0x410) = 0x1E;
    }
    TBoss3Volopt__sub_8022675C(0x40039706, arg0 + 0x38, 0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 0);
    TBoss6Type1__sub_802B4BA8(arg0, 1);
    if (TBoss6Type1__sub_802B529C(arg0, 0x19, 4) > 0) {
        TBoss6Type1__sub_802B7E7C(arg0);
        TBoss3Volopt__sub_8022675C(0x68A24, arg0 + 0x38, 0, 1);
    }
}

}
