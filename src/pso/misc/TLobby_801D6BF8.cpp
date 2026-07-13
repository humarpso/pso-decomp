#include "types.h"

extern "C" {

void update_all_children__6TLobbyFPv(void* p);
int TLobby__sub_801C4F80(void*);
int reset_particle_ctrl__10TObjPlayerFPv(void*);

void update_all_children__6TLobbyFPv(void* p) { reset_particle_ctrl__10TObjPlayerFPv(p); TLobby__sub_801C4F80((char*)p + 0x8); TLobby__sub_801C4F80((char*)p + 0x18); TLobby__sub_801C4F80((char*)p + 0x28); TLobby__sub_801C4F80((char*)p + 0x38); TLobby__sub_801C4F80((char*)p + 0x48); }

}
