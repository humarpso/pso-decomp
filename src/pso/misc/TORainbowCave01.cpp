#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__15TORainbowCave01FPv(void *arg0);

s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK update_anim_phase__17TOBarrierEnergy01FPv(void *);
M2C_UNK TORainbowCave01__sub_80158604(void *);

void update__15TORainbowCave01FPv(void *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TORainbowCave01__sub_80158604(arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xBC) != 0U) {
        update_anim_phase__17TOBarrierEnergy01FPv(arg0);
    }
}

}
