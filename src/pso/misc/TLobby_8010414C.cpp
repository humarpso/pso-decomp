#include "types.h"

extern "C" {

void bswap_player_packet__6TLobbyFPv(void* p);
int TObjPlayer__sub_8001960C(void*);
int bswap_32__FPUl(void*);

void bswap_player_packet__6TLobbyFPv(void* p) { TObjPlayer__sub_8001960C(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

}
