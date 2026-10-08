#include "types.h"

extern "C" {

int forward_npc_enemy__6TLobbyFPv(void* p);
int TLobby__sub_802D7A0C(void* p);
int reset_all_anim_fields__12TObjNpcEnemyFv(void*);

int forward_npc_enemy__6TLobbyFPv(void* p) { return reset_all_anim_fields__12TObjNpcEnemyFv(p); }
int TLobby__sub_802D7A0C(void* p) { return reset_all_anim_fields__12TObjNpcEnemyFv(p); }

}
