#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8001ED9C(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK fn_800660D4(s32, s32, s32, s32, M2C_UNK, f32);
s32 fn_800869A4(s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_80087350(s32, M2C_UNK);
extern s32 lbl_805D63AC;
extern s32 lbl_805D63B0;
extern f32 lbl_805E0084;

void fn_803586F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a;

    if (arg3 == 0) {
        fn_80087350(arg0 + 0x2FC, 0xBD);
    }
    if (arg3 == 1) {
        temp_a = fn_800869A4(arg2, 0xBF, 0, 0xF);
        if (temp_a != 0) {
            fn_800660D4(temp_a, TObjFish__sub_8001EDC4(lbl_805D63AC, 0), lbl_805D63B0, fn_8001ED9C(lbl_805D63AC, 0), 0, lbl_805E0084);
        }
    }
}

}
