#include "types.h"
extern "C" {
s32 reset_lockon__10TObjPlayerFPv(void *);
s32 update_action_state__10TObjPlayerFv(void *);
s32 TObjPlayer__sub_801CF080(void *);
s32 request_normal_attack_stage1__10TObjPlayerFv(void *);
s32 TObjPlayer__sub_801CF2AC();
s32 TObjPlayer__sub_801CF2B0(void *);
s32 update_active_item__10TObjPlayerFi(void *);
s32 TObjPlayer__sub_801CF3C0(void *);
void TObjPlayer__sub_801CF3E0(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801CF3E0(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        TObjPlayer__sub_801CF3C0((void *) arg0);
        return;
      case 2:
        update_active_item__10TObjPlayerFi((void *) arg0);
        return;
      case 3:
        TObjPlayer__sub_801CF2B0((void *) arg0);
        return;
      case 8:
        TObjPlayer__sub_801CF2AC();
        return;
      case 5:
        request_normal_attack_stage1__10TObjPlayerFv((void *) arg0);
        return;
      case 0:
        TObjPlayer__sub_801CF080((void *) arg0);
        return;
      case 1:
        update_action_state__10TObjPlayerFv((void *) arg0);
        return;
      case 6:
        reset_lockon__10TObjPlayerFPv((void *) arg0);
        break;
    }
  }
}

}
