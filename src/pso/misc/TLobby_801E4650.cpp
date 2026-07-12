#include "types.h"

extern "C" {

void bswap_switch_activate_token__6TLobbyFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);

void bswap_switch_activate_token__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
