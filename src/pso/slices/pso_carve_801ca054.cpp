#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_801BF964(s32);
M2C_UNK TObjPlayer__sub_801BF9E8(s32, f32);
M2C_UNK fn_801C58CC(s32, s32);
M2C_UNK fn_801CA2C8(s32);
M2C_UNK fn_801D0BC0(s32, M2C_UNK, M2C_UNK);
extern f32 lbl_805DC360;

void fn_801CA054(s32 arg0) {
    if (arg0 != 0) {
        fn_801D0BC0(arg0, 0xF, 0);
        fn_801CA2C8(arg0);
        TObjPlayer__sub_801BF964(arg0 + 0x5FC);
        fn_801C58CC(arg0 + 0x5FC, arg0);
        TObjPlayer__sub_801BF9E8(arg0 + 0x5FC, lbl_805DC360);
    }
}

}
