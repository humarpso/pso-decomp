#include "types.h"

extern "C" {

s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 TLobby__sub_8010314C();
void TLobby__sub_80103114(void* p, s16 v);

void bswap_pick_up_item_packet__6TLobbyFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_16__FPUs(arg0 + 4);
    bswap_16__FPUs(arg0 + 6);
    bswap_32__FPUl(arg0 + 8);
}

}
