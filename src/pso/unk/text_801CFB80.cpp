#include "types.h"
extern "C" {
volatile int TObjPlayer__sub_8001BEF8(void *, s32);
u8 *TObjPlayer__sub_801CFBFC(u8 *arg0);
}

extern "C" {

#pragma opt_lifetimes off
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
