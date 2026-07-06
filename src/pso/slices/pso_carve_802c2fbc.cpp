#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80141CB0(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK);
s32 fn_802C3088(void *, s32, s32, M2C_UNK *, f32);
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
extern const f32 lbl_805DE4F8;

void fn_802C2FBC(u8 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    M2C_UNK sp14[3];
    M2C_UNK sp8[3];
    f32 var_f31;
    s32 temp_r30;

    var_f31 = lbl_805DE4F8;
    do {
        fn_802C3088(arg0, arg1, arg2, sp14, var_f31);
        var_f31 += farg0;
        temp_r30 = fn_802C3088(arg0, arg1, arg2, sp8, var_f31);
        fn_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        fn_80141CB0(sp14, sp8, 0xF0F0F0FF, 0xF0F0F0FF);
        fn_803D9B78();
    } while (temp_r30 != 0);
}

}
