#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int fn_8001960C(void*);
int fn_801D28DC(void*);
void fn_801D1A84(void* p);

void fn_801D1A84(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); fn_801D28DC((char*)p + 0x8); }

}
