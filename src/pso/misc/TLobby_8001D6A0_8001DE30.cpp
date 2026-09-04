#include "types.h"

extern "C" {

void TLobby__sub_8001DE30(void* a0);
void copy_all_entries__6TLobbyFPv(void* a0);
int TLobby__sub_8001DF58(void*, void*);
int copy_all_entries__6TLobbyFii(void*, void*);

    extern int TLobby__data_805D4ABC;
void TLobby__sub_8001DE30(void* a0) { TLobby__sub_8001DF58((void*)(TLobby__data_805D4ABC), a0); }

    extern int TLobby__data_805D4ABC;
void copy_all_entries__6TLobbyFPv(void* a0) { copy_all_entries__6TLobbyFii((void*)(TLobby__data_805D4ABC), a0); }

}
