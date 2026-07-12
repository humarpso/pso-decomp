#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_move_timer__14TObjEnePanarmsFPv(u8 *arg0);
s32 TObjEnePanarms__sub_800DFB44(s32);
M2C_UNK TObjEnePanarms__sub_800E1C98(void *, M2C_UNK);
M2C_UNK TObjEnePanarms__sub_800F5EB4(void *, M2C_UNK);
s32 TObjPlayer__sub_801423A4(s32, s32, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

void update_move_timer__14TObjEnePanarmsFPv(u8 *arg0) {
    s32 temp_r0;

    if ((TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3A0)) != 0) || (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10)) {
        TObjEnePanarms__sub_800E1C98(arg0, 0xA);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3B4) - 1;
    M2C_FIELD(arg0, s32 *, 0x3B4) = temp_r0;
    if (temp_r0 == 0) {
        TBoss3Volopt__sub_8022675C(TObjEnePanarms__sub_800F5EB4(arg0, 0x4003B72F), arg0 + 0x38, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3D4) - 0x800, 0x200);
}

}
