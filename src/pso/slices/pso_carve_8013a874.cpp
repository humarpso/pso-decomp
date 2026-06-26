#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
void fn_8013A874(void* p);

void fn_8013A874(void* p) { bswap_16__FPUs((char*)p + 0x2); bswap_32__FPUl((char*)p + 0x4); }

}
