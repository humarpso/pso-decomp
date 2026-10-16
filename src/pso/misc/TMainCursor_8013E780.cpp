#include "types.h"

extern "C" {
int set_target_index__11TMainCursorFs(void*, void* a1);
int set_target_index_at_60__11TMainCursorFPvPv(void* p, void* _w1);
}

extern "C" {

#include "types.h"

extern "C" {
s32 init_gc_tag();
s32 reset_target__11TMainCursorFi(void *);
s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
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
void sub_8013E724__11TMainCursorFf(void* p, f32 v);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
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
int TMainCursor__sub_8013DFC4(void*);

}

int set_target_index_at_60__11TMainCursorFPvPv(void* p, void* _w1) { return set_target_index__11TMainCursorFs((void*)((char*)p + 0x60), (void*)(_w1)); }

}

#include "types.h"

extern "C" {

#include "types.h"
#include "pso/misc/TMainCursor.h"
#include "pso/TAdRicoRing.h"
#include "pso/misc/TLockOnCursor.h"
#include "pso/misc/TWindowActionPalette.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 TMainCursor::reset() {
    s32 arg0 = (s32)this;
    init_gc_tag();
    reset_target__11TMainCursorFi((void *) (arg0));
    return arg0;
}

}

}
