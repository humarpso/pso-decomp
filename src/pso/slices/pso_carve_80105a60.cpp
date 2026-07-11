#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int TObjPlayer__sub_8001960C(void*);
void fn_80105A60(void* p);

void fn_80105A60(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x10); bswap_16__FPUs((char*)p + 0x12); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

}
