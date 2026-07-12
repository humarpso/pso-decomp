#include "types.h"

extern "C" {

void TObjInfoCol__sub_80191D80(void* p);
int TObjPlayer__sub_8001960C(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void TObjInfoCol__sub_80191D80(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }

}
