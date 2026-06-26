#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
void fn_8020A48C(void* p);

void fn_8020A48C(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_16__FPUs((char*)p + 0x14); bswap_16__FPUs((char*)p + 0x16); bswap_16__FPUs((char*)p + 0x18); bswap_16__FPUs((char*)p + 0x1a); bswap_16__FPUs((char*)p + 0x1c); bswap_16__FPUs((char*)p + 0x1e); }

}
