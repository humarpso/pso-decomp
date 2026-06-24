#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int fn_8001960C(void*);
void fn_801C113C(void* p);

void fn_801C113C(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
