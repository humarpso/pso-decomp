#include "types.h"

extern "C" {

void bswap_fields__6TLobbyFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void bswap_fields__6TLobbyFPv(void* p) { bswap_16__FPUs((char*)p + 0x2); bswap_32__FPUl((char*)p + 0x4); }

}
