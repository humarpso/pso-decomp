#include "types.h"

extern "C" {

void init_window__6TLobbyFv(void);
void init_state__6TLobbyFv(void);
int fn_801F4CD8(void*);
int fn_801F5018(void*);

    extern int TLobby__data_805D5E98;
    extern int TLobby__data_805D5EB4;
    extern int tl_01;
void init_window__6TLobbyFv(void) { TLobby__data_805D5EB4 = fn_801F4CD8((void*)(tl_01)); TLobby__data_805D5E98 = 10; }

    extern int TLobby__data_805D5E98;
    extern int TLobby__data_805D5EB0;
    extern int tl_01;
void init_state__6TLobbyFv(void) { TLobby__data_805D5EB0 = fn_801F5018((void*)(tl_01)); TLobby__data_805D5E98 = 9; }

}
