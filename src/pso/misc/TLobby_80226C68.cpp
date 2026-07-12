#include "types.h"

extern "C" {

int TLobby__sub_80226C68(void);
int send_neg30__6TLobbyFv(void);
int set_and_notify__6TLobbyFi(void*);

int TLobby__sub_80226C68(void) { return set_and_notify__6TLobbyFi((void*)(0)); }
int send_neg30__6TLobbyFv(void) { return set_and_notify__6TLobbyFi((void*)(-30)); }

}
