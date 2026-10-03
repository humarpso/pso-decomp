#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
s32 obj_testFlags30(void *, s32);
void clear_flags__11TAdRicoRingFPvUi(void *, s32);
s32 is_active__8TItemMagFPv(void *);
s32 check_flag30_bit20__10TObjPlayerFi(s32);
void update_position_from_target__10TObjPlayerFPv(void *);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(void *, int, int);
void TObjPlayer__sub_801C95A0(u8 *arg0);
}

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
s32 TObjPlayer__sub_801B1E54(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 is_status_flag_200__10TObjPlayerFPv(void);
void TObjPlayer__sub_801C959C(void);
s32 can_guard__10TObjPlayerFPv(void * a0 = 0);
s32 obj_clearFlags30(void * a0 = 0, s32 a1 = 0);
s32 obj_getField1c(void * a0 = 0);
s32 obj_getS16_32C(void * a0 = 0);
s32 use_current_item__10TObjPlayerFPv(void * a0 = 0);

void TObjPlayer__sub_801C95A0(u8 *arg0) {
  s16 temp_r0;
  if (obj_testFlags30(arg0, 0x800) != 0)
  {
    clear_flags__11TAdRicoRingFPvUi(arg0 + 0x858, 1);
    run_action_state_phase__10TObjPlayerFisi((void *) arg0, (int) 0xF, (int) 5);
    return;
  }
  ;
  switch (*((s16 *) (((s8 *) arg0) + 0x328)))
  {
    return;
    case 0:
      if (check_flag30_bit20__10TObjPlayerFi((s32) arg0) == 0)
    {
      update_position_from_target__10TObjPlayerFPv(arg0);
    }
      return;
    case 1:
      if (is_active__8TItemMagFPv(arg0) == 0)
    {
      update_position_from_target__10TObjPlayerFPv(arg0);
    }
      break;
  }
}

}
