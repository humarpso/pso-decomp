#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 try_set_mode8_if_flag2__19TObjEneBm9MericarolFPv(void *arg0);
void TObjEneBm9Mericarol__sub_802D093C(void);
void TObjEneBm9Mericarol__sub_802D0940(void);
void update_shadow_height__19TObjEneBm9MericarolFPv(void *arg0);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);

s32 try_set_mode8_if_flag2__19TObjEneBm9MericarolFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x438) & 2) {
        TObjEneDD__sub_800BBA18(arg0, 8);
        return 1;
    }
    return 0;
}
void TObjEneBm9Mericarol__sub_802D093C(void) {  }
void TObjEneBm9Mericarol__sub_802D0940(void) {  }
void update_shadow_height__19TObjEneBm9MericarolFPv(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}

}
