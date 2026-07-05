#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800822D4(f32, f32);
u32 fn_80087350(s32, M2C_UNK);
extern f32 lbl_805E007C;

void fn_803583FC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg3 == 0) {
        fn_80087350(arg0 + 0x2FC, 0xC6);
        fn_80087350(arg0 + 0x2FC, 0xC9);
    }
    if (arg3 == 1) {
        if (fn_80087350(arg2, 0x1C5) != 0U) {
            fn_800822D4(lbl_805E007C, lbl_805E007C);
        }
        if (fn_80087350(arg2, 0x1C8) != 0U) {
            fn_800822D4(lbl_805E007C, lbl_805E007C);
        }
    }
}

}
