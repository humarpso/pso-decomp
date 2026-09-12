#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 fn_8010319C(u8 *arg0);
void init__9TItemDataFv(void *);
extern const f32 lbl_805DAA88;
void TLobby__sub_8010314C(u8 *arg0);
s32 __ct__13TItemAttackerFv(void *, void *, void *, s32, void *);
M2C_UNK spawn_item_timer__13TItemAttackerFiii(int, void *, void *);
s32 __nw__7TObjectFUl(int);
void TItemAttacker__sub_8010349C(u32);
void TObjPlayer__sub_801032CC(s32 arg0, u32 arg1, s32 arg2, u8 *arg3);
}

extern "C" {

void TItem__sub_801031C0(void* p);
void TLobby__sub_801030EC(u8 *arg0);
void bswap_pick_up_item_request__6TLobbyFi(s32 arg0);
s32 drop_stacked_item_passthrough__6TLobbyFi(s32 arg0);
void set_item_count__6TLobbyFPvs(void* p, s16 v);
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
    TLobby__sub_8010314C((u8 *)(arg0));
    return arg0;
}

void TLobby__sub_8010314C(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s8 *, 0) = -1;
    M2C_FIELD(arg0, s16 *, 2) = -1;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_805DAA88;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DAA88;
    M2C_FIELD(arg0, s16 *, 0xC) = -1;
    M2C_FIELD(arg0, s16 *, 0xE) = 0;
    init__9TItemDataFv(arg0 + 0x10);
}

u8 fn_8010319C(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, u16 *, 0x94) != 0xFFFF);
}

void TItem__sub_801031C0(void* p) { *(s32*)((char*)p + 0x0) = 4; }
void TObjPlayer__sub_801032CC(s32 arg0, u32 arg1, s32 arg2, u8 *arg3) {
    s32 var_r0;
    if ((arg0 != 0) && (arg3 != NULL) && (arg1 != 0U) && ((u16) M2C_FIELD(arg3, u16 *, 0xC) != 65535U) && ((u16) M2C_FIELD(arg3, u16 *, 0xE) != 65535U)) {
        var_r0 = __nw__7TObjectFUl((int) (0x50));
        if (var_r0 != 0) {
            var_r0 = __ct__13TItemAttackerFv((void*)var_r0, (void *) (arg0), (void *) (arg1), arg2, (void *) (arg3));
        }
        spawn_item_timer__13TItemAttackerFiii((int) (var_r0), (void *) (&TItemAttacker__sub_8010349C), (void *) (arg2));
    }
}

}
