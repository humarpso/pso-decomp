#include "types.h"

extern "C" {
void bswap_fields__15TFontSmallLobbyFPv(void* p);

void TFontSmallLobby__sub_801D67C8(void* p);
void TFontSmallLobby__sub_801D6834(void* p);
void TFontSmallLobby__sub_801D687C(void* p);
void TFontSmallLobby__sub_801D68C4(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void*);
int TObjPlayer__sub_8001960C(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int reset_fields__15TFontSmallLobbyFPv(void*);

void send_state__15TFontSmallLobbyFPv(void* p) { bswap_fields__15TFontSmallLobbyFPv(p); TLobby__send_and_handle_60(p); }
void* handle_photon_blast_ready__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }

}
