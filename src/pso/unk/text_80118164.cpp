#include "types.h"

extern "C" {
s8 get_attach_joint__14TItemEquipBaseFv(void *);
void deactivate_shield_effect__14TItemProShieldFl(void *, s32);
void TItemProShield__vt24(u8 *arg0);
}

extern "C" {

void TItemProShield__vt24(u8 *arg0) {
    s32 temp_r31;
    if (*(s32 *)((s8 *)arg0 + 0x19C) & 8) {
        deactivate_shield_effect__14TItemProShieldFl(arg0, 0x13);
        temp_r31 = *(s32 *)((s8 *)arg0 + 0xF4);
        *(s32 *)((s8 *)arg0 + 0xF4) = (s32) *(s32 *)((s8 *)arg0 + 0x188);
        deactivate_shield_effect__14TItemProShieldFl(arg0, 0xA);
        *(s32 *)((s8 *)arg0 + 0xF4) = temp_r31;
        return;
    }
    deactivate_shield_effect__14TItemProShieldFl(arg0, (s32) get_attach_joint__14TItemEquipBaseFv(arg0));
}

}
