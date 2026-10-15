#include "types.h"

extern "C" {

void bswap__9TRecvPortFv(s32 arg0);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 bswap__13packet_headerFv();

void bswap__9TRecvPortFv(s32 arg0) {
    bswap__13packet_headerFv();
    bswap_32__FPUl(arg0 + 4);
    bswap_16__FPUs(arg0 + 8);
}

}
