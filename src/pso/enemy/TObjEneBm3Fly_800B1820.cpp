#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 approach_value__13TObjEneBm3FlyFff(f32 farg0, f32 farg1);
f32 TObjFish__sub_8001973C(f32);

extern const f32 TObjEneBm3Fly__data_805D9C78;
extern const f32 lbl_805D9CE0;
extern const f32 lbl_805D9CE4;
extern const f32 lbl_805D9CE8;

f32 approach_value__13TObjEneBm3FlyFff(f32 farg0, f32 farg1) {
    f32 temp_f31;
    f32 var_f1;
    f32 cap;

    temp_f31 = farg1 - farg0;
    if (TObjFish__sub_8001973C(temp_f31) < lbl_805D9CE0) {
        return farg1;
    }
    var_f1 = TObjEneBm3Fly__data_805D9C78;
    var_f1 = temp_f31 * var_f1;
    if (var_f1 > lbl_805D9CE4) {
        var_f1 = lbl_805D9CE4;
    } else if (var_f1 < lbl_805D9CE8) {
        var_f1 = lbl_805D9CE8;
    }
    return farg0 + var_f1;
}

}
