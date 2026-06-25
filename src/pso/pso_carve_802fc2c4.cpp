#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802F376C();
M2C_UNK fn_802FC314(void *, M2C_UNK);

void fn_802FC2C4(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x3C0) & 0x40) && (fn_802F376C() != 0)) {
        fn_802FC314(arg0, 0x4003D013);
    }
}

}
