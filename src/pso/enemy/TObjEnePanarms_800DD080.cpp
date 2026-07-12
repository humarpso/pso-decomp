#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_timed_action__14TObjEnePanarmsFPv(u8 *arg0);
M2C_UNK TObjEnePanarms__sub_800DED30(void *, M2C_UNK);
s32 TObjEnePanarms__sub_800DFB44(s32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

void update_timed_action__14TObjEnePanarmsFPv(u8 *arg0) {
    s32 temp_r0;

    if ((TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3E4)) != 0) || (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3E8)) != 0)) {
        TObjEnePanarms__sub_800DED30(arg0, 0xA);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388) - 1;
    M2C_FIELD(arg0, s32 *, 0x388) = temp_r0;
    if (temp_r0 <= 0) {
        TObjEnePanarms__sub_800DED30(arg0, 0xC);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x388) == 0x13) {
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003BC32), arg0 + 0x38, 0, 0);
    }
}

}
