#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
void fn_801E0900(void* p);

void fn_801E0900(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); }

}
