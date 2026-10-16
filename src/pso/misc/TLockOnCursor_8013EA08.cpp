#include "types.h"
#include "pso/misc/TLockOnCursor.h"
#include "pso/misc/TMainCursor.h"
#include "pso/misc/TWindowActionPalette.h"

struct Rec_8013EB6C { u8 pad[0x124]; };

struct Obj_8013EB6C { u8 pad[0x5c]; Rec_8013EB6C recs[1]; };

extern "C" {
Rec_8013EB6C *TLockOnCursor__sub_8013EB6C(Obj_8013EB6C *self, s32 i);
}

extern "C" {

s32 TLockOnCursor__sub_8013EB2C(void* p);
int TLockOnCursor__sub_8013EB34(void);
void TLockOnCursor__sub_8013EB80(void* p);
void TLockOnCursor__sub_8013EB8C(void* p);
s32 TLockOnCursor__sub_8013EBBC(void* p);
s32 TLockOnCursor__sub_8013EBE8(void* p);
s32 TLockOnCursor__sub_8013EC14(void* p);
int TMainCursor__sub_8013B2A4(void*);
int TMainCursor__sub_8013DFC4(void*);
int TMainCursor__sub_8013E310(void* p);
int TMainCursor__sub_8013E338(void* p);
int TMainCursor__sub_8013E358(void* p);
int is_same_target__11TMainCursorFPvPv(void* a0 = 0, void* a1 = 0);
u16 TMainCursor__sub_8013E4A0(void* p);
s16 TMainCursor__sub_8013E570(void* p);
void TMainCursor__sub_8013E694(void* p, s16 v);
int TMainCursor__sub_8013E6E0(void* p);
void TMainCursor__sub_8013E724(void* p, f32 v);
int set_target_index_at_60__11TMainCursorFPvPv(void* p);
s32 get_body_exclude_mask__11TMainCursorFPv(void* p);
s32 get_body_include_mask__11TMainCursorFPv(void* p);
s32 get_actor_exclude_mask__11TMainCursorFPv(void* p);
s32 get_actor_include_mask__11TMainCursorFPv(void* p);
void store_sorted_record__11TMainCursorFPvPvPv(void* p, void* a1, void* a2);
int copy_target_record__11TMainCursorFPvPv(void* a0 = 0);
int TMainCursor__sub_8013E8A0(void* p);
int TMainCursor__sub_8013E900(void* p);
s16 TMainCursor__sub_8013E920(void* p);
void TMainCursor__sub_8013E928(void* p, s16 v);
void TMainCursor__sub_8013E930(void* p, s16 v);
int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
int test_flags_any(void*, int);
int TObjPlayer__sub_8013DEF8(void*);
s32 __dl__FPv(void* a0 = 0);
int clear_flags__11TAdRicoRingFUl(void*, int);
s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 init__6gc_tagFv();
int set_flags__10TObjPlayerFUl(void*, int);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);

int TLockOnCursor::render_part() { return test_flags_any((char*)this + 0x8, 2); }
void TLockOnCursor::update_cursor_pos() { is_same_target__11TMainCursorFPvPv((char*)this + 0xc, (char*)this + 0x14); }
int TLockOnCursor::set_flag_8_bit0() { return set_flags__10TObjPlayerFUl((char*)this + 0x8, 1); }
int TLockOnCursor::update_ring() { return clear_flags__11TAdRicoRingFUl((char*)this + 0x8, 1); }
int TLockOnCursor::is_bit1_set() { return set_flags__10TObjPlayerFUl((char*)this + 0x8, 2); }
int TLockOnCursor::is_inactive() { return (test_flags_any((char*)this + 0x1c, 2)) == 0; }
int TLockOnCursor::update_ring_sub() { return clear_flags__11TAdRicoRingFUl((char*)this + 0x8, 2); }
s32 TLockOnCursor__sub_8013EB2C(void* p) { return *(s32*)((char*)p + 0x4); }

    extern int TLockOnCursor__target_cursor_model;
int TLockOnCursor__sub_8013EB34(void) {  return TLockOnCursor__target_cursor_model; }

int TLockOnCursor::test_flag_1_at_8() { return test_flags_any((char*)this + 0x8, 1); }
s32 TLockOnCursor::get_target() { return *(s32*)((char*)this + 0x0); }
Rec_8013EB6C *TLockOnCursor__sub_8013EB6C(Obj_8013EB6C *self, s32 i) {
    return &self->recs[i];
}

}
