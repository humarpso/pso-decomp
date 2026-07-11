#include "types.h"

extern "C" {

int TLobby__sub_801ECFBC(void* p);
int TNpcPlayer__sub_8014DC30(void*);

int TLobby__sub_801ECFBC(void* p) { return TNpcPlayer__sub_8014DC30(p); }

}
