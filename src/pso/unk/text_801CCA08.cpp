#include "types.h"
extern "C" {
s32 TObjPlayer__sub_801CC2B0(void *);
s32 TObjPlayer__sub_801CC34C(void *);
s32 TObjPlayer__sub_801CC558(void *);
s32 TObjPlayer__sub_801CC7F8(void *);
s32 update_band_state__10TObjPlayerFPv(void *);
s32 update_target_approach__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CC9E4();
s32 try_apply_status_action_default__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801CCA08(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801CCA08(s32 arg0, s16 arg1) {
  s32 *new_var;
  {
    switch (arg1)
    {
      case 7:
        try_apply_status_action_default__10TObjPlayerFPv((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_801CC9E4();
        return;
      case 3:
        update_target_approach__10TObjPlayerFPv((void *) arg0);
        arg0 = arg0;
        if (1)
      {
      }
        return;
      case 8:
        update_band_state__10TObjPlayerFPv((void *) arg0);
        return;
      case 5:
        TObjPlayer__sub_801CC7F8((void *) (*(new_var = &arg0)));
        return;
      case 0:
        TObjPlayer__sub_801CC558((void *) arg0);
        return;
      case 1:
        TObjPlayer__sub_801CC34C((void *) arg0);
        return;
      case 6:
        TObjPlayer__sub_801CC2B0((void *) arg0);
        break;
    }
  }
}

}
