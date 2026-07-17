#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__17TObjWarpBossMultiFPv(void *arg0);
s32 get_global_state__14TOKeyMachine01Fv();

void update__17TObjWarpBossMultiFPv(void *arg0) {
    s32 temp_r0;

    if (get_global_state__14TOKeyMachine01Fv() == 0) {
        M2C_FIELD(arg0, s32 *, 0xF4) = -1;
    } else {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x88);
        if ((temp_r0 < 0) || (temp_r0 > 0xFF)) {
            M2C_FIELD(arg0, s32 *, 0xF4) = -1;
        } else {
            M2C_FIELD(arg0, s32 *, 0xF4) = temp_r0;
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF4) >= 0) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xF0) = 1;
}

}
