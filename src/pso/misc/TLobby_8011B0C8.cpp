#include "types.h"

extern "C" {

void TLobby__sub_8011B0C8(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_item_packet__6TLobbyFPv(void*);

void TLobby__sub_8011B0C8(void* p) { bswap_item_packet__6TLobbyFPv(p); TLobby__send_and_handle_60(p); }

}
