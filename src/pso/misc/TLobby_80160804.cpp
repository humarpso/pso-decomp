#include "types.h"

extern "C" {

void TLobby__sub_80160804(void* p);
int TLobby__send_and_handle_60(void*);
int TLobby__sub_80156B18(void*);

void TLobby__sub_80160804(void* p) { TLobby__sub_80156B18(p); TLobby__send_and_handle_60(p); }

}
