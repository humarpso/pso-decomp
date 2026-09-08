#include "types.h"
extern "C" {
s32 init_effects__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C8770(void *);
s32 TObjPlayer__sub_801C8790(void *);
s32 draw_and_send_field1c__10TObjPlayerFi(void *);
s32 TObjPlayer__sub_801C88CC(void *);
s32 TObjPlayer__sub_801C8998(void *);
s32 TObjPlayer__sub_801C8A20();
s32 TObjPlayer__sub_801C8A24();
void TObjPlayer__sub_801C8A28(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801C8A28(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        TObjPlayer__sub_801C8A24();
        return;
      case 2:
        TObjPlayer__sub_801C8A20();
        return;
      case 3:
        TObjPlayer__sub_801C8998((void *) arg0);
        return;
      case 8:
        TObjPlayer__sub_801C88CC((void *) arg0);
        return;
      case 5:
        draw_and_send_field1c__10TObjPlayerFi((void *) arg0);
        return;
      case 0:
        TObjPlayer__sub_801C8790((void *) arg0);
        return;
      case 1:
        TObjPlayer__sub_801C8770((void *) arg0);
        return;
      case 6:
        init_effects__10TObjPlayerFPv((void *) arg0);
        break;
    }
  }
}

}
