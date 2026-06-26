#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80269CC0(void *, M2C_UNK, M2C_UNK, M2C_UNK);

void fn_80269D24(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    fn_80269CC0(arg0, arg1, arg2, 4);
}

}
