#include "types.h"

extern "C" {

void TRecvGenerateID__sub_801DFBC4(void* p);
void bswap__15TRecvGenerateIDFv(s32 arg0);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
s32 bswap__13packet_headerFv();

void bswap__15TRecvGenerateIDFv(s32 arg0) {
    bswap__13packet_headerFv();
    bswap_32__FPUl((void*)(arg0 + 4));
    TRecvGenerateID__sub_801DFBC4((void*)(arg0 + 8));
}

void TRecvGenerateID__sub_801DFBC4(void* p) { bswap_16__FPUs((char*)p + 0x2); bswap_32__FPUl((void*)((char*)p + 0x4)); }

}
