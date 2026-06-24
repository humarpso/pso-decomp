#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int bswap__16TPlyGuildCardTagFv(void*);
void fn_801E0284(void* p);

void fn_801E0284(void* p) { bswap__16TPlyGuildCardTagFv(p); bswap_32__FPUl((char*)p + 0x8); }

}
