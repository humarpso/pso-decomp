#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOHealGeneral__sub_80169B3C(void *arg0, s32 arg1);
s32 update_heal_gauge_state__13TOHealGeneralFPv(void *arg0);
M2C_UNK TOHealGeneral__sub_80169B28(void *, s32);

void TOHealGeneral__sub_80169B3C(void *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < 0) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xD4) = var_r4;
}

s32 update_heal_gauge_state__13TOHealGeneralFPv(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD0);
    if (temp_r0 > 0xFF) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    } else if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC8) = 2;
    }
    TOHealGeneral__sub_80169B3C((void *)(arg0), (s32)(M2C_FIELD(arg0, s32 *, 0x88)));
    TOHealGeneral__sub_80169B28(arg0, M2C_FIELD(arg0, s32 *, 0x8C));
    return M2C_FIELD(arg0, s32 *, 0xD0);
}

}
