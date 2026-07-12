#include "types.h"

extern "C" {

int TLobby__sub_801EBE6C(void);
int enable_mine_trap__6TLobbyFv(void);
void init_menu_state__6TLobbyFi(int a0);
int TOMineTrap__sub_80171378(void*);
int fn_801F49BC(void*);

int TLobby__sub_801EBE6C(void) { return TOMineTrap__sub_80171378((void*)(0)); }
int enable_mine_trap__6TLobbyFv(void) { return TOMineTrap__sub_80171378((void*)(1)); }

    extern int* TLobby__data_805D5E78;
    extern unsigned char TLobby__data_805D5E88;
    extern int TLobby__data_805D5E98;
    extern int TLobby__data_805D5EB8;
    extern int tl_01;
void init_menu_state__6TLobbyFi(int a0) { TLobby__data_805D5EB8 = fn_801F49BC((void*)(tl_01)); TLobby__data_805D5E78[(unsigned char)(a0)] = 0; TLobby__data_805D5E88 = a0; TLobby__data_805D5E98 = 11; }

}
