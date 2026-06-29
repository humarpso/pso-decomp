#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int fn_8001960C(void*);
void TObjPlayer__sub_801C1210(void* p);

void TObjPlayer__sub_801C1210(void* p) { fn_8001960C(p); bswap_32__FPUl((char*)p + 0x4); { int i; for (i = 0; i < 30; i++) { bswap_32__FPUl((char*)p + 0x8 + i * 4); } } }

}
