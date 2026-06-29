#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern u32 lbl_805D5350;
extern s8 lbl_805D535A;

void fn_800F8AD0(void) {
    if ((u32) lbl_805D5350 != 0U) {
        lbl_805D535A = 1;
    }
}

}
