#include "types.h"
extern "C" {
s32 TObjPlayer__sub_801CB424();
s32 TObjPlayer__sub_801CB428(void *);
s32 begin_action_0xB__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CB4D0(void *);
s32 TObjPlayer__sub_801CB52C();
s32 run_if_flag_10__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CB55C();
s32 try_apply_status_action__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801CB580(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801CB580(s32 arg0, s16 arg1) {
  void *new_var;
  {
    switch (arg1)
    {
      case 7:
        try_apply_status_action__10TObjPlayerFPv((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_801CB55C();
        return;
      case 3:
        run_if_flag_10__10TObjPlayerFPv((void *) arg0);
        return;
      case 8:
        TObjPlayer__sub_801CB52C();
        return;
      case 5:
        new_var = (void *) arg0;
        TObjPlayer__sub_801CB4D0(new_var);
        return;
      case 0:
        begin_action_0xB__10TObjPlayerFPv((void *) arg0);
        return;
      case 1:
        arg0 = arg0;
        TObjPlayer__sub_801CB428((void *) arg0);
        return;
      case 6:
        TObjPlayer__sub_801CB424();
        break;
    }
  }
}

}
