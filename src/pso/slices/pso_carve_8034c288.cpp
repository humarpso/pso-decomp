#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801DA548(u32, s32);
s32 fn_8034C2D8();
extern u32 lbl_805D5580;
extern s32 lbl_805D6E98;

void fn_8034C288(void) {
    if (lbl_805D6E98 & 1) {
        if ((u32) lbl_805D5580 != 0U) {
            fn_801DA548(lbl_805D5580, fn_8034C2D8());
        }
        lbl_805D6E98 &= 0xFFFFFFFE;
    }
}

}
