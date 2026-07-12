#include "types.h"

extern "C" {

int is_invalid_state__6TLobbyFPv(void* p);
int TLobby__sub_803293F0(void* p);
int is_valid_state__6TLobbyFPvi(void*);
int check_valid_state__6TLobbyFi(void*);

int is_invalid_state__6TLobbyFPv(void* p) { return (is_valid_state__6TLobbyFPvi(p)) == 0; }
int TLobby__sub_803293F0(void* p) { return (check_valid_state__6TLobbyFi(p)) == 0; }

}
