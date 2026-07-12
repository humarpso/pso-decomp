#include "types.h"

extern "C" {

void TLobby__sub_801E4650(void* p);
int TObjPlayer__sub_8001960C(void*);
int bswap_16__FPUs(void*);

void TLobby__sub_801E4650(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
