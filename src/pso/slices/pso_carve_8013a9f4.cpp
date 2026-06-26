#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
void fn_8013A9F4(void* p);

void fn_8013A9F4(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); }

}
