#include "types.h"

extern "C" {

void destroy_instance__6TLobbyFv(void);
int close_adxf_handle__6TLobbyFPv(void*);

    extern int lobby_download_state_ptr;
void destroy_instance__6TLobbyFv(void) { close_adxf_handle__6TLobbyFPv((void*)(lobby_download_state_ptr)); lobby_download_state_ptr = 0; }

}
