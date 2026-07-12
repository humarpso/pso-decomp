#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOBarrierEnergy01__vt15(void *arg0);
M2C_UNK TOBarrierEnergy01__sub_80157D28(void *);
M2C_UNK TObjPlayer__sub_80154764(void *, M2C_UNK, M2C_UNK);
M2C_UNK update_anim_phase__17TOBarrierEnergy01FPv();

extern s32 *TOBarrierEnergy01__data_805D5894;

void TOBarrierEnergy01__vt15(void *arg0) {
    update_anim_phase__17TOBarrierEnergy01FPv();
    TOBarrierEnergy01__sub_80157D28(arg0);
    if (!(M2C_FIELD(arg0, s32 *, 0xD0) & 1)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        TObjPlayer__sub_80154764(arg0, 0, 8);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) *TOBarrierEnergy01__data_805D5894;
    }
}

}
