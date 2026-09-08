#include "types.h"
extern "C" {
s32 start_action_21__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C8BE8(void *);
s32 init_flags_vec4__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C8D88(void *);
s32 TObjPlayer__sub_801C90F8();
s32 check_state_dead__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C9128();
s32 TObjPlayer__sub_801C912C();
void TObjPlayer__sub_801C8C50(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801C8C50(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        TObjPlayer__sub_801C912C();
        return;
      case 2:
        TObjPlayer__sub_801C9128();
        return;
      case 3:
        check_state_dead__10TObjPlayerFPv((void *) arg0);
        return;
      case 8:
        TObjPlayer__sub_801C90F8();
        return;
      case 5:
        TObjPlayer__sub_801C8BE8((void *) arg0);
        return;
      case 0:
        start_action_21__10TObjPlayerFPv((void *) arg0);
        return;
      case 1:
        TObjPlayer__sub_801C8D88((void *) arg0);
        return;
      case 6:
        init_flags_vec4__10TObjPlayerFPv((void *) arg0);
        break;
    }
  }
}

}
