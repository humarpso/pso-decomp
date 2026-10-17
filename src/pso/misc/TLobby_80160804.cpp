#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

void update_and_send_60__6TLobbyFPv(void* p);
void TLobby__send_and_handle_60(u8 *arg0);

void update_and_send_60__6TLobbyFPv(void* p) { TLobby::bswap_60_header(p); TLobby__send_and_handle_60((u8 *)p); }

}
