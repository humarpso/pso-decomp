#include "types.h"
extern "C" {
s32 reset_lobby_state__10TObjPlayerFPv(void *);
s32 try_use_mag__10TObjPlayerFPv(void *);
s32 enter_freeze_action__10TObjPlayerFv(void *);
s32 TObjPlayer__sub_801C9400(void *);
s32 TObjPlayer__sub_801C94B8(void *);
s32 update_gated_action__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C959C();
s32 update_frozen_release__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C9648(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801C9648(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        update_frozen_release__10TObjPlayerFPv((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_801C959C();
        return;
      case 3:
        update_gated_action__10TObjPlayerFPv((void *) arg0);
        return;
      case 8:
        TObjPlayer__sub_801C94B8((void *) arg0);
        return;
      case 5:
        TObjPlayer__sub_801C9400((void *) arg0);
        return;
      case 0:
        enter_freeze_action__10TObjPlayerFv((void *) arg0);
        return;
      case 1:
        try_use_mag__10TObjPlayerFPv((void *) arg0);
        return;
      case 6:
        reset_lobby_state__10TObjPlayerFPv((void *) arg0);
        break;
    }
  }
}

}
