#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8001BF40(void *);
M2C_UNK fn_800A7798(void *, f32);
s32 TObjPlayer__sub_801B60BC(void *, s16);
M2C_UNK fn_801BA650(void *, M2C_UNK, s16);
s32 TObjPlayer__sub_801BE614(void *);
M2C_UNK fn_801C6780(void *, void *, f32);
M2C_UNK fn_801D0BC0(void *, s16, M2C_UNK);
f32 fn_801D2640(void *);
M2C_UNK fn_801D268C(void *);
f32 fn_801D2858(void *);
extern const f32 lbl_805DC3B0;

void fn_801CF6C4(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f1;
    s16 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x33C) = 4;
    fn_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    fn_8001BF40(arg0 + 0x5EC);
    temp_r3 = TObjPlayer__sub_801BE614(arg0);
    if (TObjPlayer__sub_801B60BC(arg0, temp_r3) != 0) {
        fn_801D268C(arg0);
    }
    fn_801C6780(arg0 + 0x5E0, arg0, lbl_805DC3B0);
    fn_801BA650(arg0, 4, temp_r3);
    temp_f31 = fn_801D2858(arg0 + 0x5E0);
    temp_f1 = fn_801D2640(arg0);
    fn_800A7798(arg0, temp_f1 * temp_f31);
}

}
