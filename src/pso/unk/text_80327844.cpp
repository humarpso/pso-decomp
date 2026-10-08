#include "types.h"
extern "C" {
s32 TOComputerMachine01__sub_803278B0(void *, int, void *);
void visit_matching_models(s32 arg0, u8 *arg1, s32 arg2);
}

extern "C" {

void visit_matching_models(s32 arg0, u8 *arg1, s32 arg2) {
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
      TOComputerMachine01__sub_803278B0((void *) arg0, (int) temp_r4, (void *) new_var);
    }
    temp_r4_2 = (u8 *) (*((u8 **) (((s8 *) var_r30) + 0x2C)));
    if (temp_r4_2 != 0)
    {
      visit_matching_models(arg0, temp_r4_2, new_var);
    }
    var_r30 = (u8 *) (*((u8 **) (((s8 *) var_r30) + 0x30)));
  }
  while (var_r30 != 0);
}

}
