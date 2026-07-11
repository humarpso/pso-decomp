#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int TObjPlayer__sub_8001960C(void*);
void fn_8010414C(void* p);

void fn_8010414C(void* p) { TObjPlayer__sub_8001960C(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

}
