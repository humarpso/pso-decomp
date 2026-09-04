#include "types.h"

extern "C" {

void TItem__sub_801031C0(void* p);
s32 drop_stacked_item_passthrough__6TLobbyFi(s32 arg0);
int fn_8010319C(void);
void set_item_count__6TLobbyFPvs(void* p, s16 v);
s32 TLobby__sub_8010314C();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFPv();

void set_item_count__6TLobbyFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x1c) = v; }
s32 drop_stacked_item_passthrough__6TLobbyFi(s32 arg0) {
    TLobby__sub_8010314C();
    return arg0;
}

int fn_8010319C(void) { return 0; }

void TItem__sub_801031C0(void* p) { *(s32*)((char*)p + 0x0) = 4; }

}
