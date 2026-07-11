#include "types.h"

extern "C" {

void TLobby__sub_8020B588(void* p);
int bswap_32__FPUl(void*);

void TLobby__sub_8020B588(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

}
