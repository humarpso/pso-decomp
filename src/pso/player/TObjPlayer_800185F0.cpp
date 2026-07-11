#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800185F0(void *arg0, s32 arg1, void *arg2);
f64 fn_80019760(f32, f32);
M2C_UNK fn_80141F84(s32, s32);
s32 fn_801423A4(s32, s32, s32);

extern const f64 lbl_804340B8;

void TObjPlayer__sub_800185F0(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r31;

    temp_r31 = (s32) (lbl_804340B8 * fn_80019760(M2C_FIELD(arg2, f32 *, 0), M2C_FIELD(arg2, f32 *, 8)));
    M2C_FIELD(arg0, s32 *, 0x60) = fn_801423A4(M2C_FIELD(arg0, s32 *, 0x60), temp_r31, arg1);
    fn_80141F84(M2C_FIELD(arg0, s32 *, 0x60), temp_r31);
}

}
