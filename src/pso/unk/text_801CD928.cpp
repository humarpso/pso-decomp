#include "types.h"
extern "C" {
s32 TObjPlayer__sub_801CD188(void *);
s32 update_technique_cast__10TObjPlayerFPv(void *);
s32 enter_technique_cast__10TObjPlayerFPv(void *);
s32 request_technique_cast__10TObjPlayerFPv(void *);
s32 check_anim_done__10TObjPlayerFPv(void *);
s32 update_state5_action__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CD904();
s32 apply_status_action_a__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801CD928(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801CD928(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        apply_status_action_a__10TObjPlayerFPv((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_801CD904();
        return;
      case 3:
        update_state5_action__10TObjPlayerFPv((void *) arg0);
        return;
      case 8:
        check_anim_done__10TObjPlayerFPv((void *) arg0);
        return;
      case 5:
        request_technique_cast__10TObjPlayerFPv((void *) arg0);
        return;
      case 0:
        enter_technique_cast__10TObjPlayerFPv((void *) arg0);
        return;
      case 1:
        update_technique_cast__10TObjPlayerFPv((void *) arg0);
        return;
      case 6:
        TObjPlayer__sub_801CD188((void *) arg0);
        break;
    }
  }
}

}
