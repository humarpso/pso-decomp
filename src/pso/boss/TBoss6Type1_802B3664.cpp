#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_timer_state__11TBoss6Type1FPv(void *arg0);
M2C_UNK TBoss6Type1__sub_802B7530();
M2C_UNK TBoss6Type1__sub_802B865C(void *, s32);

void update_timer_state__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    TBoss6Type1__sub_802B7530();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x374);
        if (temp_r4 == 5) {
            TBoss6Type1__sub_802B865C(arg0, 1);
            return;
        }
        TBoss6Type1__sub_802B865C(arg0, temp_r4 - 1);
    }
}

}
