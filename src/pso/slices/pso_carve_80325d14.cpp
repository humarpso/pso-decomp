#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802CAC80();
extern s32 lbl_805D6C60;

void TObjEneMe1GiGueBarrier__sub_80325D14(void) {
    lbl_805D6C60 = fn_802CAC80();
}

}
