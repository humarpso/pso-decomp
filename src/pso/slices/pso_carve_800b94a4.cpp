#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjEneEpsilon__sub_800B9514(void *, s32);
M2C_UNK TObjEneDD__sub_800BB158(void *, s32, f32, f32, f32);
f32 fn_803D64C0(s32);
f32 fn_803D64DC(s32);

void TObjEneEpsilon__sub_800B94A4(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    f32 temp_f31;
    f32 temp_f30;

    temp_f30 = farg0;
    TObjEneEpsilon__sub_800B9514(arg0, arg2);
    temp_f31 = fn_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    TObjEneDD__sub_800BB158(arg0, arg1, fn_803D64C0(M2C_FIELD(arg0, s32 *, 0x60)), temp_f31, temp_f30);
}

}
