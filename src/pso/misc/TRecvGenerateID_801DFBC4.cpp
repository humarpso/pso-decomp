#include "types.h"

extern "C" {

void TRecvGenerateID__sub_801DFBC4(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void TRecvGenerateID__sub_801DFBC4(void* p) { bswap_16__FPUs((char*)p + 0x2); bswap_32__FPUl((char*)p + 0x4); }

}
