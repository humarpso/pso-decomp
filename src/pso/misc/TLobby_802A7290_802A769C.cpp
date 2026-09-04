#include "types.h"

extern "C" {

void TLobby__sub_802A769C(void);
void enable_and_refresh__6TLobbyFv(void);
int TLobby__sub_802A7640(void);
int alloc_boss4rock_buffer__6TLobbyFv(void);
int set_photon_chair_flag__6TLobbyFi(int);

void TLobby__sub_802A769C(void) { TLobby__sub_802A7640(); set_photon_chair_flag__6TLobbyFi(0); }
void enable_and_refresh__6TLobbyFv(void) { set_photon_chair_flag__6TLobbyFi(1); alloc_boss4rock_buffer__6TLobbyFv(); }

}
