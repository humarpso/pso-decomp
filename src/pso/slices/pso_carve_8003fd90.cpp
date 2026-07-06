#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern const f64 lbl_80436350;
extern const f32 lbl_805D86B4;

s32 fn_8003FD90(void *arg0) {
    return (s32) (lbl_805D86B4 * (f32) ((((s32) (u16) M2C_FIELD(arg0, s32 *, 0x390) / 10922) * 0x3C) + 0x78));
}

}
