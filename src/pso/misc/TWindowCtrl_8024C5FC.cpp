#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowCtrl__sub_8024C5FC(s32 arg0);
s32 TWindowCtrl__sub_8024C640(void);
s32 TWindowCtrl__sub_8024C660(void);
s32 TWindowCtrl__sub_8024C680(void);
s32 fn_80019690();

extern s8 *lbl_805D63F8;

s32 TWindowCtrl__sub_8024C5FC(s32 arg0) {
    if (lbl_805D63F8 == 0) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 >= 0xC) {
        return 0;
    }
    return ((s32 *)(lbl_805D63F8 + 0x48))[arg0];
}

extern void *lbl_805D63F8;

s32 TWindowCtrl__sub_8024C640(void) {
    if ((void *) lbl_805D63F8 == NULL) {
        return 0;
    }
    return ((u16) M2C_FIELD(lbl_805D63F8, u16 *, 0x1C) >> 4U) & 1;
}

extern void *lbl_805D63F8;

s32 TWindowCtrl__sub_8024C660(void) {
    if ((void *) lbl_805D63F8 == NULL) {
        return 0;
    }
    return ((u16) M2C_FIELD(lbl_805D63F8, u16 *, 0x1C) >> 5U) & 1;
}

extern void *lbl_805D63F8;

s32 TWindowCtrl__sub_8024C680(void) {
    if (fn_80019690() != 0) {
        return 0;
    }
    if ((void *) lbl_805D63F8 == NULL) {
        return 0;
    }
    return ((u16) M2C_FIELD(lbl_805D63F8, u16 *, 0x1C) >> 1U) & 1;
}

}
