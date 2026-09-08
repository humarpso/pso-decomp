#include "types.h"
extern "C" {
s32 reset_linked_obj__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CD9F0(void *);
s32 TObjPlayer__sub_801CDA10(void *);
s32 TObjPlayer__sub_801CDBA0(void *);
s32 TObjPlayer__sub_801CDC68();
s32 TObjPlayer__sub_801CDC6C(void *);
s32 TObjPlayer__sub_801CDD00();
s32 try_apply_status_action_1__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801CDD24(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801CDD24(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        try_apply_status_action_1__10TObjPlayerFPv((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_801CDD00();
        return;
      case 3:
        TObjPlayer__sub_801CDC6C((void *) arg0);
        return;
      case 8:
        TObjPlayer__sub_801CDC68();
        return;
      case 5:
        TObjPlayer__sub_801CDBA0((void *) arg0);
        return;
      case 0:
        TObjPlayer__sub_801CDA10((void *) arg0);
        return;
      case 1:
        TObjPlayer__sub_801CD9F0((void *) arg0);
        return;
      case 6:
        reset_linked_obj__10TObjPlayerFPv((void *) arg0);
        break;
    }
  }
}

}
