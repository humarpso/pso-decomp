#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjCMAutoMkData__vt2(void *arg0);

M2C_UNK fn_80290D1C(f32);

void TObjCMAutoMkData__vt2(void *arg0) {
    fn_80290D1C(M2C_FIELD(arg0, f32 *, 0x38));
}

}
