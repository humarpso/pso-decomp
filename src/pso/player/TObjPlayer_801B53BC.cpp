#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801B53BC(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TObjPlayer__sub_801B5328(s32, s32, s32, s32, f32);
s32 fn_80055694();

extern f32 lbl_805DC278;

void TObjPlayer__sub_801B53BC(s32 arg0, s32 arg1, s32 arg2) {
    TObjPlayer__sub_801B5328(arg0, fn_80055694(), arg1, arg2, lbl_805DC278);
}

}
