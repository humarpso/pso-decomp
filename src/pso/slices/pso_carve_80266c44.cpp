#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8013AD38();
M2C_UNK fn_80268468(void *);
M2C_UNK fn_80268478(void *);
M2C_UNK fn_8028783C(u32, M2C_UNK);

void fn_80266C44(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        if (fn_8013AD38() != 0) {
            fn_8028783C(M2C_FIELD(arg0, u32 *, 0x80), 2);
        } else {
            fn_8028783C(M2C_FIELD(arg0, u32 *, 0x80), 1);
        }
    }
    fn_80268478(arg0);
    fn_80268468(arg0);
}

}
