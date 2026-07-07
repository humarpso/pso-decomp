#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8001BED8(void *, int);

void fn_801C6B1C(u8 *arg0, f32 farg0) {
    fn_8001BED8(arg0 + 4, 1);
    M2C_FIELD(arg0, f32 *, 8) = farg0;
}

}
