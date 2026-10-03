#include "types.h"
extern "C" {
s32 apply_damage_and_reset__10TObjPlayerFPv(void *);
s32 update_run_movement__10TObjPlayerFPv(void *);
s32 start_action__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CF824(void *);
s32 handle_ring_release__10TObjPlayerFi(void *);
s32 try_trigger_effect__10TObjPlayerFi(void *);
s32 select_run_request__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CFAA4(void *);
void TObjPlayer__sub_801CFAC4(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801CFAC4(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        TObjPlayer__sub_801CFAA4((void *) arg0);
        return;
      case 2:
        select_run_request__10TObjPlayerFPv((void *) arg0);
        return;
      case 3:
        try_trigger_effect__10TObjPlayerFi((void *) arg0);
        return;
      case 8:
        handle_ring_release__10TObjPlayerFi((void *) arg0);
        return;
      case 5:
        TObjPlayer__sub_801CF824((void *) arg0);
        return;
      case 0:
        start_action__10TObjPlayerFPv((void *) arg0);
        return;
      case 1:
        update_run_movement__10TObjPlayerFPv((void *) arg0);
        return;
      case 6:
        apply_damage_and_reset__10TObjPlayerFPv((void *) arg0);
        break;
    }
  }
}

}
