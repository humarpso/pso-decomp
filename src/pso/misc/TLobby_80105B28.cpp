#include "types.h"

extern "C" {

void process_and_dispatch_packet__6TLobbyFPv(void* p);
int dispatch_packet__6TLobbyFPv(void*);
int bswap_6xa2_fields__6TLobbyFPv(void*);

void process_and_dispatch_packet__6TLobbyFPv(void* p) { bswap_6xa2_fields__6TLobbyFPv(p); dispatch_packet__6TLobbyFPv(p); }

}
