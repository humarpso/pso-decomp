#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int fn_80105A60(void*);
void fn_80105B5C(void* p);

void fn_80105B5C(void* p) { fn_80105A60(p); bswap_32__FPUl((char*)p + 0x18); bswap_32__FPUl((char*)p + 0x1c); bswap_32__FPUl((char*)p + 0x20); bswap_32__FPUl((char*)p + 0x24); }

}
