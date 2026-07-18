#include "types.h"

extern "C" {

int resolve_matching_object__6TLobbyFPv(void* p);
int get_object_count__6TLobbyFPv(void* p);
int get_matching_object__6TLobbyFv(void*);
int get_object_count__6TLobbyFv(void*);

int resolve_matching_object__6TLobbyFPv(void* p) { return get_matching_object__6TLobbyFv(p); }
int get_object_count__6TLobbyFPv(void* p) { return get_object_count__6TLobbyFv(p); }

}
