#include "types.h"

struct Pkt_801C8CCC { u16 hdr; u16 id; s32 c; f32 x1, y1, z1; f32 x2, y2, z2; };

struct Pkt_801C8BE8 { u16 hdr; s16 id; s32 c; f32 x1, y1, z1; };

typedef struct Msg_801C8B5C {
    u8 pad0[2];
    u16 slot;
    s32 c;
    u8 vec[12];
} Msg_801C8B5C;

typedef struct Player_801C8B5C {
    u8 pad0[0x60];
    s32 ang;
} Player_801C8B5C;

extern "C" {
s32 start_action_21__10TObjPlayerFPv(void *);
s32 init_flags_vec4__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C8D88(void *);
s32 TObjPlayer__sub_801C90F8();
s32 check_state_dead__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C9128();
s32 TObjPlayer__sub_801C912C();
void TObjPlayer__sub_801C8C50(s32 arg0, s16 arg1);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState2_324();
u8 *get_player_by_client_id(s32);
void swap_and_send__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801D1658(void *);
void TObjPlayer__sub_801C8CCC(u16 id, void *pos, s32 c);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState2_324();
s16 obj_getField1c(void *);
void init_position_packet__10TObjPlayerFPv(void *);
void update_and_send2__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C8BE8(u8 *arg0);
void calc_attach_pos__10TObjPlayerFPv(void *);
void TBoss4DarkFalz__sub_8004C220(void *, void *);
u8 *get_player_by_client_id(s32);
void run_action_state_phase__10TObjPlayerFisi(void *, s32, s32);
void swap_endian_words__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801D1514(void *, void *);
void init_position_packet__10TObjPlayerFPv(void *);
s32 validate_6x56_set_player_position_and_angle(void *);
void handle_6x56_set_player_position_and_angle(void *arg0);
}

extern "C" {

void handle_6x56_set_player_position_and_angle(void *arg0) {
    Msg_801C8B5C m;
    Player_801C8B5C *p;
    init_position_packet__10TObjPlayerFPv(&m);
    TObjPlayer__sub_801D1514(&m, arg0);
    swap_endian_words__10TObjPlayerFPv(&m);
    if (validate_6x56_set_player_position_and_angle(&m) != 0) {
        p = ((Player_801C8B5C *)get_player_by_client_id((s32)(m.slot)));
        if (p != NULL) {
            p->ang = m.c;
            TBoss4DarkFalz__sub_8004C220(p, m.vec);
            calc_attach_pos__10TObjPlayerFPv(p);
            run_action_state_phase__10TObjPlayerFisi(p, 0x15, 0);
        }
    }
}

void TObjPlayer__sub_801C8BE8(u8 *arg0) {
    struct Pkt_801C8BE8 pkt;
    if (arg0 == NULL || obj_isState2_324() == 0) {
        init_position_packet__10TObjPlayerFPv(&pkt);
        pkt.id = obj_getField1c(arg0);
        pkt.c = *(s32 *)(arg0 + 0x60);
        VecCopy__FP3VecPC3Vec(&pkt.x1, arg0 + 0x38);
        update_and_send2__10TObjPlayerFPv(&pkt);
    }
}

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
        TObjPlayer__sub_801C8BE8((u8 *)((void *) arg0));
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
    p = get_player_by_client_id(id);
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
