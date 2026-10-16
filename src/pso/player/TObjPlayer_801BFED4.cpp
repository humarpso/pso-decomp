#include "types.h"
#include "pso/misc/TUnk_804DDD28.h"
#include "pso/boss/TBoss7Crawfish.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TLobby.h"

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
int clear_id__10TObjPlayerFv(void*);
int get_valid_child__6TLobbyFv(void*);
s32 init_forward__10TObjPlayerFv();
s32 init_gc_tag(void *);

void TObjPlayer__sub_801BFED4(void* p) { *(s32*)((char*)p + 0x4) = -1; }
s32 TObjPlayer::setup_state() {
    s32 arg0 = (s32)this;
    init_forward__10TObjPlayerFv();
    setup_state_helper();
    return arg0;
}
int TObjPlayer::setup_state_helper() { return clear_id__10TObjPlayerFv(this); }

extern s32 lbl_804C3E50[];

u8 *TObjPlayer::init_subobject() {
    u8 *arg0 = (u8 *)this;
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

s16 TBoss7Crawfish::get_floor() { return *(s16*)((char*)this + 0xb8); }
int TUnk_804DDD28::vfunc_77() { return 0; }
int TUnk_804DDD28::vfunc_10() { return 0; }
int TUnk_804DDD28::vfunc_5() { return 0; }
int TObjPlayer::sub_802a7290_fwd() { return get_valid_child__6TLobbyFv(this); }
int TObjPlayer::is_handle_valid() { return TLobby::validate_handle((s32 *)this); }

}
