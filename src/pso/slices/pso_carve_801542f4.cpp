#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8015434C(s32, s32, s32);
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;

void fn_801542F4(s32 a) {
    fn_8015434C(a, lbl_805D586C, lbl_805D5870);
}

}
