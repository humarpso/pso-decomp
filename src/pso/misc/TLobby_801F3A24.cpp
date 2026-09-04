#include "types.h"

extern "C" {

void rebuild_all__6TLobbyFi(int a0);
int TLobby__sub_801F3B30(void);
int TLobby__sub_801F3BC4(void);
int TLobby__sub_801F4340(void);
int free_boss4rock__6TLobbyFv(void);
int TLobby__sub_8020A2AC(void);
int rebuild_entry__6TLobbyFPv(void);
int init_sub_state__6TLobbyFPv(void);

    extern int TLobby__data_805D5EE0;
    extern short TLobby__data_805D6134;
void rebuild_all__6TLobbyFi(int a0) { TLobby__data_805D5EE0 = a0; TLobby__sub_801F3BC4(); init_sub_state__6TLobbyFPv(); TLobby__sub_8020A2AC(); TLobby__sub_801F3B30(); free_boss4rock__6TLobbyFv(); rebuild_entry__6TLobbyFPv(); TLobby__sub_801F4340(); TLobby__data_805D6134 = 1; TLobby__data_805D5EE0 = 0; }

}
