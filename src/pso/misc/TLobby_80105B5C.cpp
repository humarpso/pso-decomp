#include "types.h"

extern "C" {

void bswap_6xa2_fields__6TLobbyFPv(void* p);
int TLobby__sub_80105A60(void*);
int bswap_32__FPUl(void*);

void bswap_6xa2_fields__6TLobbyFPv(void* p) { TLobby__sub_80105A60(p); bswap_32__FPUl((char*)p + 0x18); bswap_32__FPUl((char*)p + 0x1c); bswap_32__FPUl((char*)p + 0x20); bswap_32__FPUl((char*)p + 0x24); }

}
