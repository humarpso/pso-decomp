#include "types.h"

extern "C" {

void dispatch_packet_wrapper__6TLobbyFPv(void* p);
int dispatch_packet__6TLobbyFPv(void*);
int TLobby__sub_80105A60(void*);

void dispatch_packet_wrapper__6TLobbyFPv(void* p) { TLobby__sub_80105A60(p); dispatch_packet__6TLobbyFPv(p); }

}
