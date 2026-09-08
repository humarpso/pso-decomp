#include "types.h"
extern "C" {
s32 update_dispatch_v76__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C8478();
s32 do_action__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C85BC(void *);
s32 TObjPlayer__sub_801C862C();
s32 update_if_flagged__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C8678();
s32 try_change_action_wrapper__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C869C(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801C869C(s32 arg0, s16 arg1) {
  unsigned int new_var2;
  unsigned int new_var;
  {
    switch (arg1)
    {
      case 7:
        try_change_action_wrapper__10TObjPlayerFPv((void *) arg0);
        return;
      new_var2 = (new_var = arg0);
      case 2:
        TObjPlayer__sub_801C8678();
        return;
      case 3:
        update_if_flagged__10TObjPlayerFPv((void *) new_var2);
 do { } while (0 != 0);
        return;
      case 8:
        TObjPlayer__sub_801C862C();
        return;
      case 5:
        TObjPlayer__sub_801C85BC((void *) arg0);
        return;
      case 0:
        do_action__10TObjPlayerFPv((void *) arg0);
        return;
      case 1:
        TObjPlayer__sub_801C8478();
        return;
      case 6:
        update_dispatch_v76__10TObjPlayerFPv((void *) arg0);
        break;
    }
  }
}

}
