#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

int update_child_player__6TLobbyFv(void*);
int reset_particle_ctrl__10TObjPlayerFPl(void*);

void TLobby::update_all_children() { reset_particle_ctrl__10TObjPlayerFPl(this); update_child_player__6TLobbyFv((char*)this + 0x8); update_child_player__6TLobbyFv((char*)this + 0x18); update_child_player__6TLobbyFv((char*)this + 0x28); update_child_player__6TLobbyFv((char*)this + 0x38); update_child_player__6TLobbyFv((char*)this + 0x48); }

}
