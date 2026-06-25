#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int bswap__13packet_headerFv(void*);
void fn_801DEEEC(void* p);
int fn_801DEF5C(void* p);
int bswap__13packet_headerFv(void*);

void fn_801DEEEC(void* p) { bswap__13packet_headerFv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); { int i; for (i = 0; i < 8; i++) { bswap_32__FPUl((char*)p + 0xc + i * 4); } } }
int fn_801DEF5C(void* p) { return bswap__13packet_headerFv(p); }

}
