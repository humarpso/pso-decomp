#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern const f32 lbl_805DACFC;
extern const f32 lbl_805DAD00;

void fn_80122E9C(void *arg0) {
    f32 temp_f0;
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x200);
    if (temp_f2 < lbl_805DAD00) {
        M2C_FIELD(arg0, f32 *, 0x200) = (f32) (temp_f2 + lbl_805DACFC);
        if (lbl_805DAD00 < M2C_FIELD(arg0, f32 *, 0x200)) {
            M2C_FIELD(arg0, f32 *, 0x200) = (f32) lbl_805DAD00;
        }
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x200);
        M2C_FIELD(arg0, f32 *, 0x1FC) = temp_f0;
        M2C_FIELD(arg0, f32 *, 0x1F8) = temp_f0;
    }
}

}
