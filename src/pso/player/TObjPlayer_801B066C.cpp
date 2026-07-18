#include "types.h"

extern "C" {

int TObjPlayer__sub_801B066C(void* p);
int TLobby__sub_801C19D0(void*);

int TObjPlayer__sub_801B066C(void* p) { return TLobby__sub_801C19D0((char*)p + 0x828); }

}
