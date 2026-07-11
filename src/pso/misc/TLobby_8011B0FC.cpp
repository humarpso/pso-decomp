#include "types.h"

extern "C" {

void bswap_item_packet__6TLobbyFPv(void* p);
int bswap_item__6TLobbyFPv(void*);
int TObjPlayer__sub_8001960C(void*);

void bswap_item_packet__6TLobbyFPv(void* p) { TObjPlayer__sub_8001960C(p); bswap_item__6TLobbyFPv((char*)p + 0x4); }

}
