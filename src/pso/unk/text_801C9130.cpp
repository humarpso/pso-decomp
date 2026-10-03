#include "types.h"
extern "C" {
s32 init_flags_vec4__10TObjPlayerFPv(void *);
s32 update_warp_relocation__10TObjPlayerFv(void *);
s32 set_dead_state__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C9084(void *);
s32 TObjPlayer__sub_801C90F8();
s32 check_state_dead__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C9128();
s32 TObjPlayer__sub_801C912C();
void run_warp_action_phase__10TObjPlayerFis(s32 arg0, s16 arg1);
}

extern "C" {

void run_warp_action_phase__10TObjPlayerFis(s32 arg0, s16 arg1) {
  s32 new_var;
  {
    new_var = arg0;
    switch (arg1)
    {
      case 7:
        TObjPlayer__sub_801C912C();
        return;
      case 2:
        TObjPlayer__sub_801C9128();
        return;
      case 3:
        check_state_dead__10TObjPlayerFPv((void *) new_var);
        return;
      case 8:
        TObjPlayer__sub_801C90F8();
        return;
      case 5:
        TObjPlayer__sub_801C9084((void *) new_var);
        return;
      case 0:
        set_dead_state__10TObjPlayerFPv((void *) arg0);
        return;
      case 1:
        update_warp_relocation__10TObjPlayerFv((void *) new_var);
        return;
      case 6:
        init_flags_vec4__10TObjPlayerFPv((void *) arg0);
        break;
    }
  }
}

}
