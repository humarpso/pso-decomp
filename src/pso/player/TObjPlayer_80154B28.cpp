#include "types.h"

extern "C" {

void reset_photon_effect__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_80154B60(void*);
int TLobby__sub_801A1FDC(void*, void*);

void reset_photon_effect__10TObjPlayerFPv(void* p) { TLobby__sub_801A1FDC(p, (void*)0); TObjPlayer__sub_80154B60(p); }

}
