#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800773BC(s32);
s32 fn_80077720();

void fn_8007737C(void *arg0) {
    if (fn_80077720() != 0) {
        fn_800773BC(((u32) M2C_FIELD(arg0, u32 *, 0x1C) >> 5U) & 0xF);
    }
}

}
