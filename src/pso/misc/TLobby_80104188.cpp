#include "types.h"

extern "C" {

void update_and_send__6TLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
int TLobby__sub_8010414C(void*);

void update_and_send__6TLobbyFPv(void* p) { TLobby__sub_8010414C(p); TLobby__send_and_handle_60(p); }

}
