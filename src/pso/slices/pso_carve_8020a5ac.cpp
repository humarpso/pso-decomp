#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
void fn_8020A5AC(void* p);

void fn_8020A5AC(void* p) { bswap_32__FPUl(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); bswap_16__FPUs((char*)p + 0x12); bswap_32__FPUl((char*)p + 0x14); }

}
