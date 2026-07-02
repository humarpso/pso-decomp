#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern u32 lbl_805D689C;

s32 fn_802D29B8(u32 arg0) {
    if ((u32) lbl_805D689C != arg0) {
        return 0;
    }
    lbl_805D689C = 0U;
    return 1;
}

int fn_802D29DC(int a0) { lbl_805D689C = a0; return 1; }

extern u32 lbl_805D6898;

s32 fn_802D29E8(u32 arg0) {
    if ((u32) lbl_805D6898 != arg0) {
        return 0;
    }
    lbl_805D6898 = 0U;
    return 1;
}

extern u32 lbl_805D6898;

s32 fn_802D2A0C(u32 arg0) {
    if ((u32) lbl_805D6898 != 0U) {
        return 0;
    }
    lbl_805D6898 = arg0;
    return 1;
}

extern u32 lbl_805D6894;

s32 fn_802D2A2C(u32 arg0) {
    if ((u32) lbl_805D6894 != arg0) {
        return 0;
    }
    lbl_805D6894 = 0U;
    return 1;
}

extern u32 lbl_805D6894;

s32 fn_802D2A50(u32 arg0) {
    if ((u32) lbl_805D6894 != 0U) {
        return 0;
    }
    lbl_805D6894 = arg0;
    return 1;
}

}
