#include "types.h"

extern "C" {
s32 update_state_machine__15TObjEnemyCustomFPv(void *);
s32 init__15TObjEneMe1GiGueFPv(void *);
s32 TObjEneMe1GiGue__sub_802CB378(void *);
s32 TObjEneMe1GiGue__sub_802CB9E4(void *);
s32 TObjEneMe1GiGue__sub_802CBA98(void *);
s32 TObjEneMe1GiGue__sub_802CBCC0(void *);
s32 action__15TObjEneMe1GiGueFPv(void *);
s32 TObjEneMe1GiGue__sub_802CC45C(void *);
s32 TObjEneMe1GiGue__sub_802CC614(void *);
s32 TObjEneMe1GiGue__sub_802CC900(void *);
s32 TObjEneMe1GiGue__sub_802CCBAC(void *);
s32 TObjEneMe1GiGue__sub_802CCF2C(void *);
s32 TObjEneMe1GiGue__sub_802CDAE8();
void TObjEneMe1GiGue__sub_802CD2EC(u8 *arg0);
}

extern "C" {

void TObjEneMe1GiGue__sub_802CD054(void);

void TObjEneMe1GiGue__sub_802CD054(void) {  }
void TObjEneMe1GiGue__sub_802CD2EC(u8 *arg0) {
  s16 temp_r0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        TObjEneMe1GiGue__sub_802CCF2C((void *) arg0);
        return;
      case 1:
        TObjEneMe1GiGue__sub_802CCBAC((void *) arg0);
        return;
      case 2:
        TObjEneMe1GiGue__sub_802CDAE8();
        return;
      case 3:
        update_state_machine__15TObjEnemyCustomFPv((void *) arg0);
        return;
      case 4:
        TObjEneMe1GiGue__sub_802CBA98((void *) arg0);
        return;
      case 5:
        TObjEneMe1GiGue__sub_802CB9E4(arg0);
        return;
      case 9:
        TObjEneMe1GiGue__sub_802CC614((void *) arg0);
        return;
      case 10:
        TObjEneMe1GiGue__sub_802CC900((void *) arg0);
        return;
      case 11:
        TObjEneMe1GiGue__sub_802CC45C((void *) arg0);
        return;
      case 12:
        action__15TObjEneMe1GiGueFPv((void *) arg0);
        return;
      case 13:
        TObjEneMe1GiGue__sub_802CBCC0((void *) arg0);
        return;
      case 7:
        init__15TObjEneMe1GiGueFPv((void *) arg0);
        return;
      case 14:
        TObjEneMe1GiGue__sub_802CB378((void *) arg0);
        break;
    }
  }
}

}
