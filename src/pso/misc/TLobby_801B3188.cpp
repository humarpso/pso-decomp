#include "types.h"

extern "C" {

int player_flag_1__6TLobbyFPv(void* p);
int check_player_state_flag_2__6TLobbyFPv(void* p);
void handle_6x34(void);
int TObjPlayer__sub_8001BEF8(void*, int);
int set_battle_flag__10TObjPlayerFPvi(void*, int);

int player_flag_1__6TLobbyFPv(void* p) { return set_battle_flag__10TObjPlayerFPvi(p, 1); }
int check_player_state_flag_2__6TLobbyFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x858, 2); }
void handle_6x34(void) {  }

}
