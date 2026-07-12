#include "types.h"

extern "C" {

void update_if_ready__15TFontSmallLobbyFPv(void* p);

int update_ready__15TFontSmallLobbyFPv(void*);
int TFontSmallLobby__sub_801D67AC(void*);

void update_if_ready__15TFontSmallLobbyFPv(void* p) { if (TFontSmallLobby__sub_801D67AC(p) != 0) { update_ready__15TFontSmallLobbyFPv(p); } }

}
