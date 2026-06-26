#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80191D14(u16, M2C_UNK);
s32 fn_80191D34(u16);
M2C_UNK fn_80191D5C(u16);
M2C_UNK fn_80191D80();

void fn_80191CC0(void *arg0) {
    fn_80191D80();
    if (fn_80191D34(M2C_FIELD(arg0, u16 *, 4)) != 0) {
        fn_80191D14(M2C_FIELD(arg0, u16 *, 4), 0);
        return;
    }
    fn_80191D5C(M2C_FIELD(arg0, u16 *, 4));
}

}
