#include "types.h"

extern "C" {

int TLobby__sub_80156B18(void*);
int TLobby__send_and_handle_60(void*);
void fn_80160804(void* p);

void fn_80160804(void* p) { TLobby__sub_80156B18(p); TLobby__send_and_handle_60(p); }

}
