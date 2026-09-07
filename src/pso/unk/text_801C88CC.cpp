#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
M2C_UNK TObjPlayer__sub_8011E204(int, int);
s32 TObjPlayer__sub_801AFF0C();
extern const f32 TObjPlayer__data_805DC368;
extern const f32 TObjPlayer__data_805DC36C;
void TObjPlayer__sub_801C8998(u8 *arg0);
}

extern "C" {

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
