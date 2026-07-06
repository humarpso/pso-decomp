#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TCameraCtrl__sub_8006A088(M2C_UNK);
M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss6Type2__sub_802B9BBC(void *, M2C_UNK);
M2C_UNK TBoss6Type2__sub_802B9C00(void *, M2C_UNK);
M2C_UNK TBoss6Type2__sub_802BAD04(void *);
M2C_UNK TBoss6Type2__sub_802BC6DC(void *);
M2C_UNK TBoss6Type2__sub_802BD014(void *, M2C_UNK);

void fn_802BF0B8(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == (s32) (M2C_FIELD(arg0, s32 *, 0x45C) - 0x3C)) {
        fn_8022675C(0x69C0F, arg0 + 0x38, 0, 1);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == (s32) (M2C_FIELD(arg0, s32 *, 0x45C) - 0x78)) {
        TBoss6Type2__sub_802BAD04(arg0);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460);
    switch (temp_r0) {
    case 0xA0:
        TBoss6Type2__sub_802B9C00(arg0, 8);
        TBoss6Type2__sub_802B9C00(arg0, 9);
        TBoss6Type2__sub_802B9C00(arg0, 0xA);
        break;
    case 0x50:
        TBoss6Type2__sub_802B9BBC(arg0, 8);
        TBoss6Type2__sub_802B9BBC(arg0, 9);
        TBoss6Type2__sub_802B9BBC(arg0, 0xA);
        break;
    case 0x82:
        TBoss6Type2__sub_802B9C00(arg0, 0xB);
        TBoss6Type2__sub_802B9C00(arg0, 0xC);
        break;
    case 0x49:
        TBoss6Type2__sub_802B9BBC(arg0, 0xB);
        TBoss6Type2__sub_802B9BBC(arg0, 0xC);
        break;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0x36) {
        TCameraCtrl__sub_8006A088(1);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0_2;
    if (temp_r0_2 < 0) {
        TBoss6Type2__sub_802BC6DC(arg0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) {
            TBoss6Type2__sub_802BD014(arg0, 0x1B);
            return;
        }
        TBoss6Type2__sub_802BD014(arg0, 0);
    }
}

}
