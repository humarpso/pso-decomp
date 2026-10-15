#include "types.h"

extern "C" {

void bswap__13TRecvDownloadFv(s32 arg0);
s32 bswap_32__FPUl(s32);
s32 bswap__13packet_headerFv();

void bswap__13TRecvDownloadFv(s32 arg0) {
    bswap__13packet_headerFv();
    bswap_32__FPUl(arg0 + 0x414);
}

}
