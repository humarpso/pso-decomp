#include "types.h"

extern "C" {

void set_ad_field__6TLobbyFPvi(void* p, s32 v);
void TLobby__sub_803000A0(void);
int set_player_count__6TLobbyFi(int);
int TLobby__sub_802930A8(void);

void set_ad_field__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xa4) = v; }
void TLobby__sub_803000A0(void) { TLobby__sub_802930A8(); set_player_count__6TLobbyFi(0); }

}
