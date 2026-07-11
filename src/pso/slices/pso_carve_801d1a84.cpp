#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int TObjPlayer__sub_8001960C(void*);
int TObjPlayer__sub_801D28DC(void*);
void TObjPlayer__sub_801D1A84(void* p);

void TObjPlayer__sub_801D1A84(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); TObjPlayer__sub_801D28DC((char*)p + 0x8); }

}
