#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 fn_802B16BC();

void fn_802ABD4C(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x384) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x384) = fn_802B16BC();
    }
}

}
