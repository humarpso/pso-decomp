#include "types.h"

extern "C" {

void update_and_send_60__6TLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
int TLobby__sub_80156B18(void*);

void update_and_send_60__6TLobbyFPv(void* p) { TLobby__sub_80156B18(p); TLobby__send_and_handle_60(p); }

}
