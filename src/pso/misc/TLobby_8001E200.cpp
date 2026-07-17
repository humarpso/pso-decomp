#include "types.h"

extern "C" {

void* get_player_entry__6TLobbyFii(int a0, int a1);

    extern int TLobby__data_805D4AB0;
void* get_player_entry__6TLobbyFii(int a0, int a1) {  return (char*)(TLobby__data_805D4AB0) + a1 * 48; }

}
