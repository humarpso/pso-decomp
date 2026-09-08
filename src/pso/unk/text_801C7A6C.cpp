#include "types.h"
extern "C" {
s32 update_state_group__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C75A4();
s32 start_action_18__10TObjPlayerFPv(void *);
s32 send_state_sync__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C7858();
s32 TObjPlayer__sub_801C785C(void *);
s32 TObjPlayer__sub_801C7874();
s32 try_change_action__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C7A6C(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801C7A6C(s32 arg0, s16 arg1) {
  unsigned int new_var2;
  unsigned int new_var;
  {
    switch (arg1)
    {
      case 7:
        try_change_action__10TObjPlayerFPv((void *) arg0);
        return;
      new_var2 = (new_var = arg0);
      case 2:
        TObjPlayer__sub_801C7874();
        return;
      case 3:
        TObjPlayer__sub_801C785C((void *) new_var2);
 do { } while (0 != 0);
        return;
      case 8:
        TObjPlayer__sub_801C7858();
        return;
      case 5:
        send_state_sync__10TObjPlayerFPv((void *) arg0);
        return;
      case 0:
        start_action_18__10TObjPlayerFPv((void *) arg0);
        return;
      case 1:
        TObjPlayer__sub_801C75A4();
        return;
      case 6:
        update_state_group__10TObjPlayerFPv((void *) arg0);
        break;
    }
  }
}

}
