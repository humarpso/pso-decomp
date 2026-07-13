#include "types.h"

extern "C" {

void bswap_lobby_entry__16TPlyGuildCardTagFPv(void* p);
int bswap_32__FPUl(void*);
int bswap__16TPlyGuildCardTagFv(void*);

void bswap_lobby_entry__16TPlyGuildCardTagFPv(void* p) { bswap__16TPlyGuildCardTagFv(p); bswap_32__FPUl((char*)p + 0x8); }

}
