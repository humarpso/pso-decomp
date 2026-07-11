#include "types.h"

extern "C" {

int TLobby__sub_801E8228(void* p);
int TLobby__sub_801E8248(void* p);
int TLobby__sub_801E8268(void* p);
int destroy_singleton__6TLobbyFv(void*);
int init_graph__6TLobbyFv(void*);
int get_selected_slot__6TLobbyFv(void*);

int TLobby__sub_801E8228(void* p) { return get_selected_slot__6TLobbyFv(p); }
int TLobby__sub_801E8248(void* p) { return destroy_singleton__6TLobbyFv(p); }
int TLobby__sub_801E8268(void* p) { return init_graph__6TLobbyFv(p); }

}
