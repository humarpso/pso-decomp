#include "types.h"
#include "pso/item/TUnk_804A1570.h"
extern "C" {
void update_trail_slot__11TItemWeaponFPvi(void *, s32);
void draw_weapon_at_joint(s32, s8);
void TUnk_804A1570::reserved_53() {
  s32 temp_r31;
  s32 new_var;
  temp_r31 = *((s32 *) (((s8 *) ((u8 *)this)) + 0xF4));
  new_var = (s32) ((u8 *)this);
  draw_weapon_at_joint(new_var, 0x2F);
  update_trail_slot__11TItemWeaponFPvi(((u8 *)this), 0);
  update_trail_slot__11TItemWeaponFPvi(((u8 *)this), 1);
  *((s32 *) (((s8 *) ((u8 *)this)) + 0xF4)) = (s32) (*((s32 *) (((s8 *) ((u8 *)this)) + 0x188)));
  draw_weapon_at_joint(new_var, 0x22);
  *((s32 *) (((s8 *) ((u8 *)this)) + 0xF4)) = temp_r31;
}

}
