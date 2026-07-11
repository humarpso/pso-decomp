#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__vt71(s32 arg0);
M2C_UNK clamp_field_32E__10TObjPlayerFPv(s32);
M2C_UNK clamp_value__10TObjPlayerFPv(s32);
M2C_UNK TObjPlayer__sub_80018990(s32, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32);
f32 fn_801D93F8();
f32 fn_801D9440(s32);

void TObjPlayer__vt71(s32 arg0) {
    f32 temp_f31;
    f32 temp_f1;

    temp_f31 = fn_801D93F8();
    temp_f1 = fn_801D9440(arg0);
    TObjPlayer__sub_80018990(arg0, 0, 0, 0, temp_f1, temp_f31);
    clamp_value__10TObjPlayerFPv(arg0);
    clamp_field_32E__10TObjPlayerFPv(arg0);
}

}
