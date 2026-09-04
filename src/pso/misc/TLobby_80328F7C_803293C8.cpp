#include "types.h"

extern "C" {

int TLobby__sub_803293F0(void* p);
int TLobby__sub_80329418(void);
int TLobby__sub_80329444(void);
int TLobby__sub_80329470(void);
int is_invalid_state__6TLobbyFPv(void* p);
int check_valid_state__6TLobbyFi(void*);
int is_valid_state__6TLobbyFPvi(void*);

int is_invalid_state__6TLobbyFPv(void* p) { return (is_valid_state__6TLobbyFPvi(p)) == 0; }
int TLobby__sub_803293F0(void* p) { return (check_valid_state__6TLobbyFi(p)) == 0; }

int TLobby__sub_80329418(void) { return 0; }
int TLobby__sub_80329444(void) { return 0; }

    extern int lbl_805D6C80;
int TLobby__sub_80329470(void) {  return lbl_805D6C80; }

}
