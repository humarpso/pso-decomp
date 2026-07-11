#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TObjEneRecon__sub_8031DB34(f32 farg0, f32 farg1);
f32 TObjFish__sub_8001973C(f32);

extern const f32 lbl_805DF3B8;
extern const f32 TObjEneRecon__data_805DF3D0;
extern const f32 lbl_805DF3E8;
extern const f32 lbl_805DF424;

f32 TObjEneRecon__sub_8031DB34(f32 farg0, f32 farg1) {
    f32 temp_f31;
    f32 var_f1;

    temp_f31 = farg1 - farg0;
    if (TObjFish__sub_8001973C(temp_f31) < lbl_805DF3E8) {
        return farg1;
    }
    var_f1 = TObjEneRecon__data_805DF3D0;
    var_f1 = temp_f31 * var_f1;
    if (var_f1 > lbl_805DF3B8) {
        var_f1 = lbl_805DF3B8;
    } else if (var_f1 < lbl_805DF424) {
        var_f1 = lbl_805DF424;
    }
    return farg0 + var_f1;
}

}
