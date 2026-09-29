#include "types.h"

struct Pkt_801C8CCC { u16 hdr; u16 id; s32 c; f32 x1, y1, z1; f32 x2, y2, z2; };

extern "C" {
s32 start_action_21__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C8BE8(void *);
s32 init_flags_vec4__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C8D88(void *);
s32 TObjPlayer__sub_801C90F8();
s32 check_state_dead__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C9128();
s32 TObjPlayer__sub_801C912C();
void TObjPlayer__sub_801C8C50(s32 arg0, s16 arg1);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState2_324();
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
void swap_and_send__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801D1658(void *);
void TObjPlayer__sub_801C8CCC(u16 id, void *pos, s32 c);
}

extern "C" {

void TObjPlayer__sub_801C8C50(s32 arg0, s16 arg1) {
  {
    switch (arg1)
    {
      case 7:
        TObjPlayer__sub_801C912C();
        return;
      case 2:
        TObjPlayer__sub_801C9128();
        return;
      case 3:
        check_state_dead__10TObjPlayerFPv((void *) arg0);
        return;
      case 8:
        TObjPlayer__sub_801C90F8();
        return;
      case 5:
        TObjPlayer__sub_801C8BE8((void *) arg0);
        return;
      case 0:
        start_action_21__10TObjPlayerFPv((void *) arg0);
        return;
      case 1:
        TObjPlayer__sub_801C8D88((void *) arg0);
        return;
      case 6:
        init_flags_vec4__10TObjPlayerFPv((void *) arg0);
        break;
    }
  }
}
void TObjPlayer__sub_801C8CCC(u16 id, void *pos, s32 c) {
    struct Pkt_801C8CCC pkt;
    u8 *p;
    p = TPlayerBattleCtrl4P__sub_801BA74C(id);
    if (p != NULL && (p == NULL || obj_isState2_324() == 0)) {
        TObjPlayer__sub_801D1658(&pkt);
        pkt.id = id;
        pkt.c = c;
        VecCopy__FP3VecPC3Vec(&pkt.x1, p + 0x38);
        VecCopy__FP3VecPC3Vec(&pkt.x2, pos);
        swap_and_send__10TObjPlayerFPv(&pkt);
    }
}

}
