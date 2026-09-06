#include "types.h"
extern "C" {
s32 fn_80327A38(void *, int, void *);
void fn_803279CC(s32 arg0, u8 *arg1, s32 arg2);
}

extern "C" {

void fn_803279CC(s32 arg0, u8 *arg1, s32 arg2) {
  unsigned int new_var;
  u32 temp_r4;
  u8 *temp_r4_2;
  u8 *var_r30;
  var_r30 = (u8 *) arg1;
  do
  {
    temp_r4 = *((u32 *) (((s8 *) var_r30) + 4));
    new_var = arg2;
    if (temp_r4 != 0U)
    {
      fn_80327A38((void *) arg0, (int) temp_r4, (void *) new_var);
    }
    temp_r4_2 = (u8 *) (*((u8 **) (((s8 *) var_r30) + 0x2C)));
    if (temp_r4_2 != 0)
    {
      fn_803279CC(arg0, temp_r4_2, new_var);
    }
    var_r30 = (u8 *) (*((u8 **) (((s8 *) var_r30) + 0x30)));
  }
  while (var_r30 != 0);
}

}
