#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_ready_to_attack__11TBoss6Type2FPv(void *arg0);
s32 calc_field4f0_delta__11TBoss6Type2FPv(void *);
s32 TBoss6PlotFalz__sub_802AC17C();

s32 is_ready_to_attack__11TBoss6Type2FPv(void *arg0) {
    s32 temp;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) {
        return 0;
    }
    if (TBoss6PlotFalz__sub_802AC17C() != 0) {
        return 0;
    }
    temp = calc_field4f0_delta__11TBoss6Type2FPv(arg0);
    return M2C_FIELD(arg0, s32 *, 0x4C0) <= temp ? 1 : 0;
}

}
