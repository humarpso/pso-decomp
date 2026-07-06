#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 TObjLazerFence4__vt8(u8 *arg0, f32 farg0, f32 farg1);
s32 fn_8001A430();
f32 fn_8013157C(void *, s32);
s16 fn_801A2340(void *, f32, f32);

extern s32 lbl_805D4DF0;

s16 TObjLazerFence4__vt8(u8 *arg0, f32 farg0, f32 farg1) {
    if (fn_8001A430() == 1) {
        return M2C_FIELD(arg0, s16 *, 0x1E);
    }
    if (fn_8013157C(arg0 + 0x38, lbl_805D4DF0 + 0x178) < (farg1 * farg1)) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 1;
        return M2C_FIELD(arg0, s16 *, 0x1E);
    }
    return fn_801A2340(arg0, farg0, farg1);
}

}
