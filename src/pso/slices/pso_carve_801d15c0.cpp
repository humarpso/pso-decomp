#include "types.h"

extern "C" {

int TObjPlayer__sub_801D15F4(void*);
int TLobby__send_and_handle_60(void*);
void TObjPlayer__sub_801D15C0(void* p);

void TObjPlayer__sub_801D15C0(void* p) { TObjPlayer__sub_801D15F4(p); TLobby__send_and_handle_60(p); }

}
