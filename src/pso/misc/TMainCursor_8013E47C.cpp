#include "types.h"
#include "pso/misc/TMainCursor.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int is_same_target__11TMainCursorFPvPv(void* a0 = 0, void* a1 = 0);
int copy_target_record__11TMainCursorFPvPv(void* a0 = 0);
void store_sorted_record__11TMainCursorFPvPvPv(void* p, void* a1, void* a2);
void update_cursor_pos__13TLockOnCursorFv(void* p);
int check_field_24__11TMainCursorFv(void* p);
u16 get_id__11TMainCursorFv(void* p);
int TMainCursor__sub_8013E310(void* p);
int TMainCursor__sub_8013E338(void* p);
int TMainCursor__sub_8013E358(void* p);
void* get_list__11TMainCursorFv(void* p);
int update_target_sub__11TMainCursorFv(void* p);
u16 TMainCursor__sub_8013E4A0(void* p);
s16 TMainCursor__sub_8013E570(void* p);
void set_offset_y__11TMainCursorFs(void* p, s16 a1);
void TMainCursor__sub_8013E694(void* p, s16 v);
int init_field_60__11TMainCursorFv(void* p);
int get_action_palette__11TMainCursorFv(void* p);
int TMainCursor__sub_8013E6E0(void* p);
int update_action_palette__11TMainCursorFv(void* p);
void TMainCursor__sub_8013E724(void* p, f32 v);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
int set_target_index_at_60__11TMainCursorFPvPv(void* p);
s32 get_body_exclude_mask__11TMainCursorFPv(void* p);
s32 get_body_include_mask__11TMainCursorFPv(void* p);
s32 get_actor_exclude_mask__11TMainCursorFPv(void* p);
s32 get_actor_include_mask__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E8A0(void* p);
int get_selected_entry__11TMainCursorFv(void* p);
int get_active__11TMainCursorFv(void* p);
int TMainCursor__sub_8013E900(void* p);
s16 TMainCursor__sub_8013E920(void* p);
void TMainCursor__sub_8013E928(void* p, s16 v);
void TMainCursor__sub_8013E930(void* p, s16 v);
u16 get_target_id__11TMainCursorFv(void* p);
int is_cursor_clear__11TMainCursorFv(void* p);
void set_color_mode__11TMainCursorFl(void* p, s32 v);
void set_color__11TMainCursorFl(void* p, s32 v);
void set_field_0c__11TMainCursorFl(void* p, s32 v);
void set_flags__11TMainCursorFl(void* p, s32 v);
int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
int render_part__13TLockOnCursorFv(void* p);
int set_flag_8_bit0__13TLockOnCursorFv(void* p);
int update_ring__13TLockOnCursorFv(void* p);
int is_bit1_set__13TLockOnCursorFv(void* p);
int is_inactive__13TLockOnCursorFv(void* p);
int update_ring_sub__13TLockOnCursorFv(void* p);
s32 TLockOnCursor__sub_8013EB2C(void* p);
int set_flags__10TObjPlayerFUl(void*, int);
int clear_flags__11TAdRicoRingFUl(void*, int);
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

u16 TMainCursor::get_render_flag() { return TMainCursor__sub_8013E4A0((char*)this + 0x24); }
u16 TMainCursor__sub_8013E4A0(void* p) { return *(u16*)((char*)p + 0x0); }
int TMainCursor::test_flag_2_at_20() { return test_flags_any((char*)this + 0x20, 2); }
int TMainCursor::init_render_flags() { return test_flags_any((char*)this + 0x20, 8); }
int TMainCursor::update() { return test_flags_any((char*)this + 0x20, 4); }
int TMainCursor::check_flag_1() { return test_flags_any((char*)this + 0x20, 1); }
u8 TMainCursor::is_position_moved() { return (u8)(TMainCursor__sub_8013E570((char*)this + 0x60)); }
s16 TMainCursor__sub_8013E570(void* p) { return *(s16*)((char*)p + 0x6); }
int TMainCursor::check_flag_4() { return set_flags__10TObjPlayerFUl((char*)this + 0x20, 4); }
int TMainCursor::forward_13E338_at_60() { return TMainCursor__sub_8013E338((char*)this + 0x60); }
int TMainCursor::update_sub_60() { return TMainCursor__sub_8013E358((char*)this + 0x60); }

}
