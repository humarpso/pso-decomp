#include "types.h"

extern "C" {

void bswap_player_packet__6TLobbyFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_32__FPUl(void*);

void bswap_player_packet__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

}
