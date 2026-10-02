#include "types.h"
typedef s32 M2C_UNK;
struct Pkt_80010C54 {
    u8 cmd;
    u8 size;
    u16 client;
    u16 target;
    u8 which;
    u8 amount;
};

extern "C" {
s32 TObjPlayer__sub_80010C04(u16);
M2C_UNK try_spend_actor_meseta(s32, s32);
M2C_UNK add_actor_tp(s32, s16);
M2C_UNK TObjPlayer__sub_800112D4(s32, s16);
M2C_UNK add_actor_hp(s32, s16);
M2C_UNK TObjectV8047c128_subtract_hp(s32, s16);
M2C_UNK TObjPlayer__sub_80015C68(s32);
M2C_UNK TObjPlayer__sub_80016018(s32, s32, M2C_UNK, s16);
M2C_UNK show_tp_font(s32, s32, M2C_UNK, s16);
M2C_UNK draw_hp_label(s32, s32, M2C_UNK, s16);
M2C_UNK bswap_head16__10TObjPlayerFPv(void *);
s32 get_player_by_client_id(s32);
void handle_6x9A_update_entity_stat(Pkt_80010C54 *pkt);
}

extern "C" {

void handle_6x9A_update_entity_stat(Pkt_80010C54 *pkt) {
    s16 v;
    s32 player;
    s32 amount;
    if (pkt == NULL) {
        return;
    }
    bswap_head16__10TObjPlayerFPv(pkt);
    if (pkt->client >= 0x1000U) {
        return;
    }
    player = get_player_by_client_id(pkt->client);
    if (player == 0) {
        return;
    }
    amount = pkt->amount;
    switch (pkt->which) {
    case 0: {
        v = amount;
        TObjectV8047c128_subtract_hp(player, v);
        if (TObjPlayer__sub_80010C04(pkt->target) != 0) {
            draw_hp_label(player, player + 0x2FC, 0xA, v);
        } else {
            draw_hp_label(player, player + 0x2FC, 0xA, -amount);
        }
        break;
    }
    case 1: {
        v = amount;
        TObjPlayer__sub_800112D4(player, v);
        if (TObjPlayer__sub_80010C04(pkt->target) != 0) {
            show_tp_font(player, player + 0x2FC, 0xA, v);
        } else {
            show_tp_font(player, player + 0x2FC, 0xA, -amount);
        }
        break;
    }
    case 2:
        try_spend_actor_meseta(player, amount);
        TObjPlayer__sub_80016018(player, player + 0x2FC, 0xA, -amount);
        break;
    case 3: {
        v = amount;
        add_actor_hp(player, v);
        draw_hp_label(player, player + 0x2FC, 0xA, v);
        TObjPlayer__sub_80015C68(player);
        break;
    }
    case 4: {
        v = amount;
        add_actor_tp(player, v);
        show_tp_font(player, player + 0x2FC, 0xA, v);
        TObjPlayer__sub_80015C68(player);
        break;
    }
    }
}

}
