#include "types.h"

struct Pkt_8020BF14 { u8 hdr[2]; s16 a; s16 b; s16 c; };

extern "C" {
s16 obj_getField1c(void *);
s16 get_current_floor();
void send_player_update__6TLobbyFPv(void *);
void build_6x76_set_entity_set_flags(void *);
void send_6x76_set_entity_set_flags(void *arg0, s16 arg1);
}

extern "C" {

int sync_game_state__6TLobbyFPv(void* p);
int TLobby__sub_8020BFC4(void* p);
int TLobby__sub_8020B47C(void*);
int TLobby__sub_8020B5CC(void*);

void send_6x76_set_entity_set_flags(void *arg0, s16 arg1) {
    Pkt_8020BF14 pkt;
    build_6x76_set_entity_set_flags(&pkt);
    pkt.a = obj_getField1c(arg0);
    pkt.b = get_current_floor();
    pkt.c = arg1;
    send_player_update__6TLobbyFPv(&pkt);
}

}
