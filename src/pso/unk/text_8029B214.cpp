#include "types.h"
extern "C" {
s32 TObjPlayer__sub_800196EC(void);
s32 get_field_3e4__10TObjPlayerFPv(void *);
f32 fn_8013157C(void *, void *);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern const f32 lbl_805DDCD0;
s32 fn_8029B214(s32 arg0);
}

extern "C" {

s32 fn_8029B214(s32 arg0) {
  f32 temp_f31;
  s32 temp_r31;
  s32 var_r29;
  s32 new_var;
  u8 *temp_r3;
  temp_f31 = lbl_805DDCD0;
  var_r29 = 0;
  loop_1:
  temp_r3 = (u8 *) TPlayerBattleCtrl4P__sub_801BA74C(var_r29);
  if (temp_r3 != 0)
  {
    temp_r31 = get_field_3e4__10TObjPlayerFPv(temp_r3);
    new_var = TObjPlayer__sub_800196EC();
    if ((new_var == temp_r31) && (fn_8013157C((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38)) < temp_f31))
    {
      return 1;
    }
  }
  var_r29 += 1;
  if (var_r29 >= 4)
  {
    return 0;
  }
  goto loop_1;
}

}
