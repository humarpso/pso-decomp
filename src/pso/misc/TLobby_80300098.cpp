#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

void TLobby__sub_803000A0(void);
void set_player_count__6TLobbyFi(int a0);
void TLobby__sub_802930A8(void);

void TLobby::set_ad_field(s32 v) { *(s32*)((char*)this + 0xa4) = v; }
void TLobby__sub_803000A0(void) { TLobby__sub_802930A8(); set_player_count__6TLobbyFi(0); }

}
