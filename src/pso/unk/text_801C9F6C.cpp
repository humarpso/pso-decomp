#include "types.h"

struct Pkt_801C9FE8 { u16 hdr; u16 id; u16 c; };

extern "C" {
s32 notify_lobby__10TObjPlayerFi(void *);
s32 ensure_default__10TObjPlayerFPv();
s32 init_action__10TObjPlayerFPv(void *);
s32 update_lobby_display__10TObjPlayerFUi(void *);
s32 update_timer_state__10TObjPlayerFPv();
s32 update_timer_action__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C9F64();
s32 TObjPlayer__sub_801C9F68(void *);
void TObjPlayer__sub_801C9F6C(s32 arg0, s16 arg1);
u8 *get_player_by_client_id(u16);
void bswap_fields__10TObjPlayerFPv(void *);
void copy_head_fields__10TObjPlayerFPvPv(void *, void *);
void TObjPlayer__sub_801D1888(void *);
s32 validate_6x89_set_killer_entity_id(void *);
void handle_6x89_set_killer_entity_id(void *arg0);
}

extern "C" {

void TObjPlayer__sub_801C9F6C(s32 arg0, s16 arg1) {
  unsigned int new_var2;
  unsigned int new_var;
  {
    switch (arg1)
    {
      case 7:
        TObjPlayer__sub_801C9F68((void *) arg0);
        return;
      new_var2 = (new_var = arg0);
      case 2:
        TObjPlayer__sub_801C9F64();
        return;
      case 3:
        update_timer_action__10TObjPlayerFPv((void *) new_var2);
 do { } while (0 != 0);
        return;
      case 8:
        update_timer_state__10TObjPlayerFPv();
        return;
      case 5:
        update_lobby_display__10TObjPlayerFUi((void *) arg0);
        return;
      case 0:
        init_action__10TObjPlayerFPv((void *) arg0);
        return;
      case 1:
        ensure_default__10TObjPlayerFPv();
        return;
      case 6:
        notify_lobby__10TObjPlayerFi((void *) arg0);
        break;
    }
  }
}
void handle_6x89_set_killer_entity_id(void *arg0) {
    struct Pkt_801C9FE8 pkt;
    u8 *p;
    TObjPlayer__sub_801D1888(&pkt);
    copy_head_fields__10TObjPlayerFPvPv(&pkt, arg0);
    bswap_fields__10TObjPlayerFPv(&pkt);
    if (validate_6x89_set_killer_entity_id(&pkt) != 0) {
        p = get_player_by_client_id(pkt.id);
        if (p != NULL) {
            *(u16 *)(p + 0x2D4) = pkt.c;
        }
    }
}

}
