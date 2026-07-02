#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern u16 lbl_805D63FC;

s32 fn_80246CB8(void) {
    return ((u16) lbl_805D63FC >> 3U) & 1;
}

extern u16 lbl_805D63FC;

s32 TWindowSubShortMail__sub_80246CC4(void) {
    return lbl_805D63FC & 1;
}

extern u16 lbl_805D63FC;

s32 fn_80246CD0(void) {
    return ((u16) lbl_805D63FC >> 2U) & 1;
}

extern u16 lbl_805D63FC;

s32 fn_80246CDC(void) {
    return ((u16) lbl_805D63FC >> 1U) & 1;
}

}
