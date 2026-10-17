#include "types.h"
#include "pso/system/byteswap.h"

extern "C" {

void bswap__17TRecvDownloadHeadFv(s32 arg0);
s32 bswap__13packet_headerFv();

void bswap__17TRecvDownloadHeadFv(s32 arg0) {
    bswap__13packet_headerFv();
    bswap_32((u32 *)(arg0 + 0x38));
}

}
