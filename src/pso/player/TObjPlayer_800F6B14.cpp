#include "types.h"

extern "C" {

int TObjPlayer__sub_800F6B68(void* a0 = 0);
void TObjPlayer__sub_800F6B14(void* p);
int query_lobby_state__10TObjPlayerFPv(void* p);
int TLobby__sub_80105538(void*);

void TObjPlayer__sub_800F6B14(void* p) { TObjPlayer__sub_800F6B68(p); query_lobby_state__10TObjPlayerFPv(p); }
int query_lobby_state__10TObjPlayerFPv(void* p) { return TLobby__sub_80105538(p); }

}
