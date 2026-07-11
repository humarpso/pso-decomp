#include "types.h"

extern "C" {

void update_and_reset__6TLobbyFi(int a0);
int TLobby__sub_801F3E1C(void);
int TLobby__sub_801F4340(void);

    extern int TLobby__data_805D5EE0;
    extern short TLobby__data_805D6134;
void update_and_reset__6TLobbyFi(int a0) { TLobby__data_805D5EE0 = a0; TLobby__sub_801F3E1C(); TLobby__sub_801F4340(); TLobby__data_805D6134 = 1; TLobby__data_805D5EE0 = 0; }

}
