#include "types.h"

extern "C" {

s32 TObjPlayer__sub_8001960C();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 TLobby__sub_8010314C();
void TLobby__sub_80103114(void* p, s16 v);

void TLobby__sub_80103114(void* p, s16 v) { *(s16*)((char*)p + 0x1c) = v; }
s32 TLobby__sub_8010311C(s32 arg0) {
    TLobby__sub_8010314C();
    return arg0;
}

}
