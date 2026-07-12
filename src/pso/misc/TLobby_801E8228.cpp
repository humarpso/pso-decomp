#include "types.h"

extern "C" {

int get_selected_slot__6TLobbyFPv(void* p);
int destroy__6TLobbyFPv(void* p);
int init_graph__6TLobbyFPv(void* p);
int destroy_singleton__6TLobbyFv(void*);
int init_graph__6TLobbyFv(void*);
int get_selected_slot__6TLobbyFv(void*);

int get_selected_slot__6TLobbyFPv(void* p) { return get_selected_slot__6TLobbyFv(p); }
int destroy__6TLobbyFPv(void* p) { return destroy_singleton__6TLobbyFv(p); }
int init_graph__6TLobbyFPv(void* p) { return init_graph__6TLobbyFv(p); }

}
