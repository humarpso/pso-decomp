#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern const f64 lbl_8043E5C8;
extern const f32 lbl_805DABCC;

s32 fn_80115960(void *arg0) {
    return (s32) (lbl_805DABCC * (f32) M2C_FIELD(arg0, s16 *, 2));
}

}
