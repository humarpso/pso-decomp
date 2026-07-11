#include "types.h"

extern "C" {

int TLobby__sub_8020B334(void* p);
int TLobby__sub_8020B354(void* p);
int TLobby__sub_8020E3F0(void*);
int TLobby__sub_8020E3F8(void*);

int TLobby__sub_8020B334(void* p) { return TLobby__sub_8020E3F0(p); }
int TLobby__sub_8020B354(void* p) { return TLobby__sub_8020E3F8(p); }

}
