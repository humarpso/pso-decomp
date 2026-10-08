#include "types.h"

extern "C" {

void copy_data__6TLobbyFPv(void* a0);
int copy_all_data__6TLobbyFii(void*, void*);

    extern int TLobby__lobby_instance;
void copy_data__6TLobbyFPv(void* a0) { copy_all_data__6TLobbyFii((void*)(TLobby__lobby_instance), a0); }

}
