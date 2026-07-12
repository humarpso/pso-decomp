#include "types.h"

extern "C" {

int TLobby__sub_800C80FC(void* p);
int TObjPlayer__sub_8001960C(void*);

int TLobby__sub_800C80FC(void* p) { return TObjPlayer__sub_8001960C(p); }

}
