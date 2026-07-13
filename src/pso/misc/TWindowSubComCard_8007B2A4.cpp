#include "types.h"

extern "C" {

int TLobby__sub_8007B458(void*, void*);
int clear(void* p);
int memset(void*, int, int);

void clear_and_init__17TWindowSubComCardFPvPv(void* p, void* a1) { clear(p); TLobby__sub_8007B458(p, a1); }

}
