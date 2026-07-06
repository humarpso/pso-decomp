#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubComCard__sub_80272400(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TWindowSubComCard__sub_8027239C(s32, s32, s32, s32);
s32 fn_8007BC04(M2C_UNK);

void TWindowSubComCard__sub_80272400(s32 arg0, s32 arg1, s32 arg2) {
    s32 tmp = fn_8007BC04(0);
    TWindowSubComCard__sub_8027239C(arg0, arg1, arg2, tmp);
}

}
