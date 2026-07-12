#include "types.h"

extern "C" {

void update_lobbies_and_events__6TLobbyFPv(void* p);
int update_all_lobbies__6TLobbyFv(void*);
int update_event_unlocks__12TODoorVoShipFv(void*);

void update_lobbies_and_events__6TLobbyFPv(void* p) { update_all_lobbies__6TLobbyFv(p); update_event_unlocks__12TODoorVoShipFv(p); }

}
