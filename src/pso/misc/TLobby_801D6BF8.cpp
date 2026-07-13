#include "types.h"

extern "C" {

void update_all_children__6TLobbyFPv(void* p);
int TLobby__sub_801C4F80(void*);
int TObjPlayer__sub_801D6C4C(void*);

void update_all_children__6TLobbyFPv(void* p) { TObjPlayer__sub_801D6C4C(p); TLobby__sub_801C4F80((char*)p + 0x8); TLobby__sub_801C4F80((char*)p + 0x18); TLobby__sub_801C4F80((char*)p + 0x28); TLobby__sub_801C4F80((char*)p + 0x38); TLobby__sub_801C4F80((char*)p + 0x48); }

}
