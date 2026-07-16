#include "types.h"

extern "C" {

void TLobby__sub_8024285C(void* p);
void reset_state_805D63DC__6TLobbyFv(void*);
void reset_state__6TLobbyFPv(void* p);
int TLobby__sub_80242928(void);

    extern int lbl_805D63DC;
void reset_state_805D63DC__6TLobbyFv(void*) { lbl_805D63DC = 0; TLobby__sub_80242928(); }

void reset_state__6TLobbyFPv(void* p) { reset_state_805D63DC__6TLobbyFv((void*)(p)); }
void TLobby__sub_8024285C(void* p) { reset_state_805D63DC__6TLobbyFv((void*)(p)); }

}
