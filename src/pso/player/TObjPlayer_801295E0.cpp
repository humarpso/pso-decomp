#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801295E0(void *arg0);

extern const f32 lbl_805DAE28;

void TObjPlayer__sub_801295E0(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805DAE28;
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805DAE28;
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_805DAE28;
    }
}

}
