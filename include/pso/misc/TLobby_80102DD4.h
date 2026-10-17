#ifndef PSO_MISC_TLOBBY_80102DD4_H
#define PSO_MISC_TLOBBY_80102DD4_H

#include "types.h"

extern "C" {
void TItem__sub_801031C0(void *p);
void TLobby__sub_801030EC(u8 *arg0);
void bswap_pick_up_item_packet__6TLobbyFi(s32 arg0);
void bswap_pick_up_item_request__6TLobbyFi(s32 arg0);
void deliver_delayed_weapon_hit(u8 *arg0);
void init_6x5E_buy_item_header(void *p);
void spawn_item_attacker(s32 arg0, u32 arg1, s32 arg2, u8 *arg3);
}

#endif
