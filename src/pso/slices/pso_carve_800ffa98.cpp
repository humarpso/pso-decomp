#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma fp_contract on

extern "C" {

f32 fn_803D64C0(s32, f32, f32);
extern const f32 lbl_805DAA68;
extern const f32 lbl_805DAA6C;
extern const f32 lbl_805DAA70;
extern const f32 lbl_805DAA74;
extern const f32 lbl_805DAA78;

s32 fn_800FFA98(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f31;
    f32 temp_orig;

    temp_f1 = M2C_FIELD(arg1, f32 *, 8);
    if ((temp_f1 < lbl_805DAA68) || (temp_f1 > lbl_805DAA6C)) {
        return 0;
    }
    temp_f2 = temp_f1 - lbl_805DAA6C;
    temp_f31 = temp_f2 / lbl_805DAA70;
    M2C_FIELD(arg1, f32 *, 0) = (lbl_805DAA74 * temp_f31) * fn_803D64C0(M2C_FIELD(arg0, s32 *, 0x28) + (s32) (lbl_805DAA78 * temp_f31), lbl_805DAA70, temp_f2) + M2C_FIELD(arg1, f32 *, 0);
    return 1;
}

}
