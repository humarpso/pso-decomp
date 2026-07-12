#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800ACA60(void *arg0);

extern f32 lbl_805D9BD8;
extern f32 lbl_805D9BDC;

void TObjPlayer__sub_800ACA60(void *arg0) {
    f32 lo = lbl_805D9BD8;
    if (M2C_FIELD(arg0, f32 *, 0x354) < lo) {
        M2C_FIELD(arg0, f32 *, 0x354) = lo;
    } else if (lbl_805D9BDC < M2C_FIELD(arg0, f32 *, 0x354)) {
        M2C_FIELD(arg0, f32 *, 0x354) = (f32) lbl_805D9BDC;
    }
    M2C_FIELD(arg0, s32 *, 0x374) = (s32) M2C_FIELD(arg0, f32 *, 0x354);
}

}
