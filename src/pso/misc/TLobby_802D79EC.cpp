#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

int TLobby__sub_802D7A0C(void* p);
int reset_all_anim_fields__12TObjNpcEnemyFv(void*);

int TLobby::forward_npc_enemy() { return reset_all_anim_fields__12TObjNpcEnemyFv(this); }
int TLobby__sub_802D7A0C(void* p) { return reset_all_anim_fields__12TObjNpcEnemyFv(p); }

}
