#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TObjFish__sub_8001973C(f32);
extern f32 lbl_805DCD00;
extern f32 lbl_805DCD04;

s32 fn_8025041C(void *arg0, f32 farg0) {
    f32 temp_f31;

    temp_f31 = lbl_805DCD00 * (farg0 - M2C_FIELD(arg0, f32 *, 0x80));
    if (TObjFish__sub_8001973C(temp_f31) < lbl_805DCD04) {
        M2C_FIELD(arg0, f32 *, 0x80) = farg0;
        return 1;
    }
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) (M2C_FIELD(arg0, f32 *, 0x80) + temp_f31);
    return 0;
}

}
