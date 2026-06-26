#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80073DC4(void *, M2C_UNK);
s32 fn_8022350C(void *, M2C_UNK);
M2C_UNK fn_802237D8();

void fn_80214930(void *arg0) {
    fn_802237D8();
    M2C_FIELD(arg0, s32 *, 0x2C) = fn_8022350C(arg0, 1);
    fn_80073DC4(arg0, 1);
}

}
