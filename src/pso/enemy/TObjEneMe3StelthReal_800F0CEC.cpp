#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMe3StelthReal__vt105(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
f32 calc_boss4_scale__10TObjPlayerFi();

extern const f32 lbl_805DA81C;

typedef struct EneStelth EneStelth;

void TObjEneMe3StelthReal__vt105(void *arg0) {
    EneStelth *self = (EneStelth *)arg0;
    M2C_FIELD(arg0, s32 *, 0x3EC) = M2C_FIELD(arg0, s32 *, 0x3EC) + 1;
    if ((M2C_FIELD(arg0, s32 *, 0x3EC) >= 2) || (calc_boss4_scale__10TObjPlayerFi() < lbl_805DA81C)) {
        TObjEneDD__sub_800BBA18(self, 9);
        return;
    }
    TObjEneDD__sub_800BBA18(self, 6);
}

}
