#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOMineTrap__sub_801706D0(s32 arg0);
M2C_UNK fn_800822D4(f32, f32);
u32 fn_80087350(s32, M2C_UNK);

extern f32 lbl_805DB864;

void TOMineTrap__sub_801706D0(s32 arg0) {
    if (fn_80087350(arg0 + 0x2FC, 0x45) != 0U) {
        fn_800822D4(lbl_805DB864, lbl_805DB864);
    }
}

}
