#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80084614();
M2C_UNK xfree__FPv(void *);
extern M2C_UNK (*lbl_805D6B2C)();

void TMovie__sub_801442D4(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x9C) != 0U) {
        xfree__FPv(M2C_FIELD(arg0, void **, 0x9C));
        M2C_FIELD(arg0, u32 *, 0x9C) = 0U;
    }
    lbl_805D6B2C();
    fn_80084614();
}

}
