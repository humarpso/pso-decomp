#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern f32 lbl_805D6AC8;
extern u8 lbl_805D6ACC;
extern f32 lbl_805DF2E8;

s32 fn_80316420(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 == -1) {
        return 1;
    }
    if (temp_r0 < 6) {
        return 0;
    }
    if ((s8) lbl_805D6ACC == 0) {
        f32 temp_f1 = M2C_FIELD(arg0, f32 *, 0x24);
        lbl_805D6ACC = 1;
        lbl_805D6AC8 = temp_f1 - lbl_805DF2E8;
    }
    if (M2C_FIELD(arg0, f32 *, 0x28) == lbl_805D6AC8) {
        return 1;
    }
    return 0;
}

}
