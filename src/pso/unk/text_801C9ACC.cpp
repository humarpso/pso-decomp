#include "types.h"
extern "C" {
s32 clear_flag__10TObjPlayerFPv(void *);
s32 apply_velocity_if_free__10TObjPlayerFPv();
s32 enter_service_hold_action__10TObjPlayerFPv(void *);
s32 send_6x52_animation_state__10TObjPlayerFPv(void *);
s32 service_hold_phase8_nop__10TObjPlayerFv();
s32 update_service_hold__10TObjPlayerFPv(void *);
s32 service_hold_phase2_nop__10TObjPlayerFv();
s32 set_motion__10TObjPlayerFi(void *);
void run_service_hold_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
}

extern "C" {

void run_service_hold_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1) {
  unsigned int new_var2;
  unsigned int new_var;
  {
    switch (arg1)
    {
      case 7:
        set_motion__10TObjPlayerFi((void *) arg0);
        return;
      new_var2 = (new_var = arg0);
      case 2:
        service_hold_phase2_nop__10TObjPlayerFv();
        return;
      case 3:
        update_service_hold__10TObjPlayerFPv((void *) new_var2);
 do { } while (0 != 0);
        return;
      case 8:
        service_hold_phase8_nop__10TObjPlayerFv();
        return;
      case 5:
        send_6x52_animation_state__10TObjPlayerFPv((void *) arg0);
        return;
      case 0:
        enter_service_hold_action__10TObjPlayerFPv((void *) arg0);
        return;
      case 1:
        apply_velocity_if_free__10TObjPlayerFPv();
        return;
      case 6:
        clear_flag__10TObjPlayerFPv((void *) arg0);
        break;
    }
  }
}

}
