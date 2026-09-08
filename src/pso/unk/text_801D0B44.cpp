#include "types.h"
extern "C" {
s32 TObjPlayer__sub_801D0514();
s32 update_action__10TObjPlayerFi(void *);
s32 start_animation__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801D094C(void *);
s32 TObjPlayer__sub_801D09F4();
s32 TObjPlayer__sub_801D09F8();
s32 TObjPlayer__sub_801D09FC(void *);
s32 try_apply_status_action_2__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801D0B44(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801D0B44(s32 arg0, s16 arg1) {
  s32 new_var;
  {
    switch (arg1)
    {
      case 7:
        try_apply_status_action_2__10TObjPlayerFPv((void *) arg0);
        return;
      new_var = arg0;
      case 2:
        TObjPlayer__sub_801D09FC((void *) new_var);
        return;
      case 3:
        TObjPlayer__sub_801D09F8();
        return;
      case 8:
        TObjPlayer__sub_801D09F4();
        return;
      case 5:
        TObjPlayer__sub_801D094C((void *) new_var);
        return;
      case 0:
        start_animation__10TObjPlayerFPv((void *) new_var);
        return;
      case 1:
        update_action__10TObjPlayerFi((void *) new_var);
        return;
      case 6:
        TObjPlayer__sub_801D0514();
        break;
    }
  }
}

}
