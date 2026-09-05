#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_28 { u8 bytes[0x28]; };

extern "C" {
u8 * TWindowSubComCard__sub_80077958(s32 arg0, s32 arg1);
}

extern "C" {

s32 get_chr_select__17TWindowSubComCardFv(void);
void release__17TWindowSubComCardFv(void);
void __dl__FPv(void*);

extern u32 lbl_805D4E5C;

void release__17TWindowSubComCardFv(void) {
    if ((u32) lbl_805D4E5C != 0U) {
        __dl__FPv((void*)lbl_805D4E5C);
        lbl_805D4E5C = 0U;
    }
}

extern s32 lbl_805D4E58;

s32 get_chr_select__17TWindowSubComCardFv(void) {
    return lbl_805D4E58;
}
u8 * TWindowSubComCard__sub_80077958(s32 arg0, s32 arg1) {
    *(M2CCopy_28 *)(arg0) = *(const M2CCopy_28 *)(arg1);
    return (u8 *)arg0;
}

}
