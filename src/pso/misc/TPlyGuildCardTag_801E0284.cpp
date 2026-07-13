#include "types.h"

extern "C" {

void TPlyGuildCardTag__sub_801E0284(void* p);
int bswap_32__FPUl(void*);
int bswap__16TPlyGuildCardTagFv(void*);

void TPlyGuildCardTag__sub_801E0284(void* p) { bswap__16TPlyGuildCardTagFv(p); bswap_32__FPUl((char*)p + 0x8); }

}
