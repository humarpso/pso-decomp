#include "types.h"
#include "pso/TPlyGuildCardTag.h"

extern "C" {

void bswap__8TUserAnsFv(s32 arg0);
s32 bswap_32__FPUl(s32);
s32 bswap__13packet_headerFv();
s32 bswap__21TPlyMeetUserExtensionFv(s32);
s32 bswap__9TRecvPortFv(s32);

void bswap__8TUserAnsFv(s32 arg0) {
    bswap__13packet_headerFv();
    ((TPlyGuildCardTag *)(arg0 + 4))->bswap();
    bswap_32__FPUl(arg0 + 0xC);
    bswap__9TRecvPortFv(arg0 + 0x10);
    bswap__21TPlyMeetUserExtensionFv(arg0 + 0x60);
}

}
