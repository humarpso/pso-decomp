#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;

extern "C" {
M2C_UNK TObjPlayer__sub_8011E204(int, int);
s32 TObjPlayer__sub_801AFF0C();
extern const f32 TObjPlayer__data_805DC368;
extern const f32 TObjPlayer__data_805DC36C;
void TObjPlayer__sub_801C8998(u8 *arg0);
M2C_UNK obj_setFlags30(void *, int);
M2C_UNK TObjPlayer__sub_8011E204(int, int);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, int, int);
s32 TObjPlayer__sub_801AFF0C();
M2C_UNK set_flag_400000__10TObjPlayerFi(void *);
M2C_UNK enter_battle_state__10TObjPlayerFPv(void *);
M2C_UNK update_active_state__10TObjPlayerFPv(void *);
extern const f32 TObjPlayer__data_805DC368;
extern const f32 TObjPlayer__data_805DC36C;
void TObjPlayer__sub_801C88CC(u8 *arg0);
}

extern "C" {

#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
void TObjPlayer__sub_801C88CC(u8 *arg0) {
  f32 var_f31;
  s16 temp_r0;
  s16 *new_var;
  if (TObjPlayer__sub_801AFF0C() != 0)
  {
    TObjPlayer__sub_8011E204((int)((void *) arg0), (int)((int) 4));
    update_active_state__10TObjPlayerFPv((void *) arg0);
    set_flag_400000__10TObjPlayerFi((void *) arg0);
    enter_battle_state__10TObjPlayerFPv((void *) (arg0 + 0x634));
    return;
  }
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x328));
  switch (temp_r0)
  {
    case 0:
      var_f31 = *((f32 *) (((s8 *) arg0) + 0x624));
      var_f31 = var_f31 - (*(f32 *)&TObjPlayer__data_805DC368);
      if (var_f31 < (*(f32 *)&TObjPlayer__data_805DC36C))
    {
      var_f31 = (*(f32 *)&TObjPlayer__data_805DC36C);
      new_var = (s16 *) (((s8 *) arg0) + 0x328);
      *new_var = 1;
      obj_setFlags30((void *) arg0, (int) 0x02000000);
      clear_player_status_flag__10TObjPlayerFPviUi((void *) arg0, (int) 0, (int) 1);
    }
      *((f32 *) (((s8 *) arg0) + 0x624)) = var_f31;
    case 1:
      return;
  }
}

void TObjPlayer__sub_801C8998(u8 *arg0) {
  f32 var_f0;
  f32 var_f1;
  f32 var_f2;
  s16 temp_r0;
  s32 var_r4;
  u8 *var_r31;
  u8 *var_r3;
  var_r31 = (u8 *) arg0;
  if (((s32) TObjPlayer__sub_801AFF0C()) != 0)
  {
    var_r3 = (u8 *) var_r31;
    var_r4 = 4;
    TObjPlayer__sub_8011E204((int) var_r3, (int) 4);
    return;
  }
  temp_r0 = *((s16 *) (((s8 *) var_r31) + 0x328));
  switch (temp_r0)
  {
    case 0:
      var_f2 = *((f32 *) (((s8 *) var_r31) + 0x624));
      var_f1 = TObjPlayer__data_805DC368;
      var_f0 = TObjPlayer__data_805DC36C;
      if (((!var_f0) && (!var_f0)) && (!var_f0))
    {
    }
      var_f2 -= var_f1;
      if (var_f2 < var_f0)
    {
      var_f2 = var_f0;
      *((s16 *) (((s8 *) var_r31) + 0x328)) = 1;
    }
      *((f32 *) (((s8 *) var_r31) + 0x624)) = var_f2;
    case 1:
      return;
  }
}

}
