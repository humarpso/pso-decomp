#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 xmalloc__FUl(M2C_UNK);
M2C_UNK memset(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 lbl_805D63C0;
extern s32 lbl_805D63C4;

void fn_8023E768(void) {
    s32 p = xmalloc__FUl(0x1800);
    lbl_805D63C0 = p;
    memset(p, 0, 0x1800);
    lbl_805D63C4 = xmalloc__FUl(0x3800);
}

}
