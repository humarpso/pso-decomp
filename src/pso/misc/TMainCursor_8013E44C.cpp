#include "types.h"

extern "C" {
u16 get_id__11TMainCursorFv(void* p);
int TMainCursor__sub_8013E40C(u8 *arg0, u16 arg1);
int get_enabled__11TMainCursorFv(void*);
int get_type__11TMainCursorFv(void*);
int is_same_target__11TMainCursorFPvPv(void *a, void *b);
}

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
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
int set_flags__10TObjPlayerFUl(void*, int);
int test_flags_any(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DFC4(void*);

int is_same_target__11TMainCursorFPvPv(void *a, void *b) {
    u8 result = 0;
    if (TMainCursor__sub_8013E40C((u8 *)a, get_id__11TMainCursorFv((void*)(b))) != 0) {
        if (((u8)get_type__11TMainCursorFv((void*)(a))) == ((u8)get_type__11TMainCursorFv((void*)(b)))) {
            if (((u8)get_enabled__11TMainCursorFv((void*)(a))) == ((u8)get_enabled__11TMainCursorFv((void*)(b)))) {
                result = 1;
            }
        }
    }
    return result;
}

int TMainCursor__sub_8013E40C(u8 *arg0, u16 arg1) {
    return (u8) (arg1 == get_id__11TMainCursorFv((void*)(arg0)));
}

}

#include "types.h"
#include "pso/misc/TMainCursor.h"
#include "pso/TAdRicoRing.h"
#include "pso/misc/TLockOnCursor.h"
#include "pso/misc/TWindowActionPalette.h"

extern "C" {

void*TMainCursor::get_list() { return (char*)this + 0xc; }
int TMainCursor::update_target_sub() { return set_flags__10TObjPlayerFUl((char*)this + 0x20, 1); }

}
