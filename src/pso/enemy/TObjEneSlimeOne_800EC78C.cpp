#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_reached_target_depth__15TObjEneSlimeOneFPv(void *arg0);

extern f32 lbl_805D52B8;
extern u8 lbl_805D52BC;
extern f32 lbl_805DA760;

s32 is_reached_target_depth__15TObjEneSlimeOneFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 == -1) {
        return 1;
    }
    if (temp_r0 < 7) {
        return 0;
    }
    if ((s8) lbl_805D52BC == 0) {
        f32 tmp = M2C_FIELD(arg0, f32 *, 0x2C);
        lbl_805D52BC = 1;
        lbl_805D52B8 = tmp - lbl_805DA760;
    }
    if (M2C_FIELD(arg0, f32 *, 0x30) == lbl_805D52B8) {
        return 1;
    }
    return 0;
}

}
