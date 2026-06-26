#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int fn_8001960C(void*);
void fn_801D15F4(void* p);

void fn_801D15F4(void* p) { fn_8001960C(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); bswap_32__FPUl((char*)p + 0x18); bswap_32__FPUl((char*)p + 0x1c); }

}
