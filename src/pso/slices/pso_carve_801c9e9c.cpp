#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8002AEB8(void *, s32);
M2C_UNK fn_800DFB00(void *, s32);
s32 fn_801D0458();
M2C_UNK fn_801D0888(void *);
M2C_UNK fn_801D2620(void *);
M2C_UNK fn_801D2630();
s32 fn_801D8ADC(void *);
extern const f32 lbl_805DC360;
extern const f32 lbl_805DC36C;
extern const f32 lbl_805DC378;

void fn_801C9E9C(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x2B4) - lbl_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1;
        if (temp_f1 < lbl_805DC36C) {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            fn_800DFB00(arg0, fn_801D0458());
            fn_801D2620(arg0);
            M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) lbl_805DC378;
        }
        break;
    case 1:
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x2B4) - lbl_805DC360;
        M2C_FIELD(arg0, f32 *, 0x2B4) = temp_f1_2;
        if (temp_f1_2 < lbl_805DC36C) {
            fn_801D2630();
            fn_8002AEB8(arg0 + 0x644, fn_801D8ADC(arg0));
            fn_801D0888(arg0);
        }
        break;
    }
}

}
