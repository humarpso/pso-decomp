#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80105984(M2C_UNK *);
M2C_UNK fn_8010D510(void *, M2C_UNK *);

void fn_80106CBC(void *arg0, void *arg1) {
    M2C_UNK sp8;

    if ((u8) M2C_FIELD(arg1, u8 *, 0) == 2) {
        fn_80105984(&sp8);
        M2C_FIELD(arg1, s8 *, 1) = 0;
        fn_8010D510(arg1, &sp8);
    }
}

}
