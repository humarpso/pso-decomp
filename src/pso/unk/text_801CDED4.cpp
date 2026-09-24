#include "types.h"
struct Pkt_801CDED4 { u8 cmd; u8 size; u16 player; s16 heading; s16 kind; };

extern "C" {
void TNpcPlayer__sub_80152B98(Pkt_801CDED4 *);
void TObjPlayer__sub_801D2348(Pkt_801CDED4 *, void *);
void TNpcPlayer__sub_80152B5C(Pkt_801CDED4 *);
s32 validate_6x44_attack(Pkt_801CDED4 *);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 is_in_tl03_state__10TObjPlayerFPv(void *);
s32 reset_volopt_state__10TObjPlayerFv(void *);
s32 TLobby__sub_800822E8(void *, s32);
void set_action_type__10TObjPlayerFPvs(void *p, s16 v);
void set_attack_target__10TObjPlayerFPvs(void *p, s16 v);
void TObjPlayer__sub_801D0BC0(void *, s32, s32);
void handle_6x44_attack(void *src);
}

extern "C" {

void handle_6x44_attack(void *src) {
    Pkt_801CDED4 pkt;
    u8 *player;
    TNpcPlayer__sub_80152B98(&pkt);
    TObjPlayer__sub_801D2348(&pkt, src);
    TNpcPlayer__sub_80152B5C(&pkt);
    if (validate_6x44_attack(&pkt) == 0) return;
    player = TPlayerBattleCtrl4P__sub_801BA74C(pkt.player);
    if (player == 0) return;
    if (is_in_tl03_state__10TObjPlayerFPv(player) == 0) return;
    if (reset_volopt_state__10TObjPlayerFv(player) == 0) return;
    if (TLobby__sub_800822E8(player, 0x8200) != 0) return;
    set_action_type__10TObjPlayerFPvs(player + 0x7CC, pkt.kind);
        set_attack_target__10TObjPlayerFPvs(player + 0x7CC, pkt.kind);
    *(s32 *)(player + 0x3F0) = pkt.heading;
    TObjPlayer__sub_801D0BC0(player, 6, 0);
}

}
