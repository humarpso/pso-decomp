#include "types.h"

extern "C" {

void update_screen__6TLobbyFPv(void* p);
int TLobby__sub_80293080(void*);
int is_multi_ready__6TLobbyFv(void);

void update_screen__6TLobbyFPv(void* p) { if (TLobby__sub_80293080(p) != 0) { is_multi_ready__6TLobbyFv(); } }

}
