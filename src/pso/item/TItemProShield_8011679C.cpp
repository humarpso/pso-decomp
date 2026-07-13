#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_to_equip_slot__14TItemProShieldFPv(void *arg0);
M2C_UNK TItemMag__sub_80111188(s32, s32);
s32 TItemProShield__sub_8010B734(void *);
s32 activate_d04_slot__10TObjPlayerFPv(s32);

void apply_to_equip_slot__14TItemProShieldFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = activate_d04_slot__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    if (temp_r3 != 0) {
        TItemMag__sub_80111188(temp_r3, TItemProShield__sub_8010B734(arg0));
    }
}

}
