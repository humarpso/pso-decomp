#include "types.h"

extern "C" {

void TLobby__sub_80104188(void* p);
int TLobby__send_and_handle_60(void*);
int TLobby__sub_8010414C(void*);

void TLobby__sub_80104188(void* p) { TLobby__sub_8010414C(p); TLobby__send_and_handle_60(p); }

}
