#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void load_file_to_buffer__6TSceneFi(s32 arg0);
s32 TOKeyMachine01__sub_802034A8();
u32 fn_8007EBFC(s32);
s32 fn_800F9D80(M2C_UNK *);
M2C_UNK fn_800F9DF4(M2C_UNK *, u32);
M2C_UNK fn_801317E4(M2C_UNK *, s32, M2C_UNK *);

extern M2C_UNK lbl_8044A98C[];
extern u32 lbl_805D6028;
extern s32 lbl_805D602C;

void load_file_to_buffer__6TSceneFi(s32 arg0) {
    M2C_UNK sp8[8];
    s32 temp_r31;
    u32 temp_r3;
    u32 temp_r3_2;

    lbl_805D6028 = 0U;
    lbl_805D602C = 0;
    fn_801317E4(sp8, arg0, lbl_8044A98C);
    temp_r31 = fn_800F9D80(sp8);
    if (TOKeyMachine01__sub_802034A8() == 0xF) {
        if ((temp_r31 > 0) && ((u32) temp_r31 <= 0x100U)) {
            temp_r3 = fn_8007EBFC(0x100);
            lbl_805D6028 = temp_r3;
            if (temp_r3 != 0U) {
                fn_800F9DF4(sp8, temp_r3);
                lbl_805D602C = 0x100;
            }
        }
    } else if (temp_r31 > 0) {
        temp_r3_2 = fn_8007EBFC(temp_r31);
        lbl_805D6028 = temp_r3_2;
        if (temp_r3_2 != 0U) {
            fn_800F9DF4(sp8, temp_r3_2);
            lbl_805D602C = temp_r31;
        }
    }
}

}
