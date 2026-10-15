#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

int TLobby__sub_801DF024(void* p);
int TLobby__sub_801DF064(void* p);
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
int TLobby::bswap_cmd_d8_header() { return bswap__13packet_headerFv(this); }
int TLobby__sub_801DF064(void* p) { return bswap__13packet_headerFv(p); }
void TLobby::bswap_c6_packet() { bswap__13packet_headerFv(this); { int i; for (i = 0; i < 30; i++) { bswap_32__FPUl((char*)this + 0x4 + i * 4); } } }
void bswap_cmd_c5(void* p) { bswap__13packet_headerFv(p); { int i; for (i = 0; i < 12; i++) { ((TLobby *)((char*)p + 0x4 + i * 284))->bswap_cmd_c5(); } } }
void TLobby::bswap_cmd_c5() { bswap_32__FPUl(this); bswap_challenge_battle_records__6TLobbyFi((char*)this + 0x4); bswap_16__FPUs((char*)this + 0x104); bswap_16__FPUs((char*)this + 0x106); bswap_16__FPUs((char*)this + 0x108); bswap_16__FPUs((char*)this + 0x10a); bswap_16__FPUs((char*)this + 0x10c); bswap_16__FPUs((char*)this + 0x10e); bswap_16__FPUs((char*)this + 0x110); bswap_16__FPUs((char*)this + 0x112); bswap_32__FPUl((char*)this + 0x114); bswap_32__FPUl((char*)this + 0x118); }
void TLobby::bswap_guild_card_meet_user() { bswap__13packet_headerFv(this); bswap__16TPlyGuildCardTagFv((char*)this + 0x4); fn_801E0900((char*)this + 0xc); bswap_32__FPUl((char*)this + 0x14); bswap__21TPlyMeetUserExtensionFv((char*)this + 0xec); }

}
