#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int fn_8001960C(void*);
void TObjPlayer__sub_801C1610(void* p);

void TObjPlayer__sub_801C1610(void* p) { fn_8001960C(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); }

}
