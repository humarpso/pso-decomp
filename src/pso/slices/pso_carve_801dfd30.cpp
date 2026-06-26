#include "types.h"

extern "C" {

int bswap__13packet_headerFv(void*);
int bswap__16TPlyGuildCardTagFv(void*);
void fn_801DFD30(void* p);

void fn_801DFD30(void* p) { bswap__13packet_headerFv(p); bswap__16TPlyGuildCardTagFv((char*)p + 0x4); }

}
