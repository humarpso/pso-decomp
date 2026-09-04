#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TMainCursor__sub_8013E8A0(void* p);
int TMainCursor__sub_8013E900(void* p);
s16 TMainCursor__sub_8013E920(void* p);
void TMainCursor__sub_8013E928(void* p, s16 v);
void TMainCursor__sub_8013E930(void* p, s16 v);
void TMainCursor__sub_8013E970(u8 *arg0, s16 arg1, s16 arg2, s16 arg3);
int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
int get_active__11TMainCursorFPv(void* p);
int get_selected_entry__11TMainCursorFPv(void* p);
u16 get_target_id__11TMainCursorFPv(void* p);
int is_cursor_clear__11TMainCursorFPv(void* p);
void set_color__11TMainCursorFPvi(void* p, s32 v);
void set_color_mode__11TMainCursorFPvi(void* p, s32 v);
void set_field_0c__11TMainCursorFPvi(void* p, s32 v);
void set_flags__11TMainCursorFPvi(void* p, s32 v);
s32 TLockOnCursor__sub_8013EB2C(void* p);
int TMainCursor__sub_8013B2A4(void*);
int TMainCursor__sub_8013DF08(void*);
int TMainCursor__sub_8013DFC4(void*);
int TMainCursor__sub_8013E310(void* p);
int TMainCursor__sub_8013E338(void* p);
int TMainCursor__sub_8013E358(void* p);
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
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
int TObjPlayer__sub_8001BEF8(void*, int);
int TObjPlayer__sub_8013DEF8(void*);
s32 __dl__FPv(void* a0 = 0);
int check_field_24__11TMainCursorFPv(void* p);
int check_flag_1__11TMainCursorFPv(void* p);
int check_flag_4__11TMainCursorFPv(void* p);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int forward_13E338_at_60__11TMainCursorFPv(void* p);
s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
int get_action_palette__11TMainCursorFPv(void* p);
int get_enabled__11TMainCursorFPv(void*);
u16 get_id__11TMainCursorFPv(void* p);
void* get_list__11TMainCursorFPv(void* p);
u16 get_render_flag__11TMainCursorFPv(void* p);
int get_type__11TMainCursorFPv(void*);
s32 init__6gc_tagFv();
int init_field_60__11TMainCursorFPv(void* p);
int init_render_flags__11TMainCursorFPv(void* p);
int is_bit1_set__13TLockOnCursorFPv(void* p);
int is_inactive__13TLockOnCursorFPv(void* p);
u8 is_position_moved__11TMainCursorFPv(void* p);
int render_part__13TLockOnCursorFPv(void* p);
int set_flag_8_bit0__13TLockOnCursorFPv(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int set_mode__20TWindowActionPaletteFPvUc(void*);
void set_offset_y__11TMainCursorFPvs(void* p, s16 a1);
int set_slot__20TWindowActionPaletteFPvUc(void*);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);
int test_flag_2_at_20__11TMainCursorFPv(void* p);
int update__11TMainCursorFPv(void* p);
int update_action_palette__11TMainCursorFPv(void* p);
void update_cursor_pos__13TLockOnCursorFPv(void* p);
int update_ring__13TLockOnCursorFPv(void* p);
int update_ring_sub__13TLockOnCursorFPv(void* p);
int update_sub_60__11TMainCursorFPv(void* p);
int update_target_sub__11TMainCursorFPv(void* p);

int TMainCursor__sub_8013E8A0(void* p) { return TObjPlayer__sub_8013DEF8(p); }
int get_selected_entry__11TMainCursorFPv(void* p) { return TMainCursor__sub_8013DF08(p); }
int get_active__11TMainCursorFPv(void* p) { return get_enabled__11TMainCursorFPv(p); }
int TMainCursor__sub_8013E900(void* p) { return get_type__11TMainCursorFPv(p); }
s16 TMainCursor__sub_8013E920(void* p) { return *(s16*)((char*)p + 0x2); }
void TMainCursor__sub_8013E928(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void TMainCursor__sub_8013E930(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
u16 get_target_id__11TMainCursorFPv(void* p) { return *(u16*)((char*)p + 0x20); }
int is_cursor_clear__11TMainCursorFPv(void* p) { return (TObjPlayer__sub_8001BEF8((char*)p + 0x1c, 1)) == 0; }

void TMainCursor__sub_8013E970(u8 *arg0, s16 arg1, s16 arg2, s16 arg3) {
    M2C_FIELD(arg0, s16 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 2) = arg2;
    M2C_FIELD(arg0, s16 *, 4) = arg3;
}

void set_color_mode__11TMainCursorFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x10) = v; }
void set_color__11TMainCursorFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x8) = v; }
void set_field_0c__11TMainCursorFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }
void set_flags__11TMainCursorFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x14) = v; }

int TMainCursor__sub_8013E9A0(void* p) { return TMainCursor__sub_8013DFC4(p); }
int TMainCursor__sub_8013E9C0(void* p) { return set_slot__20TWindowActionPaletteFPvUc(p); }
int TMainCursor__sub_8013E9E0(void* p) { return set_mode__20TWindowActionPaletteFPvUc(p); }
void TMainCursor__sub_8013EA00(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

}
