#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubStatusDisp__sub_8026D9C0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
}

int __dl__FPv();

s32 TWindowSubStatusDisp__sub_8026D9D0(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

M2C_UNK TWindowMenu__sub_80266B04();

void *reset_selection__20TWindowSubStatusDispFPv(void *arg0) {
    TWindowMenu__sub_80266B04();
    M2C_FIELD(arg0, s32 *, 8) = 0;
    return arg0;
}

}
