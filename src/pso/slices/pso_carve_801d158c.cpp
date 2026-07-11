#include "types.h"

extern "C" {

int TObjPlayer__sub_801D14C8(void*);
int TLobby__send_and_handle_60(void*);
void TObjPlayer__sub_801D158C(void* p);

void TObjPlayer__sub_801D158C(void* p) { TObjPlayer__sub_801D14C8(p); TLobby__send_and_handle_60(p); }

}
