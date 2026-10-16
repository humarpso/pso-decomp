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
int is_same_target__11TMainCursorFPvPv(void* a0 = 0, void* a1 = 0);
int test_flags_any(void*, int);
int clear_flags__11TAdRicoRingFUl(void*, int);
int set_flags__10TObjPlayerFUl(void*, int);

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
s32 TLockOnCursor::get_target() { return *(s32 *)&this->m_name; }
Rec_8013EB6C *TLockOnCursor__sub_8013EB6C(Obj_8013EB6C *self, s32 i) {
    return &self->recs[i];
}

}
