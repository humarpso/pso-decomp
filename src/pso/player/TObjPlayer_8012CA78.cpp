#include "types.h"

extern "C" {

void *construct_weapon_variant__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2);
s32 TItemWeapon__ct();
s32 set_weapon_trail_joints(void *, s32, s32, s32);
s32 set_atp__10TObjPlayerFPvs(void *, s32);

extern s32 lbl_804A5458[];

void *construct_weapon_variant__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2) {
    u8 temp_r0;

    TItemWeapon__ct();
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A5458;
    temp_r0 = *(u8 *)((s8 *)arg2 + 2);
    switch ((s32) temp_r0) {
    case 5:
    case 6:
        set_weapon_trail_joints(arg0, 0, 3, 2);
        break;
    case 4:
        set_weapon_trail_joints(arg0, 0, 2, 1);
        break;
    default:
        set_weapon_trail_joints(arg0, 0, 2, 3);
        break;
    }
    if ((u8) *(u8 *)((s8 *)arg2 + 2) >= 4U) {
        set_atp__10TObjPlayerFPvs(arg0, -1);
    }
    return arg0;
}

}
