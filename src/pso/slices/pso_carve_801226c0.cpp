#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOBoss4Rock__sub_8039C880();
extern M2C_UNK lbl_8043E870;
extern f32 lbl_805DACF0;
extern f32 lbl_805DACF4;

void fn_801226C0(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 3) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 1;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 0) && ((lbl_805DACF0 * (f32) TOBoss4Rock__sub_8039C880()) < lbl_805DACF4)) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 2;
    }
}

}
