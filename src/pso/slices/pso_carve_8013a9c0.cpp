#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
void fn_8013A9C0(void* p);

void fn_8013A9C0(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); }

}
