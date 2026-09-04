#include "types.h"

extern "C" {

void TLobby__sub_801E6C40(int a0, int a1);
void create_singleton__6TLobbyFv(void);
int create_singleton__6TLobbyFPv(void*);

    extern int TLobby__data_805D5ED0;
    extern int lbl_805D5ED4;
void TLobby__sub_801E6C40(int a0, int a1) { TLobby__data_805D5ED0 = a0; lbl_805D5ED4 = a1; }

    extern int tl_01;
void create_singleton__6TLobbyFv(void) { create_singleton__6TLobbyFPv((void*)(tl_01)); }

}
