#include "types.h"

extern "C" {

void broadcast__6TLobbyFPv(void* a0);
int broadcast_to_players__6TLobbyFii(void*, void*);

    extern int TLobby__data_805D4ABC;
void broadcast__6TLobbyFPv(void* a0) { broadcast_to_players__6TLobbyFii((void*)(TLobby__data_805D4ABC), a0); }

}
