#include "types.h"

extern "C" {

int TLobby__sub_801030EC(void);
void bswap_pick_up_item_request__6TLobbyFi(s32 arg0);
s32 TLobby__sub_8010314C();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFPv();
void set_item_count__6TLobbyFPvs(void* p, s16 v);

void bswap_pick_up_item_request__6TLobbyFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
}

int TLobby__sub_801030EC(void) { return 0; }

}
