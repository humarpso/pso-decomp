#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_phase_complete__11TBoss6Type2FPv(void *arg0);
s32 calc_field4f0_delta__11TBoss6Type2FPv();
s32 fn_802AC18C();

s32 is_phase_complete__11TBoss6Type2FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0) {
        return 0;
    }
    if (calc_field4f0_delta__11TBoss6Type2FPv() >= (s32) M2C_FIELD(arg0, s32 *, 0x4C4)) {
        return 1;
    }
    if ((fn_802AC18C() == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x420) >= 8)) {
        return 1;
    }
    return 0;
}

}
