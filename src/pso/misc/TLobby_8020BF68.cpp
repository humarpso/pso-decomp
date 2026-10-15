#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

int serialize_area_set_flags(void* p);
int TLobby__sub_8020B47C(void*);
int TLobby__sub_8020B5CC(void*);

int send_6x76_set_entity_set_flags(void);
int TLobby::sync_game_state() { return TLobby__sub_8020B47C(this); }

}
