#include "types.h"

extern "C" {

int TLobby__sub_801381D0(void* p);
int TLobby__close_all_windows(void*);

int TLobby__sub_801381D0(void* p) { return TLobby__close_all_windows(p); }

}
