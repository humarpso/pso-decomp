#include "types.h"
extern "C" {
s32 clear_flag__10TObjPlayerFPv(void *);
s32 apply_velocity_if_free__10TObjPlayerFPv();
s32 TObjPlayer__sub_801C97D0(void *);
s32 TObjPlayer__sub_801C9924(void *);
s32 TObjPlayer__sub_801C999C();
s32 TObjPlayer__sub_801C99A0(void *);
s32 TObjPlayer__sub_801C9A14();
s32 set_motion__10TObjPlayerFi(void *);
void TObjPlayer__sub_801C9ACC(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801C9ACC(s32 arg0, s16 arg1) {
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
        TObjPlayer__sub_801C9A14();
        return;
      case 3:
        TObjPlayer__sub_801C99A0((void *) new_var2);
 do { } while (0 != 0);
        return;
      case 8:
        TObjPlayer__sub_801C999C();
        return;
      case 5:
        TObjPlayer__sub_801C9924((void *) arg0);
        return;
      case 0:
        TObjPlayer__sub_801C97D0((void *) arg0);
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
