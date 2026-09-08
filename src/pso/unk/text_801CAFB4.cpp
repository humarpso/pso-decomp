#include "types.h"
extern "C" {
s32 TObjPlayer__sub_801CAAD8(void *);
s32 TObjPlayer__sub_801CAAF8(void *);
s32 start_action_0e__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CADA4(void *);
s32 TObjPlayer__sub_801CAEAC();
s32 TObjPlayer__sub_801CAEB0(void *);
s32 TObjPlayer__sub_801CAF6C();
s32 check_and_trigger_19_5__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801CAFB4(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801CAFB4(s32 arg0, s16 arg1) {
  void *new_var;
  {
    switch (arg1)
    {
      case 7:
        check_and_trigger_19_5__10TObjPlayerFPv((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_801CAF6C();
        return;
      case 3:
        TObjPlayer__sub_801CAEB0(new_var = (void *) arg0);
        return;
      case 8:
        TObjPlayer__sub_801CAEAC();
        return;
      case 5:
        TObjPlayer__sub_801CADA4((void *) arg0);
        return;
      new_var = (void *) arg0;
      case 0:
        start_action_0e__10TObjPlayerFPv(new_var);
        return;
      case 1:
        TObjPlayer__sub_801CAAF8(new_var);
        return;
      case 6:
        TObjPlayer__sub_801CAAD8(new_var);
        break;
    }
  }
}

}
