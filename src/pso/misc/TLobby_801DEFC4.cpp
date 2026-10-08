#include "types.h"

extern "C" {

int TLobby__sub_801DF024(void* p);
int bswap_cmd_d8_header__6TLobbyFPv(void* p);
int TLobby__sub_801DF064(void* p);
void bswap_c6_packet__6TLobbyFPv(void* p);
void bswap_cmd_c5__6TLobbyFPv(void* p);
void bswap_guild_card_meet_user__6TLobbyFPv(void* p);
void bswap_cmd_D3_item_bank(void* p);
void bswap_cmd_c5(void* p);
int bswap_challenge_battle_records__6TLobbyFi(void*);
int bswap_16__FPUs(void* a0 = 0);
int bswap_32__FPUl(void* a0 = 0);
int bswap__13packet_headerFv(void* a0 = 0);
int bswap__16TPlyGuildCardTagFv(void*);
int bswap__21TPlyMeetUserExtensionFv(void*);
int bswap__9TItemDataFv(void* a0 = 0);
int fn_801E0900(void*);

void bswap_cmd_D3_item_bank(void* p) { bswap__13packet_headerFv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); { int i; for (i = 0; i < 32; i++) { bswap__9TItemDataFv((char*)p + 0x8 + i * 20); } } }
int TLobby__sub_801DF024(void* p) { return bswap__13packet_headerFv(p); }
int bswap_cmd_d8_header__6TLobbyFPv(void* p) { return bswap__13packet_headerFv(p); }
int TLobby__sub_801DF064(void* p) { return bswap__13packet_headerFv(p); }
void bswap_c6_packet__6TLobbyFPv(void* p) { bswap__13packet_headerFv(p); { int i; for (i = 0; i < 30; i++) { bswap_32__FPUl((char*)p + 0x4 + i * 4); } } }
void bswap_cmd_c5(void* p) { bswap__13packet_headerFv(p); { int i; for (i = 0; i < 12; i++) { bswap_cmd_c5__6TLobbyFPv((void*)((char*)p + 0x4 + i * 284)); } } }
void bswap_cmd_c5__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_challenge_battle_records__6TLobbyFi((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x104); bswap_16__FPUs((char*)p + 0x106); bswap_16__FPUs((char*)p + 0x108); bswap_16__FPUs((char*)p + 0x10a); bswap_16__FPUs((char*)p + 0x10c); bswap_16__FPUs((char*)p + 0x10e); bswap_16__FPUs((char*)p + 0x110); bswap_16__FPUs((char*)p + 0x112); bswap_32__FPUl((char*)p + 0x114); bswap_32__FPUl((char*)p + 0x118); }
void bswap_guild_card_meet_user__6TLobbyFPv(void* p) { bswap__13packet_headerFv(p); bswap__16TPlyGuildCardTagFv((char*)p + 0x4); fn_801E0900((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x14); bswap__21TPlyMeetUserExtensionFv((char*)p + 0xec); }

}
