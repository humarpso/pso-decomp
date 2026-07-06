#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801AFDB0();
M2C_UNK fn_803373D0(s32, s32);

void fn_8010EE90(s32 arg0) {
    fn_803373D0(arg0 + 0x374, fn_801AFDB0());
}

}
