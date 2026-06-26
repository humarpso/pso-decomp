#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80087350(M2C_UNK *, M2C_UNK);
M2C_UNK fn_801207E8(M2C_UNK, M2C_UNK, M2C_UNK *);

void fn_80122924(M2C_UNK arg0) {
    M2C_UNK sp8[6];

    fn_801207E8(arg0, 1, sp8);
    fn_80087350(sp8, 0xC1);
}

}
