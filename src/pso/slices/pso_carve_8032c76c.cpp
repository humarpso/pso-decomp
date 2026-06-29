#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 xmalloc__FUl(M2C_UNK);
extern s32 lbl_805D6CC0;
extern s32 lbl_805D6CC8;

void fn_8032C76C(void) {
    lbl_805D6CC0 = 0;
    lbl_805D6CC8 = 0;
    lbl_805D6CC0 = xmalloc__FUl(0x40000);
    lbl_805D6CC8 = 0;
}

}
