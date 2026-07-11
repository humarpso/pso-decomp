#include "types.h"

extern "C" {

int TObjPlayer__sub_801D19E0(void*);
int TLobby__send_and_handle_60(void*);
void TObjPlayer__sub_801D1A50(void* p);

void TObjPlayer__sub_801D1A50(void* p) { TObjPlayer__sub_801D19E0(p); TLobby__send_and_handle_60(p); }

}
