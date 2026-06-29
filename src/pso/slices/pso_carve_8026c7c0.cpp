#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern f32 lbl_805DD294;
extern f32 lbl_805DD298;

s32 fn_8026C7C0(void *arg0, s8 arg1) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0);
    if (arg1 == (s8) temp_r0) {
        return 0;
    }
    if (arg1 > (s8) temp_r0) {
        M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DD294;
    } else {
        M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DD298;
    }
    M2C_FIELD(arg0, u8 *, 0) = (u8) arg1;
    return 1;
}

}
