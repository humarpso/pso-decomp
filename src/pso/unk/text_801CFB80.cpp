#include "types.h"

extern "C" {
volatile int TObjPlayer__sub_8001BEF8(void *, s32);
u8 *TObjPlayer__sub_801CFBFC(u8 *arg0);
s32 TObjPlayer__sub_801CFB40();
s32 TObjPlayer__sub_801CFB44();
s32 TObjPlayer__sub_801CFB48();
s32 TObjPlayer__sub_801CFB50();
s32 TObjPlayer__sub_801CFB54();
s32 TObjPlayer__sub_801CFB58();
s32 TObjPlayer__sub_801CFB5C();
s32 apply_status_action_b__10TObjPlayerFPv(void *);
int TObjPlayer__sub_801CFB80(s32 arg0, s16 arg1);
}

extern "C" {

#pragma opt_lifetimes off

int TObjPlayer__sub_801CFB80(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        apply_status_action_b__10TObjPlayerFPv((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_801CFB5C();
        return;
      case 3:
        TObjPlayer__sub_801CFB58();
        return;
      case 8:
        TObjPlayer__sub_801CFB54();
        return;
      case 5:
        TObjPlayer__sub_801CFB50();
        return;
      case 0:
        TObjPlayer__sub_801CFB48();
        return;
      case 1:
        TObjPlayer__sub_801CFB44();
        return;
      case 6:
        TObjPlayer__sub_801CFB40();
        break;
    }
  }
}

u8 *TObjPlayer__sub_801CFBFC(u8 *arg0) {
  s16 (*var_r12)(void *);
  s32 var_r4;
  u8 *var_r31;
  u8 *var_r3;
  var_r4 = 8;
  var_r31 = (u8 *) arg0;
  var_r3 = (u8 *) (var_r31 + 0x5EC);
  if (TObjPlayer__sub_8001BEF8(var_r3, 8) != 0)
  {
    var_r3 = (u8 *) (*((u8 **) (((s8 *) var_r31) + 0x380)));
    var_r12 = *((s16 (**)(void *)) (((s8 *) var_r3) + 8));
    var_r12 = *((s16 (**)(void *)) (((s8 *) var_r12) + 0x3C));
    var_r3 = (u8 *) ((void *) var_r12(var_r3));
    return var_r3;
  }
  var_r3 = (u8 *) (*((u8 **) (((s8 *) var_r31) + 0x380)));
  var_r12 = *((s16 (**)(void *)) (((s8 *) var_r3) + 8));
  var_r12 = *((s16 (**)(void *)) (((s8 *) var_r12) + 0x58));
  var_r3 = (u8 *) ((void *) var_r12(var_r3));
  return var_r3;
}

}
