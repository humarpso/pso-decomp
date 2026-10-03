#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 obj_testFlags30(void *, s32);
s32 can_guard__10TObjPlayerFPv(u8 *arg0);
s32 TObjPlayer__sub_801CB5FC();
s32 apply_velocity_if_ready__10TObjPlayerFi(void *);
s32 start_action_c__10TObjPlayerFPv(void *);
s32 send_6x50_switch_interaction__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CB7A4();
s32 update_if_flag_set__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CB7D4();
s32 TObjPlayer__sub_801CB7D8(void *);
void TObjPlayer__sub_801CB7F8(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801CB7F8(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        TObjPlayer__sub_801CB7D8((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_801CB7D4();
        return;
      case 3:
        update_if_flag_set__10TObjPlayerFPv((void *) arg0);
        return;
      case 8:
        TObjPlayer__sub_801CB7A4();
        return;
      case 5:
        send_6x50_switch_interaction__10TObjPlayerFPv((void *) arg0);
        return;
      case 0:
        start_action_c__10TObjPlayerFPv((void *) arg0);
        return;
      case 1:
        apply_velocity_if_ready__10TObjPlayerFi((void *) arg0);
        return;
      case 6:
        TObjPlayer__sub_801CB5FC();
        break;
    }
  }
}

s32 can_guard__10TObjPlayerFPv(u8 *arg0) {
    if ((obj_testFlags30(arg0, 0x100) != 0) && (obj_testFlags30(arg0, 0x04000000) == 0)) {
        return 1;
    }
    return 0;
}

}
