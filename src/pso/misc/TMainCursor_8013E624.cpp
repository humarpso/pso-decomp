#include "types.h"

extern "C" {
s32 __dl__FPv(void* a0);
s32 delete_this__11TMainCursorFis(s32 arg0, s16 arg1);
}

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 init__6gc_tagFv();
int is_same_target__11TMainCursorFPvPv(void* a0 = 0, void* a1 = 0);
int copy_target_record__11TMainCursorFPvPv(void* a0 = 0);
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
int set_slot__20TWindowActionPaletteFUc(void*);
int set_mode__20TWindowActionPaletteFUc(void*);
int TMainCursor__sub_8013DFC4(void*);

s32 delete_this__11TMainCursorFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        ((s32)__dl__FPv((void*)(arg0)));
    }
    return arg0;
}

}

#include "types.h"
#include "pso/misc/TMainCursor.h"
#include "pso/TAdRicoRing.h"
#include "pso/misc/TLockOnCursor.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 destroy__11TMainCursorFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        free_if_valid__14TPlyDispConfigFis(arg0, -1);
        if (arg1 > 0) {
            __dl__FPv((void*)(arg0));
        }
    }
    return arg0;
}
void TMainCursor::set_offset_y(s16 a1) { TMainCursor__sub_8013E694((char*)this + 0x24, a1); }
void TMainCursor__sub_8013E694(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
int TMainCursor::init_field_60() { return ((TMainCursor *)((char*)this + 0x60))->get_action_palette(); }
int TMainCursor::get_action_palette() { return set_slot__20TWindowActionPaletteFUc(this); }
int TMainCursor__sub_8013E6E0(void* p) { return ((TMainCursor *)((char*)p + 0x60))->update_action_palette(); }
int TMainCursor::update_action_palette() { return set_mode__20TWindowActionPaletteFUc(this); }
void TMainCursor__sub_8013E724(void* p, f32 v) { *(f32*)((char*)p + 0x2c) = v; }

}
