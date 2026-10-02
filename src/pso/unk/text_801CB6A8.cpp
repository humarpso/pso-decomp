#include "types.h"
struct SwitchActionMessage_801CB6A8 { u8 code; u8 words; u16 actor; s32 yaw; };

extern "C" {
s32 TLobby__sub_800822E8(u8 *, u32);
s32 is_in_tl03_state__10TObjPlayerFPv();
u8 *get_player_by_client_id(u16);
void run_action_state_phase__10TObjPlayerFisi(u8 *, s32, s32);
void bswap_field4__10TObjPlayerFPv(void *);
void copy_font__10TObjPlayerFPvPv(void *, const void *);
void TObjPlayer__sub_801D1C70(void *);
s32 validate_6x50_switch_interaction(const void *);
void handle_6x50_switch_interaction(const void *source);
}

extern "C" {

void handle_6x50_switch_interaction(const void *source) {
    struct SwitchActionMessage_801CB6A8 packet;
    TObjPlayer__sub_801D1C70(&packet);
    copy_font__10TObjPlayerFPvPv(&packet, source);
    bswap_field4__10TObjPlayerFPv(&packet);
    if (validate_6x50_switch_interaction(&packet)) {
        u8 *player = get_player_by_client_id(packet.actor);
        if (player && is_in_tl03_state__10TObjPlayerFPv() && !TLobby__sub_800822E8(player, 0x8200)) {
            *(s32 *)(player + 0x60) = packet.yaw;
            run_action_state_phase__10TObjPlayerFisi(player, 12, 0);
        }
    }
}

}
