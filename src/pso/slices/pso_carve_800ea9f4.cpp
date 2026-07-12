#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 TObjPlayer__sub_800115C4(void *, M2C_UNK, f32);
M2C_UNK fn_800EAB04(void *);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, M2C_UNK);
extern f32 lbl_805DA6DC;

void fn_800EA9F4(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x390) - 1;
    M2C_FIELD(arg0, s32 *, 0x390) = temp_r0;
    if (temp_r0 <= 0) {
        if (TObjPlayer__sub_800115C4(arg0, 0, lbl_805DA6DC) == 0xFFFF) {
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C8) + 1;
            M2C_FIELD(arg0, s32 *, 0x3C8) = temp_r0_2;
            if (temp_r0_2 >= 5) {
                M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
                M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x58);
                M2C_FIELD(arg0, s32 *, 0x3C8) = 5;
            }
            fn_800EAB04(arg0);
            return;
        }
        TObjEneSlimeOne__sub_800EAE78(arg0, 1);
    }
}

}
