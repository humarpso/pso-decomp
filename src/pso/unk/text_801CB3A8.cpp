#include "types.h"
extern "C" {
s32 set_flag_100000__10TObjPlayerFPv(void *);
s32 update_move_state__10TObjPlayerFi(void *);
s32 end_freeze_action__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CB27C(void *);
s32 TObjPlayer__sub_801CB2F0();
s32 TObjPlayer__sub_801CB2F4(void *);
s32 TObjPlayer__sub_801CB360();
s32 do_action_19_5_if_flag30__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801CB3A8(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801CB3A8(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        do_action_19_5_if_flag30__10TObjPlayerFPv((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_801CB360();
        return;
      case 3:
        TObjPlayer__sub_801CB2F4((void *) arg0);
        return;
      case 8:
        TObjPlayer__sub_801CB2F0();
        return;
      case 5:
        TObjPlayer__sub_801CB27C((void *) arg0);
        return;
      case 0:
        end_freeze_action__10TObjPlayerFPv((void *) arg0);
        return;
      case 1:
        update_move_state__10TObjPlayerFi((void *) arg0);
        return;
      case 6:
        set_flag_100000__10TObjPlayerFPv((void *) arg0);
        break;
    }
  }
}

}
