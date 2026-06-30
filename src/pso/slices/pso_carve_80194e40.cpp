#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 fn_8013157C(s32, s32);
s32 fn_801A2340(s32, f32, f32);
extern s32 lbl_805D4DF0;

s32 TMotorcycle__vt8(s32 arg0, f32 farg0, f32 farg1) {
    if (fn_8013157C(lbl_805D4DF0 + 0x178, arg0 + 0x38) < (farg1 * farg1)) {
        return 1;
    }
    return fn_801A2340(arg0, farg0, farg1);
}

}
