#include "types.h"

extern "C" {

void spawn_cane__10TObjPlayerFi(s32 arg0);
void *set_vtable_804A1478__10TObjPlayerFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFPv();
s32 spawn_cane_effects__10TObjPlayerFiUiii(s32, s32, s32, s32);
s32 get_attack_stage__11TItemWeaponFPv(s32);
void TItemWeapon__ct(void *);

extern s32 tl_05;

void spawn_cane__10TObjPlayerFi(s32 arg0) {
    if ((get_slot_count__14TItemProShieldFPv() < 4U) && (get_attack_stage__11TItemWeaponFPv(arg0) == 0)) {
        spawn_cane_effects__10TObjPlayerFiUiii(tl_05, arg0, 1, 2);
    }
}

extern s32 lbl_804A1478[];

void *set_vtable_804A1478__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A1478;
    return arg0;
}

}
