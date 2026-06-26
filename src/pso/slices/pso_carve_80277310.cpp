#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_8028783C(s32, M2C_UNK);

void fn_80277310(void *arg0) {
    fn_8022675C(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x73) = (u8) (M2C_FIELD(arg0, u8 *, 0x73) | 1);
    fn_8028783C(M2C_FIELD(arg0, s32 *, 0x7C), 2);
}

}
