#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

int close_adxf_handle__6TLobbyFv(void*);

    extern int lobby_download_state_ptr;
void TLobby::destroy_instance() { close_adxf_handle__6TLobbyFv((void*)(lobby_download_state_ptr)); lobby_download_state_ptr = 0; }

}
