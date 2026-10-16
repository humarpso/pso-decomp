#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int is_same_target__11TMainCursorFPvPv(void* a0 = 0, void* a1 = 0);
void copy_target_record__11TMainCursorFPvPv(u8 *arg0, u8 *arg1);
void store_sorted_record__11TMainCursorFPvPvPv(void* p, void* a1, void* a2);
int TMainCursor__sub_8013E310(void* p);
int TMainCursor__sub_8013E338(void* p);
int TMainCursor__sub_8013E358(void* p);
u16 TMainCursor__sub_8013E4A0(void* p);
s16 TMainCursor__sub_8013E570(void* p);
void TMainCursor__sub_8013E694(void* p, s16 v);
int TMainCursor__sub_8013E6E0(void* p);
void TMainCursor__sub_8013E724(void* p, f32 v);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
int set_target_index_at_60__11TMainCursorFPvPv(void* p);
s32 get_body_exclude_mask__11TMainCursorFPv(void* p);
s32 get_body_include_mask__11TMainCursorFPv(void* p);
s32 get_actor_exclude_mask__11TMainCursorFPv(void* p);
s32 get_actor_include_mask__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E8A0(void* p);
int TMainCursor__sub_8013E900(void* p);
s16 TMainCursor__sub_8013E920(void* p);
void TMainCursor__sub_8013E928(void* p, s16 v);
void TMainCursor__sub_8013E930(void* p, s16 v);
int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
s32 TLockOnCursor__sub_8013EB2C(void* p);
int test_flags_any(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int is_channel_active__11TMainCursorFv(void*);
int get_enabled__11TMainCursorFv(void*);
int get_type__11TMainCursorFv(void*);
int set_slot__20TWindowActionPaletteFUc(void*);
int set_mode__20TWindowActionPaletteFUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFs(void*, void* a1 = 0);

void reset_target__11TMainCursorFi(s32 arg0) {
    init__6gc_tagFv();
    set_target_index__11TMainCursorFs((void*)(arg0), (void*)(0xFFFF));
    set_target_id__11TMainCursorFPvs((void*)(arg0), 0);
}

}

#include "types.h"

struct Obj_8013E800 { u16 a; };

extern "C" {
void TMainCursor__sub_8013E800(Obj_8013E800 *self);
}

extern "C" {

void TMainCursor__sub_8013E800(Obj_8013E800 *self) {
    self->a = 0xffff;
}

}

#include "types.h"

extern "C" {

s32 get_body_exclude_mask__11TMainCursorFPv(void* p) { return *(s32*)((char*)p + 0xc); }
s32 get_body_include_mask__11TMainCursorFPv(void* p) { return *(s32*)((char*)p + 0x8); }
s32 get_actor_exclude_mask__11TMainCursorFPv(void* p) { return *(s32*)((char*)p + 0x14); }
s32 get_actor_include_mask__11TMainCursorFPv(void* p) { return *(s32*)((char*)p + 0x10); }
void store_sorted_record__11TMainCursorFPvPvPv(void* p, void* a1, void* a2) { ((int (*)(void *))copy_target_record__11TMainCursorFPvPv)(a2); }

}

#include "types.h"

struct Rec_8013E870 { u8 pad[0x124]; };

struct Obj_8013E870 { u8 pad[0x5c]; Rec_8013E870 recs[1]; };

extern "C" {
void init_slot__11TMainCursorFPvi(Obj_8013E870 *self, s32 i);
}

extern "C" {

void copy_target_record__11TMainCursorFPvPv(u8 *arg0, u8 *arg1) {
    *(u16 *)((s8 *)arg0 + 0) = (u16) *(u16 *)((s8 *)arg1 + 0);
    *(s16 *)((s8 *)arg0 + 2) = (s16) *(s16 *)((s8 *)arg1 + 2);
    *(f32 *)((s8 *)arg0 + 4) = (f32) *(f32 *)((s8 *)arg1 + 4);
}
void init_slot__11TMainCursorFPvi(Obj_8013E870 *self, s32 i) {
    TMainCursor__sub_8013E8A0((void*)(&self->recs[i]));
}

}

#include "types.h"
#include "pso/misc/TMainCursor.h"
#include "pso/TAdRicoRing.h"
#include "pso/misc/TLockOnCursor.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TMainCursor__sub_8013E970(u8 *arg0, s16 arg1, s16 arg2, s16 arg3);

int TMainCursor__sub_8013E8A0(void* p) { return TObjPlayer__sub_8013DEF8(p); }
int TMainCursor::get_selected_entry() { return is_channel_active__11TMainCursorFv(this); }
int TMainCursor::get_active() { return get_enabled__11TMainCursorFv(this); }
int TMainCursor__sub_8013E900(void* p) { return get_type__11TMainCursorFv(p); }
s16 TMainCursor__sub_8013E920(void* p) { return *(s16*)((char*)p + 0x2); }
void TMainCursor__sub_8013E928(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void TMainCursor__sub_8013E930(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
u16 TMainCursor::get_target_id() { return *(u16*)((char*)this + 0x20); }
int TMainCursor::is_cursor_clear() { return (test_flags_any((char*)this + 0x1c, 1)) == 0; }

void TMainCursor__sub_8013E970(u8 *arg0, s16 arg1, s16 arg2, s16 arg3) {
    *(s16 *)((s8 *)arg0 + 0) = arg1;
    *(s16 *)((s8 *)arg0 + 2) = arg2;
    *(s16 *)((s8 *)arg0 + 4) = arg3;
}

void TMainCursor::set_color_mode(s32 v) { *(s32*)((char*)this + 0x10) = v; }
void TMainCursor::set_color(s32 v) { *(s32*)((char*)this + 0x8) = v; }
void TMainCursor::set_field_0c(s32 v) { *(s32*)((char*)this + 0xc) = v; }
void TMainCursor::set_flags(s32 v) { *(s32*)((char*)this + 0x14) = v; }

int TMainCursor__sub_8013E9A0(void* p) { return TMainCursor__sub_8013DFC4(p); }
int TMainCursor__sub_8013E9C0(void* p) { return set_slot__20TWindowActionPaletteFUc(p); }
int TMainCursor__sub_8013E9E0(void* p) { return set_mode__20TWindowActionPaletteFUc(p); }
void TMainCursor__sub_8013EA00(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

}
