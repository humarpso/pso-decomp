#include "types.h"

extern "C" {

void TLobby__sub_802A769C(void);
void enable_and_refresh__6TLobbyFv(void);
int TLobby__sub_802A7640(void);
int alloc_boss4rock_buffer__6TLobbyFv(void);
int TLobby__sub_802A7888(int);

void TLobby__sub_802A769C(void) { TLobby__sub_802A7640(); TLobby__sub_802A7888(0); }
void enable_and_refresh__6TLobbyFv(void) { TLobby__sub_802A7888(1); alloc_boss4rock_buffer__6TLobbyFv(); }

}
