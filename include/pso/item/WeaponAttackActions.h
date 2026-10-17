#ifndef PSO_ITEM_WEAPONATTACKACTIONS_H
#define PSO_ITEM_WEAPONATTACKACTIONS_H

#include "types.h"

struct TItemWeapon;
extern "C" {
void TItemWeapon__sub_8011E5C0(void);
void TItemWeapon__sub_8011E5C4(void);
void TItemWeapon__sub_8011E5C8(void);
void TItemWeapon__sub_8011E5CC(void);
void TItemWeapon__sub_8011E5D8(void);
void TObjPlayer__sub_8011E56C(u8 *arg0, u8 *arg1);
u32 pack_weapon_trail_color(void *weapon);
void remap_extra_attack_type(TItemWeapon *arg0);
}

#endif
