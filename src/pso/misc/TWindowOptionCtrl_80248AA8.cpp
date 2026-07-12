#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowOptionCtrl__sub_80248AA8(s32 arg1, s32 arg2, s32 arg3);
M2C_UNK fn_802673A8(M2C_UNK, s32, s32, s32, M2C_UNK, M2C_UNK);

void TWindowOptionCtrl__sub_80248AA8(s32 arg1, s32 arg2, s32 arg3) {
    fn_802673A8(arg1, 0, arg2, arg3, 1, 0);
}

}
