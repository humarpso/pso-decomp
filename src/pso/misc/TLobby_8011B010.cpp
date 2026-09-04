#include "types.h"

extern "C" {

void bswap_item_packet__6TLobbyFPv(void* p);
void send_item_packet__6TLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_item__6TLobbyFPv(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

void send_item_packet__6TLobbyFPv(void* p) { bswap_item_packet__6TLobbyFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void bswap_item_packet__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_item__6TLobbyFPv((char*)p + 0x4); }

}
