#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801D2AC4(s32, f32);

void fn_801D0FAC(s32 arg0, s16 arg1) {
    fn_801D2AC4(arg0 + 0x4AC, (f32) (s32) arg1);
}

}
