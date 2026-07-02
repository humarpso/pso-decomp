#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Tube__sub_802B14B8(s32 arg0);
void TBoss6Tube__sub_802B1500(void *arg0);
M2C_UNK TBoss6Tube__sub_802B129C();
M2C_UNK TCameraCtrl__sub_8006A088(M2C_UNK);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void TBoss6Tube__sub_802B14B8(s32 arg0) {
    TBoss6Tube__sub_802B129C();
    TOTrapAncient01__sub_80226578(0x40033520, arg0, 0, 0, 0);
}

void TBoss6Tube__sub_802B1500(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) >= 0x10E) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        fn_8022675C(0x4003351F, 0, 0, 0);
        TCameraCtrl__sub_8006A088(2);
    }
}

}
