#include "types.h"

extern "C" {

void send_item_packet__6TLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_item_packet__6TLobbyFPv(void*);

void send_item_packet__6TLobbyFPv(void* p) { bswap_item_packet__6TLobbyFPv(p); TLobby__send_and_handle_60(p); }

}
