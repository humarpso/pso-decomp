#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_8032EAB8(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x384) == 0) {
        return arg1;
    }
    return -arg1;
}

f32 apply_direction_sign__11TBoss6Type2FPvf(void *arg0, f32 farg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x384) != 0) {
        return -farg0;
    }
    return farg0;
}

}
