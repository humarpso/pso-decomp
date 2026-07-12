#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowMessagePage__sub_8026AEE0(s32 a, s32 b, s32 c);
M2C_UNK TWindowMessagePage__sub_8026AE7C(s32, s32, s32, s32);

extern s32 lbl_805D53A0;

void TWindowMessagePage__sub_8026AEE0(s32 a, s32 b, s32 c) {
    TWindowMessagePage__sub_8026AE7C(a, b, c, lbl_805D53A0);
}

}
