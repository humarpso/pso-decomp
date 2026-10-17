#include "types.h"
#include "pso/misc/TLobby_8020BFC4.h"
#include "pso/misc/TLobby.h"

extern "C" {

int TLobby__sub_8020B5CC(void*);
}

int serialize_area_set_flags(void* p) { return TLobby__sub_8020B5CC(p); }
