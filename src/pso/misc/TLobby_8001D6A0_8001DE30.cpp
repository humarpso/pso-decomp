#include "types.h"

extern "C" {

void TLobby__sub_8001DE30(void* a0);
void copy_all_entries__6TLobbyFPv(void* a0);
int TLobby__sub_8001DF58(void*, void*);
int copy_all_entries__6TLobbyFii(void*, void*);

    extern int TLobby__lobby_instance;
void TLobby__sub_8001DE30(void* a0) { TLobby__sub_8001DF58((void*)(TLobby__lobby_instance), a0); }

    extern int TLobby__lobby_instance;
void copy_all_entries__6TLobbyFPv(void* a0) { copy_all_entries__6TLobbyFii((void*)(TLobby__lobby_instance), a0); }

}
