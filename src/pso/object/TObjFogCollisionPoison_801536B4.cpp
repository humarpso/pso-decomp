#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjFogCollisionPoison__vt11(void *arg0);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);

extern const f64 lbl_80440088;
extern s32 lbl_805D5550;
extern const f32 lbl_805DB250;
extern const f32 lbl_805DB254;
extern const f32 lbl_805DB258;
extern const f32 lbl_805DB25C;

void TObjFogCollisionPoison__vt11(void *arg0) {
    f32 var_f2;

    M2C_FIELD(arg0, s32 *, 0x98) = (s32) get_random_float__21TObjEneMe3ShinowaRealFv(M2C_FIELD(arg0, f32 *, 0x6C));
    switch ((s32) lbl_805D5550) {
    default:
    case 0:
        var_f2 = lbl_805DB250;
        break;
    case 1:
        var_f2 = lbl_805DB254;
        break;
    case 2:
        var_f2 = lbl_805DB258;
        break;
    case 3:
        var_f2 = lbl_805DB25C;
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x98) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x98) * var_f2);
}

}
