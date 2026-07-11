#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int TObjPlayer__sub_8001960C(void*);
void fn_801E4650(void* p);

void fn_801E4650(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
