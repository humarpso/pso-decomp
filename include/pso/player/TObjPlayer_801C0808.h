#ifndef PSO_PLAYER_TOBJPLAYER_801C0808_H
#define PSO_PLAYER_TOBJPLAYER_801C0808_H

#include "types.h"

extern "C" {
void *TObjPlayer__sub_801C092C(void *arg0, void *arg1);
void TObjPlayer__sub_801C0C04(u8 *arg0);
void TObjPlayer__sub_801C0D7C(u8 *arg0);
u8 *TObjPlayer__sub_801C0F10(u8 *arg0, u8 *arg1);
u8 *TObjPlayer__sub_801C106C(u8 *arg0, u8 *arg1);
u8 *TObjPlayer__sub_801C1268(u8 *arg0, u8 *arg1);
u8 *TObjPlayer__sub_801C1664(u8 *arg0, u8 *arg1);
void apply_status_effect__10TObjPlayerFPv(void *p);
void bswap_fields__10TObjPlayerFi(s32 arg0);
void bswap_pkt_u16x2_u32__10TObjPlayerFPv(void *p);
void bswap_pkt_u16x2_u32x2__10TObjPlayerFPv(void *p);
void init_6x1F_floor_packet(u8 *arg0);
void init_6x27_use_item_cmd(u8 *arg0);
void swap_endian__10TObjPlayerFi(s32 arg0);
}

#endif
