#include "types.h"

extern "C" {

int bswap_packet_header__6TLobbyFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);

int bswap_packet_header__6TLobbyFPv(void* p) { return read_be16_field2__10TObjPlayerFPv(p); }

}
