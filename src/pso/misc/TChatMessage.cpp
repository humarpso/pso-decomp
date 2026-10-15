#include "types.h"

extern "C" {

void bswap__12TChatMessageFv(s32 arg0);
s32 bswap_32__FPUl(s32);
s32 bswap__13packet_headerFv();
s32 bswap__16TPlyGuildCardTagFv(s32);

void bswap__12TChatMessageFv(s32 arg0) {
    bswap__13packet_headerFv();
    bswap__16TPlyGuildCardTagFv(arg0 + 4);
    bswap_32__FPUl(arg0 + 0x1C);
}

}
