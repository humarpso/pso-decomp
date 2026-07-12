#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_action_timer__14TObjEnePanarmsFPv(void *arg0);
M2C_UNK TObjEnePanarms__sub_8002AE74(void *, M2C_UNK);
M2C_UNK TObjEnePanarms__sub_800E1C98(void *, M2C_UNK);
s32 TObjPlayer__sub_80141F84(s32, s32);
s32 fn_801423A4(s32, s32, M2C_UNK);

void update_action_timer__14TObjEnePanarmsFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3B4) - 1;
    M2C_FIELD(arg0, s32 *, 0x3B4) = temp_r0;
    if (temp_r0 < 0) {
        TObjEnePanarms__sub_800E1C98(arg0, 2);
        return;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0x60) = fn_801423A4(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3D4), 0x888);
    if (TObjPlayer__sub_80141F84(temp_r3, M2C_FIELD(arg0, s32 *, 0x60)) == 0) {
        TObjEnePanarms__sub_8002AE74(arg0, 0);
    }
}

}
