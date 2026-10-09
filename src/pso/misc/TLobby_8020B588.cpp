#include "types.h"

extern "C" {

void bswap_4_words__6TLobbyFPv(void* p);
int bswap_32__FPUl(void*);

void bswap_4_words__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

}
