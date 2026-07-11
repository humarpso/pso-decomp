#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_field4b0_delta__11TBoss6Type1FPv();

int is_time_up__11TBoss6Type1FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        return 0;
    }
    return calc_field4b0_delta__11TBoss6Type1FPv() >= (s32) M2C_FIELD(arg0, s32 *, 0x490) ? 1 : 0;
}

extern f32 lbl_805DE350;

void TBoss6Type1__sub_802B5FB4(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x4AC) == 0) && (M2C_FIELD(arg0, f32 *, 0x4D8) < lbl_805DE350)) {
        M2C_FIELD(arg0, s32 *, 0x4AC) = 1;
    }
}

}
