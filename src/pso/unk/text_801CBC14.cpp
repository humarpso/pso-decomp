#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TObjPlayer__sub_80312D4C(void *, s32);
extern u8 *lbl_805D5D68;
void TObjPlayer__sub_801CBC90(s32 arg0);
u8 * TObjPlayer__sub_80312CCC(void *, int);
extern u8 *lbl_805D5D68;
u8 *TObjPlayer__sub_801CBCC4(s32 arg0);
s32 set_flag_0x100000__10TObjPlayerFPv(void *);
s32 apply_velocity_if_free__10TObjPlayerFi(void *);
s32 start_use_item_action__10TObjPlayerFPv(void *);
s32 send_object_id_packet__10TObjPlayerFi(void *);
s32 TObjPlayer__sub_801CBB10();
s32 complete_guard_reaction__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CBB80();
s32 select_hit_action__10TObjPlayerFi(void *);
void TObjPlayer__sub_801CBC14(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801CBC14(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        select_hit_action__10TObjPlayerFi((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_801CBB80();
        return;
      case 3:
        complete_guard_reaction__10TObjPlayerFPv((void *) arg0);
        return;
      case 8:
        TObjPlayer__sub_801CBB10();
        return;
      case 5:
        send_object_id_packet__10TObjPlayerFi((void *) arg0);
        return;
      case 0:
        start_use_item_action__10TObjPlayerFPv((void *) arg0);
        if (arg0 && arg0)
      {
      }
        return;
      case 1:
        apply_velocity_if_free__10TObjPlayerFi((void *) arg0);
        return;
      case 6:
        set_flag_0x100000__10TObjPlayerFPv((void *) arg0);
        break;
    }
  }
}

void TObjPlayer__sub_801CBC90(s32 arg0) {
    if ((void *) lbl_805D5D68 != NULL) {
        TObjPlayer__sub_80312D4C(lbl_805D5D68, arg0);
    }
}
u8 *TObjPlayer__sub_801CBCC4(s32 arg0) {
    if ((void *) lbl_805D5D68 != NULL) {
        return TObjPlayer__sub_80312CCC(lbl_805D5D68, arg0);
    }
    return NULL;
}

}
