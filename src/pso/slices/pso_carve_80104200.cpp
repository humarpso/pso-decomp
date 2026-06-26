#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int bswap__9TItemDataFv(void*);
void fn_80104200(void* p);

void fn_80104200(void* p) { bswap_16__FPUs((char*)p + 0x2); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); bswap__9TItemDataFv((char*)p + 0x10); }

}
