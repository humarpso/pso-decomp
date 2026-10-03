#include "types.h"
struct Pkt_801CDAD8 { u8 cmd; u8 size; u16 player; s16 heading; s16 kind; };

extern "C" {
void TNpcPlayer__sub_80152B08(Pkt_801CDAD8 *);
void TObjPlayer__sub_801D2304(Pkt_801CDAD8 *, void *);
void bswap_6x45_packet(Pkt_801CDAD8 *);
s32 validate_6x45_attack(Pkt_801CDAD8 *);
u8 *get_player_by_client_id(u16);
s32 is_in_tl03_state__10TObjPlayerFPv(void *);
s32 reset_volopt_state__10TObjPlayerFv(void *);
s32 TLobby__sub_800822E8(void *, s32);
void set_action_type__10TObjPlayerFPvs(void *p, s16 v);
void set_attack_target__10TObjPlayerFPvs(void *p, s16 v);
void run_action_state_phase__10TObjPlayerFisi(void *, s32, s32);
void handle_6x45_attack(void *src);
}

extern "C" {

void handle_6x45_attack(void *src) {
    Pkt_801CDAD8 pkt;
    u8 *player;
    TNpcPlayer__sub_80152B08(&pkt);
    TObjPlayer__sub_801D2304(&pkt, src);
    bswap_6x45_packet(&pkt);
    if (validate_6x45_attack(&pkt) == 0) return;
    player = get_player_by_client_id(pkt.player);
    if (player == 0) return;
    if (is_in_tl03_state__10TObjPlayerFPv(player) == 0) return;
    if (reset_volopt_state__10TObjPlayerFv(player) == 0) return;
    if (TLobby__sub_800822E8(player, 0x8200) != 0) return;
    set_action_type__10TObjPlayerFPvs(player + 0x7CC, pkt.kind);
        set_attack_target__10TObjPlayerFPvs(player + 0x7CC, pkt.kind);
    *(s32 *)(player + 0x3F0) = pkt.heading;
    run_action_state_phase__10TObjPlayerFisi(player, 7, 0);
}

}
