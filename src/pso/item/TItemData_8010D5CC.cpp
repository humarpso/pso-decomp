#include "types.h"

extern "C" {

void TItemData__sub_8010D5CC(void* p);
int bswap_16__FPUs(void*);

void TItemData__sub_8010D5CC(void* p) { bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); }

}
