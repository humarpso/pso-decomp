#include "types.h"

extern "C" {

int TLobby__sub_8007B458(void*, void*);
int clear(void* p);
int memset(void*, int, int);

void TWindowSubComCard__sub_8007B2A4(void* p, void* a1) { clear(p); TLobby__sub_8007B458(p, a1); }

}
