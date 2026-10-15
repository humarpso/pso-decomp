#include "types.h"

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct ByteBlock_8 { u8 bytes[0x8]; };

extern "C" {
extern const f32 TObjPlayer__data_805DC278;
void TObjPlayer__sub_801BFF80(u8 *arg0);
s32 TFontSmallLobby__sub_801C0228();
u8 *copy_hold_params__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
}

extern "C" {

void TObjPlayer__sub_801BFED4(void* p);
s32 TObjPlayer__sub_801BFFA0(void* p);
int TObjPlayer__sub_801C000C(void);
int TObjPlayer__sub_801C0014(void);
int TObjPlayer__sub_801C001C(void);
s16 get_floor__10TObjPlayerFPv(void* p);
u8 *init_subobject__10TObjPlayerFPv(u8 *arg0);
int is_handle_valid__10TObjPlayerFPv(void* p);
s32 setup_state__10TObjPlayerFi(s32 arg0);
int setup_state_helper__10TObjPlayerFPv(void* p);
int sub_802a7290_fwd__10TObjPlayerFPv(void* p);
int clear_id__10TObjPlayerFPv(void*);
int get_valid_child__6TLobbyFPv(void*);
s32 init_forward__10TObjPlayerFPv();
s32 init_gc_tag(void *);
int validate_handle__6TLobbyFPv(void*);

void TObjPlayer__sub_801BFED4(void* p) { *(s32*)((char*)p + 0x4) = -1; }
s32 setup_state__10TObjPlayerFi(s32 arg0) {
    init_forward__10TObjPlayerFPv();
    setup_state_helper__10TObjPlayerFPv((void*)((void*)(arg0)));
    return arg0;
}
int setup_state_helper__10TObjPlayerFPv(void* p) { return clear_id__10TObjPlayerFPv(p); }

extern s32 lbl_804C3E50[];

u8 *init_subobject__10TObjPlayerFPv(u8 *arg0) {
    *(s32 **)((s8 *)arg0 + 8) = lbl_804C3E50;
    init_gc_tag(arg0 + 4);
    *(s32 *)((s8 *)arg0 + 0) = 0;
    return arg0;
}

void TObjPlayer__sub_801BFF80(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0) = 0;
    *(s32 *)((s8 *)arg0 + 4) = 0;
    *(f32 *)((s8 *)arg0 + 0x10) = (f32) TObjPlayer__data_805DC278;
    *(f32 *)((s8 *)arg0 + 0xC) = (f32) TObjPlayer__data_805DC278;
    *(f32 *)((s8 *)arg0 + 8) = (f32) TObjPlayer__data_805DC278;
}

s32 TObjPlayer__sub_801BFFA0(void* p) { return *(s32*)((char*)p + 0x0); }

u8 *copy_hold_params__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    TFontSmallLobby__sub_801C0228();
    *(s16 *)((s8 *)arg0 + 4) = (s16) *(s16 *)((s8 *)arg1 + 4);
    *(s16 *)((s8 *)arg0 + 6) = (s16) *(s16 *)((s8 *)arg1 + 6);
    *(ByteBlock_8 *)((s32) arg0 + 8) = *(const ByteBlock_8 *)((s32) arg1 + 8);
    *(f32 *)((s8 *)arg0 + 0x10) = (f32) *(f32 *)((s8 *)arg1 + 0x10);
    return arg0;
}

s16 get_floor__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0xb8); }
int TObjPlayer__sub_801C000C(void) { return 0; }
int TObjPlayer__sub_801C0014(void) { return 0; }
int TObjPlayer__sub_801C001C(void) { return 0; }
int sub_802a7290_fwd__10TObjPlayerFPv(void* p) { return get_valid_child__6TLobbyFPv(p); }
int is_handle_valid__10TObjPlayerFPv(void* p) { return validate_handle__6TLobbyFPv(p); }

}
