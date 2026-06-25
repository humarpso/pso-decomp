#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801B6194(s32, s32, s16);
void *fn_801D93C4();

void fn_801B625C(void *arg0, s32 arg1) {
    fn_801B6194(arg1, M2C_FIELD(arg0, s32 *, 0x2B0) + 0xA, M2C_FIELD(fn_801D93C4(), s16 *, 0xA));
}

}
