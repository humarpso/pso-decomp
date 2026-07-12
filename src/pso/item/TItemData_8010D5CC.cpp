#include "types.h"

extern "C" {

void bswap_fields__9TItemDataFPv(void* p);
int bswap_16__FPUs(void*);

void bswap_fields__9TItemDataFPv(void* p) { bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); }

}
