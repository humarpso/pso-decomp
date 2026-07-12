#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800D93C4(s32 arg0, s32 arg1);
M2C_UNK TObjPlayer__sub_800D9460(M2C_UNK, s32, s32, f32);

extern const f32 lbl_805DA3D0;

void TObjPlayer__sub_800D93C4(s32 arg0, s32 arg1) {
    TObjPlayer__sub_800D9460(arg0, 2, arg1, lbl_805DA3D0);
}

}
