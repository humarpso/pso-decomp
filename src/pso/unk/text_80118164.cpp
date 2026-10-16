#include "types.h"
#include "pso/item/TItemEquipBase.h"
#include "pso/item/TItemProShield.h"

extern "C" {
void TItemProShield__vt24(u8 *arg0);
}

extern "C" {

void TItemProShield__vt24(u8 *arg0) {
    s32 temp_r31;
    if (*(s32 *)((s8 *)arg0 + 0x19C) & 8) {
        ((TItemProShield *)arg0)->deactivate_shield_effect(0x13);
        temp_r31 = *(s32 *)((s8 *)arg0 + 0xF4);
        *(s32 *)((s8 *)arg0 + 0xF4) = (s32) *(s32 *)((s8 *)arg0 + 0x188);
        ((TItemProShield *)arg0)->deactivate_shield_effect(0xA);
        *(s32 *)((s8 *)arg0 + 0xF4) = temp_r31;
        return;
    }
    ((TItemProShield *)arg0)->deactivate_shield_effect((s32) ((TItemEquipBase *)arg0)->get_attach_joint());
}

}
