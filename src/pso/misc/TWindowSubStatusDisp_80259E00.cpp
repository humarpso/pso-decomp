#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubStatusDisp__sub_80259E00(void *arg0, s32 arg1, f32 farg0);
f32 TObjFish__sub_8001973C(f32, f32);

extern M2C_UNK lbl_8044F010;
extern const f32 lbl_805DCF58;
extern const f32 lbl_805DCF5C;
extern const f32 lbl_805DCF60;

void TWindowSubStatusDisp__sub_80259E00(void *arg0, s32 arg1, f32 farg0) {
    f32 temp_f2;
    f32 var_f31;

    if (M2C_FIELD(arg0, f32 *, 0x28) != (f32) arg1) {
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) arg1;
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x28);
        var_f31 = temp_f2 - M2C_FIELD(arg0, f32 *, 0x24);
        var_f31 = var_f31 / farg0;
        if (TObjFish__sub_8001973C(var_f31, temp_f2) < lbl_805DCF5C) {
            if (var_f31 > lbl_805DCF58) {
                var_f31 = lbl_805DCF5C;
            } else {
                var_f31 = lbl_805DCF60;
            }
        }
        M2C_FIELD(arg0, f32 *, 0x2C) = var_f31;
    }
}

}
