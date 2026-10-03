#include "types.h"

struct Pkt_801CCB58 { u16 hdr; u16 id; s16 c; };

typedef struct Msg_801CCA84 {
    u8 pad0[2];
    u16 id;
    u16 target;
    u8 pad6[2];
} Msg_801CCA84;

typedef struct Tech_801CCA84 {
    s32 kind;
    u16 target;
    s16 f6;
    f32 f8;
    u8 padc[0x60 - 0xC];
} Tech_801CCA84;

typedef struct Player_801CCA84 {
    u8 pad0[0x10];
    u32 list;
} Player_801CCA84;

extern "C" {
s32 exit_photon_blast_action__10TObjPlayerFPv(void *);
s32 update_photon_blast_action__10TObjPlayerFPv(void *);
s32 enter_photon_blast_action__10TObjPlayerFPv(void *);
s32 prepare_photon_blast_action__10TObjPlayerFPv(void *);
s32 update_band_state__10TObjPlayerFPv(void *);
s32 update_target_approach__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CC9E4();
s32 try_apply_status_action_default__10TObjPlayerFPv(void *);
void dispatch_photon_blast_action__10TObjPlayerFis(s32 arg0, s16 arg1);
s32 obj_isState2_324();
u8 *get_player_by_client_id(u16);
void TObjPlayer__sub_801D209C(void *);
void send_coords__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801CCB58(s32 arg0, s16 arg1);
void TObjPlayer__sub_8004433C(void *);
void *get_position_ptr__10TObjPlayerFPv(void *);
u8 *get_player_by_client_id(u16);
s32 check_flag_4__10TObjPlayerFPv(void *);
void bswap_coords__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801D2058(void *, void *);
void TObjPlayer__sub_801D209C(void *);
void create__12TTecReverserFPvPvPvPv(void *, void *, void *, s32);
s32 validate_6x33_revive_player(void *);
extern u32 tl_03;
extern const f32 lbl_805DC370;
void handle_6x33_revive_player(void *arg0);
}

extern "C" {

void dispatch_photon_blast_action__10TObjPlayerFis(s32 arg0, s16 arg1) {
  s32 *new_var;
  {
    switch (arg1)
    {
      case 7:
        try_apply_status_action_default__10TObjPlayerFPv((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_801CC9E4();
        return;
      case 3:
        update_target_approach__10TObjPlayerFPv((void *) arg0);
        arg0 = arg0;
        if (1)
      {
      }
        return;
      case 8:
        update_band_state__10TObjPlayerFPv((void *) arg0);
        return;
      case 5:
        prepare_photon_blast_action__10TObjPlayerFPv((void *) (*(new_var = &arg0)));
        return;
      case 0:
        enter_photon_blast_action__10TObjPlayerFPv((void *) arg0);
        return;
      case 1:
        update_photon_blast_action__10TObjPlayerFPv((void *) arg0);
        return;
      case 6:
        exit_photon_blast_action__10TObjPlayerFPv((void *) arg0);
        break;
    }
  }
}

void handle_6x33_revive_player(void *arg0) {
    Msg_801CCA84 m;
    Tech_801CCA84 t;
    Player_801CCA84 *p;
    Player_801CCA84 *q;
    TObjPlayer__sub_801D209C(&m);
    TObjPlayer__sub_801D2058(&m, arg0);
    bswap_coords__10TObjPlayerFPv(&m);
    if (validate_6x33_revive_player(&m) != 0) {
        p = (Player_801CCA84 *)get_player_by_client_id(m.id);
        if (p != NULL) {
            q = (Player_801CCA84 *)get_player_by_client_id(m.target);
            if (q != NULL && check_flag_4__10TObjPlayerFPv(q) == 0 && q->list == tl_03) {
                TObjPlayer__sub_8004433C(&t);
                t.kind = 1;
                t.target = m.target;
                t.f6 = 0;
                t.f8 = lbl_805DC370;
                create__12TTecReverserFPvPvPvPv(p, get_position_ptr__10TObjPlayerFPv(p), &t, 0x1D);
            }
        }
    }
}

void TObjPlayer__sub_801CCB58(s32 arg0, s16 arg1) {
    struct Pkt_801CCB58 pkt;
    if (get_player_by_client_id(arg0) == NULL || obj_isState2_324() == 0) {
        TObjPlayer__sub_801D209C(&pkt);
        pkt.id = arg0;
        pkt.c = arg1;
        send_coords__10TObjPlayerFPv(&pkt);
    }
}

}
