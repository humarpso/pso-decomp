#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800E2FD8(u32);
M2C_UNK fn_800E3074(u32);
M2C_UNK fn_802ABE20();
M2C_UNK fn_802ABF44(f32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(M2C_UNK *);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E4AF4(s32, s32, f32);
M2C_UNK fn_803E4BC4();
M2C_UNK fn_803E4BD0();
extern M2C_UNK lbl_80477F2C[];
extern const f64 lbl_80478080[];
extern const f32 lbl_805DFA70;
extern const f32 lbl_805DFA74;
extern const f32 lbl_805DFA7C;

void fn_8033D488(void *arg0) {
    f32 var_f31;
    s32 temp_r3;
    union { f64 d; u32 w[2]; } cvt;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0xE8);
    if (temp_r3 < 0x72) {
        var_f31 = lbl_805DFA70;
    } else if (temp_r3 >= 0x8E) {
        var_f31 = lbl_805DFA74;
    } else {
        var_f31 = (f32)(temp_r3 - 0x72) / lbl_805DFA7C;
    }
    if ((lbl_805DFA70 != var_f31) && ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U)) {
        if (var_f31 < lbl_805DFA74) {
            fn_802ABF44(var_f31);
        }
        fn_803D9B2C();
        fn_803E4BC4();
        TOHangerMachine01__sub_803D9C00(lbl_80477F2C);
        fn_803DA798(M2C_FIELD(arg0, s32 *, 0xC0));
        fn_800E3074(M2C_FIELD(arg0, u32 *, 0x7C));
        fn_803E4AF4(M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, s32 *, 0xC4), M2C_FIELD(arg0, f32 *, 0xE0));
        fn_800E2FD8(M2C_FIELD(arg0, u32 *, 0x7C));
        fn_803E4BD0();
        fn_803D9B78();
        if (var_f31 < lbl_805DFA74) {
            fn_802ABE20();
        }
    }
}

}
