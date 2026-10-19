#ifndef PSO_ITEM_WEAPONATTACKACTIONS_H
#define PSO_ITEM_WEAPONATTACKACTIONS_H

#include "types.h"

struct TItemWeapon;
extern "C" {
void TItemWeapon__sub_8011E5C0(void);
void TItemWeapon__sub_8011E5C4(void);
void TItemWeapon__sub_8011E5C8(void);
void TItemWeapon__sub_8011E5CC(void);
void update_idle__11TItemWeaponFv(void);
void sub_8011E56C__11TItemWeaponFPUc(u8 *arg0, u8 *arg1);
}
u32 pack_weapon_trail_color(void *weapon);
extern "C" {
void remap_extra_attack_type__11TItemWeaponFv(TItemWeapon *arg0);
}

// --- C functions defined in WeaponAttackActions.cpp ---
extern "C" {
void TItemWeapon__sub_8011E5C0(void);
void TItemWeapon__sub_8011E5C4(void);
void TItemWeapon__sub_8011E5C8(void);
void TItemWeapon__sub_8011E5CC(void);
}
// --- end of C functions

#endif
