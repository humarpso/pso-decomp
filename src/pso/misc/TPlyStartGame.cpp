#include "types.h"

extern "C" {

void bswap__13TPlyStartGameFPv(void* p);
int bswap_32__FPUl(void*);
int bswap__16TPlyGuildCardTagFv(void*);

void bswap__13TPlyStartGameFPv(void* p) { bswap__16TPlyGuildCardTagFv(p); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

}
