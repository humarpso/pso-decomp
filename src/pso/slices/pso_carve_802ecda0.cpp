#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802EF120(void *);

void fn_802ECDA0(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x708);
    if ((u32) temp_r3 != 0U) {
        fn_802EF120(temp_r3);
    }
    M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) & 0xFFFFFFEF);
}

}
