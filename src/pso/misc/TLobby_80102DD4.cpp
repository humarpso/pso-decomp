#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 fn_8010319C(u8 *arg0);
}

extern "C" {

void TItem__sub_801031C0(void* p);
void TLobby__sub_801030EC(u8 *arg0);
void bswap_pick_up_item_request__6TLobbyFi(s32 arg0);
s32 drop_stacked_item_passthrough__6TLobbyFi(s32 arg0);
void set_item_count__6TLobbyFPvs(void* p, s16 v);
s32 TLobby__sub_8010314C();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFPv();

void bswap_pick_up_item_request__6TLobbyFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
}

void TLobby__sub_801030EC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s16 *, 8) = 0;
    M2C_FIELD(arg0, s16 *, 0xA) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x5A;
    M2C_FIELD(arg0, s8 *, 1) = 3;
}

void set_item_count__6TLobbyFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x1c) = v; }
s32 drop_stacked_item_passthrough__6TLobbyFi(s32 arg0) {
    TLobby__sub_8010314C();
    return arg0;
}

u8 fn_8010319C(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, u16 *, 0x94) != 0xFFFF);
}

void TItem__sub_801031C0(void* p) { *(s32*)((char*)p + 0x0) = 4; }

}
