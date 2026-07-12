#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_meseta_anim_state__10TObjPlayerFPv(void *arg0);

void update_meseta_anim_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 >= 3) || (temp_r0 < 0)) {
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s32 *, 0x388) = 1;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x374);
    switch (temp_r0_2) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0x326) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        return;
    case 1:
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        return;
    default:
        M2C_FIELD(arg0, s16 *, 0x326) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        return;
    }
}

}
