#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern const f32 lbl_805D9958;
extern const f32 lbl_805D995C;
extern const f32 lbl_805D9960;
extern const f32 lbl_805D9964;

void fn_800A0408(void *arg0) {
    f32 temp_f1;
    f32 var_f0;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x18);
    if (temp_f1 > lbl_805D9960) {
        if (temp_f1 > lbl_805D995C) {
            M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_805D9958;
        } else {
            M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f1 - lbl_805D995C);
        }
        M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_805D9958;
        M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805D9958;
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_805D9958;
        return;
    }
    M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_805D9964;
    var_f0 = M2C_FIELD(arg0, f32 *, 0x18) - lbl_805D9960;
    if (var_f0 < lbl_805D9964) {
        var_f0 = lbl_805D9964;
    }
    M2C_FIELD(arg0, f32 *, 4) = var_f0;
    M2C_FIELD(arg0, f32 *, 8) = var_f0;
    M2C_FIELD(arg0, f32 *, 0xC) = var_f0;
}

}
