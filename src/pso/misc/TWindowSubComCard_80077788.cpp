#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

}
