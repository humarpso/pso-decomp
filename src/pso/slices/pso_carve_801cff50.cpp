#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800A7798(void *, f32);
s32 TObjPlayer__sub_801B60BC(void *, s16);
M2C_UNK fn_801BA650(void *, M2C_UNK, s16);
M2C_UNK fn_801C67B4(void *, void *);
s32 fn_801CFBFC(void *);
M2C_UNK fn_801D0BC0(void *, s16, M2C_UNK);
f32 fn_801D2640(void *);
M2C_UNK fn_801D268C(void *);
f32 fn_801D2858(void *);

void fn_801CFF50(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f1;
    s16 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x33C) = 2;
    fn_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    temp_r3 = fn_801CFBFC(arg0);
    if (TObjPlayer__sub_801B60BC(arg0, temp_r3) != 0) {
        fn_801D268C(arg0);
    }
    fn_801C67B4(arg0 + 0x5E0, arg0);
    fn_801BA650(arg0, 2, temp_r3);
    temp_f31 = fn_801D2858(arg0 + 0x5E0);
    temp_f1 = fn_801D2640(arg0);
    fn_800A7798(arg0, temp_f1 * temp_f31);
}

}
