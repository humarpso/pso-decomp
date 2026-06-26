#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802484C0();

void fn_80248534(void *arg0, u32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != arg1) {
        M2C_FIELD(arg0, u32 *, 0x60) = arg1;
        fn_802484C0();
    }
}

}
