#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern void *lbl_805D6EC0;

s32 fn_80351E84(void) {
    if ((void *) lbl_805D6EC0 != NULL) {
        return ((u32) M2C_FIELD(lbl_805D6EC0, u32 *, 0x1C) >> 1U) & 1;
    }
    return 0;
}

}
