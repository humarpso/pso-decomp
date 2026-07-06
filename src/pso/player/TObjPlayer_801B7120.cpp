#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801B7120(u8 *arg0);
M2C_UNK TObjPlayer__sub_801BF7C4(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK fn_801BEA38(void *, s32, f32, f32);

void TObjPlayer__sub_801B7120(u8 *arg0) {
    s32 temp_r0;

    if ((M2C_FIELD(arg0, f32 *, 0x44) != M2C_FIELD(arg0, f32 *, 0x38)) || (M2C_FIELD(arg0, f32 *, 0x4C) != M2C_FIELD(arg0, f32 *, 0x40))) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x6AC) + 1;
        M2C_FIELD(arg0, s32 *, 0x6AC) = temp_r0;
        if (temp_r0 >= 0x10) {
            M2C_FIELD(arg0, s32 *, 0x6AC) = 0;
        }
        fn_801BEA38(arg0, M2C_FIELD(arg0, s32 *, 0x6AC), M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x40));
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    TObjPlayer__sub_801BF7C4(arg0 + 0x360);
}

}
