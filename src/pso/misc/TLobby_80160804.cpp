#include "types.h"

extern "C" {

void update_and_send_60__6TLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_60_header__6TLobbyFPv(void*);

void update_and_send_60__6TLobbyFPv(void* p) { bswap_60_header__6TLobbyFPv(p); TLobby__send_and_handle_60(p); }

}
