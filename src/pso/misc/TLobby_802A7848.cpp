#include "types.h"

extern "C" {

int TLobby__sub_802A7848(void* p);
int TLobby__sub_802A7868(void* p);
void set_photon_chair_flag__6TLobbyFi(int a0);
int fn_802A7238(void*);
int set_field_4__6TLobbyFPvi(void*);

int TLobby__sub_802A7848(void* p) { return set_field_4__6TLobbyFPvi(p); }
int TLobby__sub_802A7868(void* p) { return fn_802A7238(p); }

    extern int lbl_805D6688;
void set_photon_chair_flag__6TLobbyFi(int a0) { lbl_805D6688 = a0; }

}
