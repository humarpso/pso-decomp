#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 scale_velocity__19TObjGyaranzoMissileFPvf(void *arg0, f32 farg0);
f32 fn_8001978C();
f32 fn_803D8D00();

extern f32 lbl_805DB068;
extern f32 lbl_805DB06C;

f32 scale_velocity__19TObjGyaranzoMissileFPvf(void *arg0, f32 farg0) {
    f32 temp_f1;
    f32 temp_f2;

    if (fn_803D8D00() > lbl_805DB068) {
        temp_f1 = fn_8001978C();
        temp_f2 = farg0 / temp_f1;
        M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) * temp_f2);
        M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) * temp_f2);
        M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * temp_f2);
        return temp_f1;
    }
    return lbl_805DB06C;
}

}
