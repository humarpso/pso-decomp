#include "types.h"
extern "C" {
void update_trail_slot__11TItemWeaponFPvi(void *, s32);
void TObjPlayer__sub_80120BBC(s32, s8);
void TObjPlayer__sub_80122ED8(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_80122ED8(u8 *arg0) {
  s32 temp_r31;
  s32 new_var;
  temp_r31 = *((s32 *) (((s8 *) arg0) + 0xF4));
  new_var = (s32) arg0;
  TObjPlayer__sub_80120BBC(new_var, 0x2F);
  update_trail_slot__11TItemWeaponFPvi(arg0, 0);
  update_trail_slot__11TItemWeaponFPvi(arg0, 1);
  *((s32 *) (((s8 *) arg0) + 0xF4)) = (s32) (*((s32 *) (((s8 *) arg0) + 0x188)));
  TObjPlayer__sub_80120BBC(new_var, 0x22);
  *((s32 *) (((s8 *) arg0) + 0xF4)) = temp_r31;
}

}
