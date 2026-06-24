#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
void fn_8020A568(void* p);

void fn_8020A568(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

}
