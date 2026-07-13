#include "types.h"

extern "C" {

int set_and_notify_default__6TLobbyFv(void);
int send_neg30__6TLobbyFv(void);
int set_and_notify__6TLobbyFi(void*);

int set_and_notify_default__6TLobbyFv(void) { return set_and_notify__6TLobbyFi((void*)(0)); }
int send_neg30__6TLobbyFv(void) { return set_and_notify__6TLobbyFi((void*)(-30)); }

}
