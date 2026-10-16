#include "types.h"
#include "pso/items/TItemWeapon.h"
#include "pso/item/TItemEquipBase.h"
#include "pso/item/TItemProShield.h"

extern "C" {
void vfunc_26__14TItemProShieldFv(u8 *arg0);
}

extern "C" {

void TItemProShield::vfunc_26() {
    s32 temp_r31;
    if (*(s32 *)((s8 *)((u8 *)this) + 0x19C) & 8) {
        ((TItemProShield *)((u8 *)this))->deactivate_shield_effect(0x13);
        temp_r31 = *(s32 *)((s8 *)((u8 *)this) + 0xF4);
        *(s32 *)((s8 *)((u8 *)this) + 0xF4) = (s32) *(s32 *)((s8 *)((u8 *)this) + 0x188);
        ((TItemProShield *)((u8 *)this))->deactivate_shield_effect(0xA);
        *(s32 *)((s8 *)((u8 *)this) + 0xF4) = temp_r31;
        return;
    }
    ((TItemProShield *)((u8 *)this))->deactivate_shield_effect((s32) ((TItemWeapon *)((u8 *)this))->get_attach_joint());
}

}
