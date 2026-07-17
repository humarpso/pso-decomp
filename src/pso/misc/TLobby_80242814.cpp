#include "types.h"

extern "C" {

void TLobby__sub_8024285C(void* p);
void reset_state_805D63DC__6TLobbyFv(void*);
void reset_state__6TLobbyFPv(void* p);
int clear_flag_bit2__6TLobbyFv(void);

    extern int lbl_805D63DC;
void reset_state_805D63DC__6TLobbyFv(void*) { lbl_805D63DC = 0; clear_flag_bit2__6TLobbyFv(); }

void reset_state__6TLobbyFPv(void* p) { reset_state_805D63DC__6TLobbyFv((void*)(p)); }
void TLobby__sub_8024285C(void* p) { reset_state_805D63DC__6TLobbyFv((void*)(p)); }

}
