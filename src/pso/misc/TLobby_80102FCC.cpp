#include "types.h"

extern "C" {

s32 TObjPlayer__sub_8001960C();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 TLobby__sub_8010314C();
void TLobby__sub_80103114(void* p, s16 v);

void TLobby__sub_80102FCC(s32 arg0) {
    TObjPlayer__sub_8001960C();
    bswap_16__FPUs(arg0 + 4);
    bswap_16__FPUs(arg0 + 6);
    bswap_32__FPUl(arg0 + 8);
}

}
