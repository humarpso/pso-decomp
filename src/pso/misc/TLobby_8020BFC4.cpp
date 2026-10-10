#include "types.h"

extern "C" {

int sync_game_state__6TLobbyFPv(void* p);
int serialize_area_set_flags(void* p);
int TLobby__sub_8020B47C(void*);
int TLobby__sub_8020B5CC(void*);

int send_6x76_set_entity_set_flags(void);

int serialize_area_set_flags(void* p) { return TLobby__sub_8020B5CC(p); }

}
