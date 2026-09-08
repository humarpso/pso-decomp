#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
void update_dragon_boss_state__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8008DD14();
M2C_UNK TObjPlayer__sub_8008DE9C();
M2C_UNK TObjPlayer__sub_8008E254();
M2C_UNK TObjPlayer__sub_8008E310();
M2C_UNK TObjPlayer__sub_8008EC3C();
M2C_UNK TObjPlayer__sub_8008EDE8();
M2C_UNK TObjPlayer__sub_8008F1DC();
M2C_UNK TObjPlayer__sub_8008F730();
M2C_UNK TObjPlayer__sub_8008F910();
M2C_UNK TObjPlayer__sub_8008FAD0();
void TObjPlayer__sub_8008FF50(u8 *arg0);
}

extern "C" {

void TObjEneMe1GiGue__sub_8008FC0C(void);

void TObjEneMe1GiGue__sub_8008FC0C(void) {  }
void TObjPlayer__sub_8008FF50(u8 *arg0) {
  s16 temp_r0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        update_dragon_boss_state__10TObjPlayerFPv(arg0);
        return;
      case 1:
        TObjPlayer__sub_8008FAD0();
        return;
      case 2:
        TObjPlayer__sub_8008F1DC();
        return;
      case 9:
        TObjPlayer__sub_8008EDE8();
        return;
      case 4:
        TObjPlayer__sub_8008F910();
        return;
      case 5:
        TObjPlayer__sub_8008F730();
        return;
      case 7:
        TObjPlayer__sub_8008EC3C();
        return;
      case 10:
        TObjPlayer__sub_8008E310();
        return;
      case 11:
        TObjPlayer__sub_8008E254();
        return;
      case 12:
        TObjPlayer__sub_8008DE9C();
        return;
      case 8:
        TObjPlayer__sub_8008DD14();
        break;
    }
  }
}

}
