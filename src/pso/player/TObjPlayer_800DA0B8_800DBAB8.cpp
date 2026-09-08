#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
void update_state_machine__15TObjEnemyCustomFPv(void *);
void update_death_state__10TObjPlayerFPv(void *);
void TObjPlayer__sub_800DC444(void);
M2C_UNK TObjPlayer__sub_800DA5FC();
M2C_UNK TObjPlayer__sub_800DA7E4();
M2C_UNK TObjPlayer__sub_800DAA24();
M2C_UNK TObjPlayer__sub_800DAB98();
M2C_UNK TObjPlayer__sub_800DB0F8();
M2C_UNK TObjPlayer__sub_800DB390();
M2C_UNK TObjPlayer__sub_800DB5A8();
M2C_UNK TObjPlayer__sub_800DB970();
void TObjPlayer__sub_800DBD38(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_800DBAB8(void);

void TObjPlayer__sub_800DBAB8(void) {  }
void TObjPlayer__sub_800DBD38(u8 *arg0) {
  s16 temp_r0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        TObjPlayer__sub_800DB970();
        return;
      case 1:
        TObjPlayer__sub_800DB5A8();
        return;
      case 2:
        TObjPlayer__sub_800DC444();
        return;
      case 3:
        update_state_machine__15TObjEnemyCustomFPv(arg0);
        return;
      case 4:
        TObjPlayer__sub_800DA7E4();
        return;
      case 5:
        TObjPlayer__sub_800DA5FC();
        return;
      case 9:
        TObjPlayer__sub_800DB0F8();
        return;
      case 10:
        TObjPlayer__sub_800DB390();
        return;
      case 11:
        TObjPlayer__sub_800DAB98();
        return;
      case 12:
        TObjPlayer__sub_800DAA24();
        return;
      case 7:
        update_death_state__10TObjPlayerFPv(arg0);
        break;
    }
  }
}

}
