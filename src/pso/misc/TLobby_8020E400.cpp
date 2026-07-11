#include "types.h"

extern "C" {

s32 get_lobby_group__6TLobbyFi(s32 arg0);
int bswap_16__FPUs(void*);
int TObjPlayer__sub_8001960C(void*);
int TLobby__send_and_handle_60(void*);
void build_6x76_set_entity_set_flags(void* p);

void bswap_player_fields__6TLobbyFPv(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void send_player_update__6TLobbyFPv(void* p) { bswap_player_fields__6TLobbyFPv(p); TLobby__send_and_handle_60(p); }
void build_6x76_set_entity_set_flags(void* p) { *(u8*)((char*)p + 0x0) = 118; *(u8*)((char*)p + 0x1) = 2; }

}
