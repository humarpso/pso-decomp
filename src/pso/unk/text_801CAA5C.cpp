#include "types.h"
extern "C" {
s32 exit_death_state__10TObjPlayerFPv(void *);
s32 update_death_pose__10TObjPlayerFPv(void *);
s32 enter_death_state__10TObjPlayerFPv(void *);
s32 prepare_death__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CA8F0(void *);
s32 request_revival_if_not_dead__10TObjPlayerFPv(void *);
s32 check_reopen_return_city_window__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CAA58();
void run_death_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
}

extern "C" {

void run_death_state_phase__10TObjPlayerFis(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        TObjPlayer__sub_801CAA58();
        return;
      case 2:
        check_reopen_return_city_window__10TObjPlayerFPv((void *) arg0);
        return;
      case 3:
        request_revival_if_not_dead__10TObjPlayerFPv((void *) arg0);
        return;
      case 8:
        TObjPlayer__sub_801CA8F0((void *) arg0);
        return;
      case 5:
        prepare_death__10TObjPlayerFPv((void *) arg0);
        return;
      case 0:
        enter_death_state__10TObjPlayerFPv((void *) arg0);
        return;
      case 1:
        update_death_pose__10TObjPlayerFPv((void *) arg0);
        return;
      case 6:
        exit_death_state__10TObjPlayerFPv((void *) arg0);
        break;
    }
  }
}

}
