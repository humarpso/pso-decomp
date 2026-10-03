#include "types.h"

struct Rec_8013EB6C { u8 pad[0x124]; };

struct Obj_8013EB6C { u8 pad[0x5c]; Rec_8013EB6C recs[1]; };

extern "C" {
Rec_8013EB6C *TLockOnCursor__sub_8013EB6C(Obj_8013EB6C *self, s32 i);
}

extern "C" {

s32 TLockOnCursor__sub_8013EB2C(void* p);
int TLockOnCursor__sub_8013EB34(void);
s32 get_target__13TLockOnCursorFPv(void* p);
int is_bit1_set__13TLockOnCursorFPv(void* p);
int is_inactive__13TLockOnCursorFPv(void* p);
int render_part__13TLockOnCursorFPv(void* p);
int set_flag_8_bit0__13TLockOnCursorFPv(void* p);
int test_flag_1_at_8__13TLockOnCursorFPv(void* p);
void update_cursor_pos__13TLockOnCursorFPv(void* p);
int update_ring__13TLockOnCursorFPv(void* p);
int update_ring_sub__13TLockOnCursorFPv(void* p);
void TLockOnCursor__sub_8013EB80(void* p);
void TLockOnCursor__sub_8013EB8C(void* p);
s32 TLockOnCursor__sub_8013EBBC(void* p);
s32 TLockOnCursor__sub_8013EBE8(void* p);
s32 TLockOnCursor__sub_8013EC14(void* p);
int TMainCursor__sub_8013B2A4(void*);
int TMainCursor__sub_8013DF08(void*);
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
int TMainCursor__sub_8013E75C(void* p);
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
int TMainCursor__sub_8013E854(void* a0 = 0);
int TMainCursor__sub_8013E8A0(void* p);
int TMainCursor__sub_8013E900(void* p);
s16 TMainCursor__sub_8013E920(void* p);
void TMainCursor__sub_8013E928(void* p, s16 v);
void TMainCursor__sub_8013E930(void* p, s16 v);
int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
int TObjPlayer__sub_8001BEF8(void*, int);
int TObjPlayer__sub_8013DEF8(void*);
s32 __dl__FPv(void* a0 = 0);
int check_field_24__11TMainCursorFPv(void* p);
int check_flag_1__11TMainCursorFPv(void* p);
int check_flag_4__11TMainCursorFPv(void* p);
s32 cleanup_field_3c__13TLockOnCursorFPv(void* p);
s32 cleanup_field__13TLockOnCursorFPv(void* p);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int forward_13E338_at_60__11TMainCursorFPv(void* p);
s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
int get_action_palette__11TMainCursorFPv(void* p);
int get_active__11TMainCursorFPv(void* p);
int get_enabled__11TMainCursorFPv(void*);
u16 get_id__11TMainCursorFPv(void* p);
void* get_list__11TMainCursorFPv(void* p);
u16 get_render_flag__11TMainCursorFPv(void* p);
int get_selected_entry__11TMainCursorFPv(void* p);
u16 get_target_id__11TMainCursorFPv(void* p);
int get_type__11TMainCursorFPv(void*);
s32 init__6gc_tagFv();
int init_field_60__11TMainCursorFPv(void* p);
int init_render_flags__11TMainCursorFPv(void* p);
int is_cursor_clear__11TMainCursorFPv(void* p);
u8 is_position_moved__11TMainCursorFPv(void* p);
s32 release_target__13TLockOnCursorFPv(void* p);
void set_color__11TMainCursorFPvi(void* p, s32 v);
void set_color_mode__11TMainCursorFPvi(void* p, s32 v);
void set_field_0c__11TMainCursorFPvi(void* p, s32 v);
int set_flags__10TObjPlayerFPvUi(void*, int);
void set_flags__11TMainCursorFPvi(void* p, s32 v);
int set_mode__20TWindowActionPaletteFPvUc(void*);
void set_offset_y__11TMainCursorFPvs(void* p, s16 a1);
int set_slot__20TWindowActionPaletteFPvUc(void*);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);
int test_flag_2_at_20__11TMainCursorFPv(void* p);
int update__11TMainCursorFPv(void* p);
int update_action_palette__11TMainCursorFPv(void* p);
int update_sub_60__11TMainCursorFPv(void* p);
int update_target_sub__11TMainCursorFPv(void* p);

int render_part__13TLockOnCursorFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x8, 2); }
void update_cursor_pos__13TLockOnCursorFPv(void* p) { is_same_target__11TMainCursorFPvPv((char*)p + 0xc, (char*)p + 0x14); }
int set_flag_8_bit0__13TLockOnCursorFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x8, 1); }
int update_ring__13TLockOnCursorFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x8, 1); }
int is_bit1_set__13TLockOnCursorFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x8, 2); }
int is_inactive__13TLockOnCursorFPv(void* p) { return (TObjPlayer__sub_8001BEF8((char*)p + 0x1c, 2)) == 0; }
int update_ring_sub__13TLockOnCursorFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x8, 2); }
s32 TLockOnCursor__sub_8013EB2C(void* p) { return *(s32*)((char*)p + 0x4); }

    extern int TLockOnCursor__data_805D5648;
int TLockOnCursor__sub_8013EB34(void) {  return TLockOnCursor__data_805D5648; }

int test_flag_1_at_8__13TLockOnCursorFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x8, 1); }
s32 get_target__13TLockOnCursorFPv(void* p) { return *(s32*)((char*)p + 0x0); }
Rec_8013EB6C *TLockOnCursor__sub_8013EB6C(Obj_8013EB6C *self, s32 i) {
    return &self->recs[i];
}

}
