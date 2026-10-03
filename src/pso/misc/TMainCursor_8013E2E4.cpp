#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int is_same_target__11TMainCursorFPvPv(void* a0 = 0, void* a1 = 0);
int copy_target_record__11TMainCursorFPvPv(void* a0 = 0);
void store_sorted_record__11TMainCursorFPvPvPv(void* p, void* a1, void* a2);
void update_cursor_pos__13TLockOnCursorFPv(void* p);
int check_field_24__11TMainCursorFPv(void* p);
u16 get_id__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E310(void* p);
int TMainCursor__sub_8013E338(void* p);
int TMainCursor__sub_8013E358(void* p);
void* get_list__11TMainCursorFPv(void* p);
int update_target_sub__11TMainCursorFPv(void* p);
u16 get_render_flag__11TMainCursorFPv(void* p);
u16 TMainCursor__sub_8013E4A0(void* p);
int test_flag_2_at_20__11TMainCursorFPv(void* p);
int init_render_flags__11TMainCursorFPv(void* p);
int update__11TMainCursorFPv(void* p);
int check_flag_1__11TMainCursorFPv(void* p);
u8 is_position_moved__11TMainCursorFPv(void* p);
s16 TMainCursor__sub_8013E570(void* p);
int check_flag_4__11TMainCursorFPv(void* p);
int forward_13E338_at_60__11TMainCursorFPv(void* p);
int update_sub_60__11TMainCursorFPv(void* p);
void set_offset_y__11TMainCursorFPvs(void* p, s16 a1);
void TMainCursor__sub_8013E694(void* p, s16 v);
int init_field_60__11TMainCursorFPv(void* p);
int get_action_palette__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E6E0(void* p);
int update_action_palette__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E724(void* p, f32 v);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
int TMainCursor__sub_8013E75C(void* p);
s32 get_body_exclude_mask__11TMainCursorFPv(void* p);
s32 get_body_include_mask__11TMainCursorFPv(void* p);
s32 get_actor_exclude_mask__11TMainCursorFPv(void* p);
s32 get_actor_include_mask__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E8A0(void* p);
int get_selected_entry__11TMainCursorFPv(void* p);
int get_active__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E900(void* p);
s16 TMainCursor__sub_8013E920(void* p);
void TMainCursor__sub_8013E928(void* p, s16 v);
void TMainCursor__sub_8013E930(void* p, s16 v);
u16 get_target_id__11TMainCursorFPv(void* p);
int is_cursor_clear__11TMainCursorFPv(void* p);
void set_color_mode__11TMainCursorFPvi(void* p, s32 v);
void set_color__11TMainCursorFPvi(void* p, s32 v);
void set_field_0c__11TMainCursorFPvi(void* p, s32 v);
void set_flags__11TMainCursorFPvi(void* p, s32 v);
int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
int render_part__13TLockOnCursorFPv(void* p);
int set_flag_8_bit0__13TLockOnCursorFPv(void* p);
int update_ring__13TLockOnCursorFPv(void* p);
int is_bit1_set__13TLockOnCursorFPv(void* p);
int is_inactive__13TLockOnCursorFPv(void* p);
int update_ring_sub__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EB2C(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int test_flags_any(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int is_channel_active__11TMainCursorFPv(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

int check_field_24__11TMainCursorFPv(void* p) { return TMainCursor__sub_8013B2A4((char*)p + 0x24); }
u16 get_id__11TMainCursorFPv(void* p) { return *(u16*)((char*)p + 0x4); }
int TMainCursor__sub_8013E310(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x20, 2); }
int TMainCursor__sub_8013E338(void* p) { return get_enabled__11TMainCursorFPv(p); }
int TMainCursor__sub_8013E358(void* p) { return get_type__11TMainCursorFPv(p); }

}
