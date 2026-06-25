#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
s32 fn_8028C938();
M2C_UNK fn_8028C9B0(void *);
M2C_UNK fn_8028CEEC(void *, s32 *);

void fn_8028CFE8(void *arg0) {
    s32 *temp_r4;

    if (fn_8028C938() != 0) {
        fn_8028C9B0(arg0);
        temp_r4 = M2C_FIELD(arg0, s32 **, 0x3C);
        *temp_r4 &= 0xFFFFFF7F;
        fn_8028CEEC(arg0, temp_r4);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
