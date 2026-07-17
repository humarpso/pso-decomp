#include "types.h"

extern "C" {

void set_handler__6TLobbyFi(int a0);
int get_game_mode__6TLobbyFv(void);

    extern int* TLobby__data_805D5E78;
void set_handler__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = get_game_mode__6TLobbyFv(); }

}
