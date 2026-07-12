#include "types.h"

extern "C" {

void enter_state_8__10TObjPlayerFPv(void* p);
int refresh_lobby_state__10TObjPlayerFPv(void*);
int TObjPlayer__sub_800F6EB0(void*);
int TObjPlayer__sub_80154764(void*, void*, void*);
int send_entity_set_flags__6TLobbyFPv(void*);

void enter_state_8__10TObjPlayerFPv(void* p) { if (*(short*)((char*)p + 0x326) != 8) { *(short*)((char*)p + 0x326) = 8; *(short*)((char*)p + 0xb8) = 8; TObjPlayer__sub_800F6EB0(p); TObjPlayer__sub_80154764(p, (void*)0, (void*)1); refresh_lobby_state__10TObjPlayerFPv(p); send_entity_set_flags__6TLobbyFPv(p); } }

}
