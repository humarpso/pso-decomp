#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s8 get_attach_joint__14TItemEquipBaseFPv(void *);
void deactivate_shield_effect__14TItemProShieldFPvi(void *, s32);
void TItemProShield__vt24(u8 *arg0);
}

extern "C" {

void TItemProShield__vt24(u8 *arg0) {
    s32 temp_r31;
    if (M2C_FIELD(arg0, s32 *, 0x19C) & 8) {
        deactivate_shield_effect__14TItemProShieldFPvi(arg0, 0x13);
        temp_r31 = M2C_FIELD(arg0, s32 *, 0xF4);
        M2C_FIELD(arg0, s32 *, 0xF4) = (s32) M2C_FIELD(arg0, s32 *, 0x188);
        deactivate_shield_effect__14TItemProShieldFPvi(arg0, 0xA);
        M2C_FIELD(arg0, s32 *, 0xF4) = temp_r31;
        return;
    }
    deactivate_shield_effect__14TItemProShieldFPvi(arg0, (s32) get_attach_joint__14TItemEquipBaseFPv(arg0));
}

}
