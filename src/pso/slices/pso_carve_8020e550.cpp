#include "types.h"

extern "C" {

s32 get_lobby_group__6TLobbyFi(s32 arg0);
int bswap_16__FPUs(void*);
int TObjPlayer__sub_8001960C(void*);
int TLobby__send_and_handle_60(void*);
void build_6x76_set_entity_set_flags(void* p);

void build_6x76_set_entity_set_flags(void* p) { *(u8*)((char*)p + 0x0) = 118; *(u8*)((char*)p + 0x1) = 2; }

int TLobby__sub_8020E550(void) { return 0; }
int TLobby__sub_8020E5E0(void) { return 0; }
int TLobby__sub_8020E670(void) { return 0; }

}
