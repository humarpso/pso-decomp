#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801A7E4C();
extern s32 lbl_805D3620;
extern u32 lbl_805D6050;

void fn_801A7A44(void) {
    fn_801A7E4C();
    if ((u32) lbl_805D6050 != 0U) {
        lbl_805D3620 = 0;
    }
}

}
