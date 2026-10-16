#include "types.h"
#include "pso/TPlyGuildCardTag.h"

extern "C" {

void bswap__12TChatMessageFv(s32 arg0);
s32 bswap_32__FPUl(s32);
s32 bswap__13packet_headerFv();

void bswap__12TChatMessageFv(s32 arg0) {
    bswap__13packet_headerFv();
    ((TPlyGuildCardTag *)(arg0 + 4))->bswap();
    bswap_32__FPUl(arg0 + 0x1C);
}

}
