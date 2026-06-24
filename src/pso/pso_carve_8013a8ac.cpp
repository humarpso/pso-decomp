#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
void fn_8013A8AC(void* p);

void fn_8013A8AC(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

}
