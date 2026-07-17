#include "types.h"

extern "C" {

void update_all_children__6TLobbyFPv(void* p);
int update_child_player__6TLobbyFi(void*);
int reset_particle_ctrl__10TObjPlayerFPv(void*);

void update_all_children__6TLobbyFPv(void* p) { reset_particle_ctrl__10TObjPlayerFPv(p); update_child_player__6TLobbyFi((char*)p + 0x8); update_child_player__6TLobbyFi((char*)p + 0x18); update_child_player__6TLobbyFi((char*)p + 0x28); update_child_player__6TLobbyFi((char*)p + 0x38); update_child_player__6TLobbyFi((char*)p + 0x48); }

}
