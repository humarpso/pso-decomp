#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_spin__14TObjEnePanarmsFPv(void *arg0);
M2C_UNK TObjEnePanarms__sub_800DED30(void *, s32);

void update_spin__14TObjEnePanarmsFPv(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x3EC) & 2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x111);
    } else {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) - 0x111);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388) - 1;
    M2C_FIELD(arg0, s32 *, 0x388) = temp_r0;
    if (temp_r0 < 0) {
        TObjEnePanarms__sub_800DED30(arg0, 7);
    }
}

}
