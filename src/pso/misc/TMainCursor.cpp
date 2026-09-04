#ifndef PSO_CLASS_PACKAGE

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TMainCursor__sub_8013BE98(void* p);
void *__dt__11TMainCursorFv(void *arg0, s16 arg1);
void update_position__11TMainCursorFi(s32 arg0);
s32 TMainCursor__sub_8013DF08();
int TMainCursor__sub_8013DF5C(void*, void* a1 = 0, void* a2 = 0);
void TMainCursor__sub_8013E5E8(void *, int);
void *TPhotonMylla__sub_80154CB4();
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void destroy__11TMainCursorFPvs(void *, int);
void destroy__11TMainCursorFis(void *, int);
M2C_UNK get_id__11TMainCursorFPv(s32);
u8 is_position_moved__11TMainCursorFPv(s32);

void update_position__11TMainCursorFi(s32 arg0) {
    void *temp_r3;

    get_id__11TMainCursorFPv(arg0 + 0x60);
    temp_r3 = TPhotonMylla__sub_80154CB4();
    if (temp_r3 != NULL) {
        s32 base = M2C_FIELD(temp_r3, s32 *, 0xA4) + is_position_moved__11TMainCursorFPv(arg0) * 0x2C;
        VecCopy__FP3VecPC3Vec(arg0 + 0x40, base + 0x1C);
    }
}

extern M2C_UNK __vt__11TMainCursor[];

void *__dt__11TMainCursorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TMainCursor;
        destroy__11TMainCursorFis((s8 *)arg0 + 0x60, -1);
        destroy__11TMainCursorFPvs((s8 *)arg0 + 0x4C, -1);
        TMainCursor__sub_8013E5E8((s8 *)arg0 + 0x24, -1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int TMainCursor__sub_8013BE98(void* p) { return TMainCursor__sub_8013DF5C(p); }

}
#else

#if PSO_CLASS_PACKAGE == 0x8013E17C
#include "types.h"

extern "C" {

int TMainCursor__sub_8013E1FC(void* a0 = 0, void* a1 = 0);
void update_cursor_pos__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E17C(void* p, f32 v);
f32 TMainCursor__sub_8013E184(void* p);
void TMainCursor__sub_8013E18C(void* p, s16 v);
u16 TMainCursor__sub_8013E194(void* p);
void set_target__11TMainCursorFPvi(void* p, s32 a1);
void TMainCursor__sub_8013E1C0(void* p, s32 v);
void set_target_index__11TMainCursorFPvs(void* p, s16 v);

void TMainCursor__sub_8013E17C(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
f32 TMainCursor__sub_8013E184(void* p) { return *(f32*)((char*)p + 0xc); }
void TMainCursor__sub_8013E18C(void* p, s16 v) { *(s16*)((char*)p + 0x4) = v; }
u16 TMainCursor__sub_8013E194(void* p) { return *(u16*)((char*)p + 0x6); }
void set_target__11TMainCursorFPvi(void* p, s32 a1) { TMainCursor__sub_8013E1C0((char*)p + 0x3c, a1); }
void TMainCursor__sub_8013E1C0(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E1C8
#include "types.h"

extern "C" {

int TMainCursor__sub_8013E1FC(void* a0 = 0, void* a1 = 0);
void update_cursor_pos__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E17C(void* p, f32 v);
f32 TMainCursor__sub_8013E184(void* p);
void TMainCursor__sub_8013E18C(void* p, s16 v);
u16 TMainCursor__sub_8013E194(void* p);
void set_target__11TMainCursorFPvi(void* p, s32 a1);
void TMainCursor__sub_8013E1C0(void* p, s32 v);
void set_target_index__11TMainCursorFPvs(void* p, s16 v);

void set_target_index__11TMainCursorFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x4) = v; }
void update_cursor_pos__11TMainCursorFPv(void* p) { TMainCursor__sub_8013E1FC((char*)p + 0x14, (char*)p + 0xc); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E1FC
#include "types.h"

extern "C" {

void* TMainCursor__sub_8013E1FC(void* p, void* a1);
void TMainCursor__sub_8013E17C(void* p, f32 v);
f32 TMainCursor__sub_8013E184(void* p);
void TMainCursor__sub_8013E18C(void* p, s16 v);
u16 TMainCursor__sub_8013E194(void* p);
void TMainCursor__sub_8013E1C0(void* p, s32 v);
int TObjPlayer__sub_8013A820(void* a0 = 0);
void set_target__11TMainCursorFPvi(void* p, s32 a1);
void set_target_index__11TMainCursorFPvs(void* p, s16 v);
void update_cursor_pos__11TMainCursorFPv(void* p);

void* TMainCursor__sub_8013E1FC(void* p, void* a1) { TObjPlayer__sub_8013A820(p); *(short*)((char*)p + 0x4) = *(unsigned short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E26C
#include "types.h"

extern "C" {

void set_sub_cursor_value__11TMainCursorFPvi(void* p, s32 a1);
void TMainCursor__sub_8013E290(void* p, s32 v);
s16 TMainCursor__sub_8013E298(void* p);
s32 TMainCursor__sub_8013E2A0(void* p);
s32 get_index__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E2B0(void* p);
void reset_slot__11TMainCursorFPv(void* p);
void set_type__11TMainCursorFPvi(void* p, s32 v);
int get_cursor_state__11TMainCursorFv(void);
int TMainCursor__sub_8013E2DC(void);

void set_sub_cursor_value__11TMainCursorFPvi(void* p, s32 a1) { TMainCursor__sub_8013E290((void*)((char*)p + 0x3c), a1); }
void TMainCursor__sub_8013E290(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
s16 TMainCursor__sub_8013E298(void* p) { return *(s16*)((char*)p + 0x0); }
s32 TMainCursor__sub_8013E2A0(void* p) { return *(s32*)((char*)p + 0x0); }
s32 get_index__11TMainCursorFPv(void* p) { return *(s32*)((char*)p + 0x4); }
void TMainCursor__sub_8013E2B0(void* p) { *(s16*)((char*)p + 0x2) = 0; *(s16*)((char*)p + 0x0) = 0; }
void reset_slot__11TMainCursorFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void set_type__11TMainCursorFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }

    extern int lbl_805D564C;
int get_cursor_state__11TMainCursorFv(void) {  return lbl_805D564C; }

    extern int lbl_805D5644;
int TMainCursor__sub_8013E2DC(void) {  return lbl_805D5644; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E2E4
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
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
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
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
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
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
#endif
#if PSO_CLASS_PACKAGE == 0x8013E44C
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
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
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
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
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

void* get_list__11TMainCursorFPv(void* p) { return (char*)p + 0xc; }
int update_target_sub__11TMainCursorFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x20, 1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E47C
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
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
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
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
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

u16 get_render_flag__11TMainCursorFPv(void* p) { return TMainCursor__sub_8013E4A0((char*)p + 0x24); }
u16 TMainCursor__sub_8013E4A0(void* p) { return *(u16*)((char*)p + 0x0); }
int test_flag_2_at_20__11TMainCursorFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x20, 2); }
int init_render_flags__11TMainCursorFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x20, 8); }
int update__11TMainCursorFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x20, 4); }
int check_flag_1__11TMainCursorFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x20, 1); }
u8 is_position_moved__11TMainCursorFPv(void* p) { return (u8)(TMainCursor__sub_8013E570((char*)p + 0x60)); }
s16 TMainCursor__sub_8013E570(void* p) { return *(s16*)((char*)p + 0x6); }
int check_flag_4__11TMainCursorFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x20, 4); }
int forward_13E338_at_60__11TMainCursorFPv(void* p) { return TMainCursor__sub_8013E338((char*)p + 0x60); }
int update_sub_60__11TMainCursorFPv(void* p) { return TMainCursor__sub_8013E358((char*)p + 0x60); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E624
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
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
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
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
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

s32 destroy__11TMainCursorFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        free_if_valid__14TPlyDispConfigFis(arg0, -1);
        if (arg1 > 0) {
            __dl__FPv((void*)(arg0));
        }
    }
    return arg0;
}
void set_offset_y__11TMainCursorFPvs(void* p, s16 a1) { TMainCursor__sub_8013E694((char*)p + 0x24, a1); }
void TMainCursor__sub_8013E694(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
int init_field_60__11TMainCursorFPv(void* p) { return get_action_palette__11TMainCursorFPv((char*)p + 0x60); }
int get_action_palette__11TMainCursorFPv(void* p) { return set_slot__20TWindowActionPaletteFPvUc(p); }
int TMainCursor__sub_8013E6E0(void* p) { return update_action_palette__11TMainCursorFPv((char*)p + 0x60); }
int update_action_palette__11TMainCursorFPv(void* p) { return set_mode__20TWindowActionPaletteFPvUc(p); }
void TMainCursor__sub_8013E724(void* p, f32 v) { *(f32*)((char*)p + 0x2c) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E754
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
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
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
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
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

void set_target_id__11TMainCursorFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x6) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E780
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK init_gc_tag();
M2C_UNK reset_target__11TMainCursorFi(void *);
s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
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
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
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
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

s32 reset__11TMainCursorFi(s32 arg0) {
    init_gc_tag();
    reset_target__11TMainCursorFi((void *) (arg0));
    return arg0;
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E7B8
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
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
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
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
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

void reset_target__11TMainCursorFi(s32 arg0) {
    init__6gc_tagFv();
    set_target_index__11TMainCursorFPvs((void*)(arg0), (void*)(0xFFFF));
    set_target_id__11TMainCursorFPvs((void*)(arg0), 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E810
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
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
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
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
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

s32 TMainCursor__sub_8013E810(void* p) { return *(s32*)((char*)p + 0xc); }
s32 TMainCursor__sub_8013E818(void* p) { return *(s32*)((char*)p + 0x8); }
s32 TMainCursor__sub_8013E820(void* p) { return *(s32*)((char*)p + 0x14); }
s32 TMainCursor__sub_8013E828(void* p) { return *(s32*)((char*)p + 0x10); }
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2) { TMainCursor__sub_8013E854(a2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E8A0
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
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
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
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
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

int TMainCursor__sub_8013E8A0(void* p) { return TObjPlayer__sub_8013DEF8(p); }
int get_selected_entry__11TMainCursorFPv(void* p) { return TMainCursor__sub_8013DF08(p); }
int get_active__11TMainCursorFPv(void* p) { return get_enabled__11TMainCursorFPv(p); }
int TMainCursor__sub_8013E900(void* p) { return get_type__11TMainCursorFPv(p); }
s16 TMainCursor__sub_8013E920(void* p) { return *(s16*)((char*)p + 0x2); }
void TMainCursor__sub_8013E928(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void TMainCursor__sub_8013E930(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
u16 get_target_id__11TMainCursorFPv(void* p) { return *(u16*)((char*)p + 0x20); }
int is_cursor_clear__11TMainCursorFPv(void* p) { return (TObjPlayer__sub_8001BEF8((char*)p + 0x1c, 1)) == 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E980
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
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
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
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
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

void set_color_mode__11TMainCursorFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x10) = v; }
void set_color__11TMainCursorFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x8) = v; }
void set_field_0c__11TMainCursorFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }
void set_flags__11TMainCursorFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x14) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E9A0
#include "types.h"

extern "C" {

int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int render_part__13TLockOnCursorFPv(void* p);
void update_cursor_pos__13TLockOnCursorFPv(void* p);
int set_flag_8_bit0__13TLockOnCursorFPv(void* p);
int update_ring__13TLockOnCursorFPv(void* p);
int is_bit1_set__13TLockOnCursorFPv(void* p);
int update_ring_sub__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EB2C(void* p);
int TMainCursor__sub_8013B2A4(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);
int check_field_24__11TMainCursorFPv(void* p);
u16 get_id__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E310(void* p);
int TMainCursor__sub_8013E338(void* p);
int TMainCursor__sub_8013E358(void* p);
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
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
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
int TMainCursor__sub_8013E854(void* a0 = 0);
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
int set_flags__10TObjPlayerFPvUi(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);
int TObjPlayer__sub_8013DEF8(void*);
s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int is_inactive__13TLockOnCursorFPv(void* p);

int TMainCursor__sub_8013E9A0(void* p) { return TMainCursor__sub_8013DFC4(p); }
int TMainCursor__sub_8013E9C0(void* p) { return set_slot__20TWindowActionPaletteFPvUc(p); }
int TMainCursor__sub_8013E9E0(void* p) { return set_mode__20TWindowActionPaletteFPvUc(p); }
void TMainCursor__sub_8013EA00(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D7A78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void find_action_slot_for_target__11TMainCursorFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TObjPlayer__sub_801D84A8();
M2C_UNK find_action_slot__11TMainCursorFiPvsii(s32, s32, s32, s32, s32);

void find_action_slot_for_target__11TMainCursorFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    find_action_slot__11TMainCursorFiPvsii(arg0, arg1, arg2, arg3, TObjPlayer__sub_801D84A8());
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D7AC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 find_action_slot__11TMainCursorFiPvsii(s32 arg0, void *arg1, s16 arg2, s32 arg3, s32 arg4);
u8 get_type__11TMainCursorFPv(s32);
s32 TMainCursor__sub_8013DF5C(s32, u8, u8);
s32 TObjPlayer__sub_801D84F0(s32);
s32 TWindowActionPalette__sub_801C1C68(s32, s32);

s32 find_action_slot__11TMainCursorFiPvsii(s32 arg0, void *arg1, s16 arg2, s32 arg3, s32 arg4) {
    s32 temp_r31;
    s32 var_r30;
    s32 var_r29;
    u32 temp_r3;

    if (arg1 != NULL) {
        temp_r3 = M2C_FIELD(arg1, u32 *, 0x424);
        if (temp_r3 != 0U) {
            temp_r31 = temp_r3 + 0x520;
            if (TObjPlayer__sub_801D84F0(temp_r31) != 0) {
                if (get_type__11TMainCursorFPv(temp_r31) == 1) {
                    if (arg2 == (s32) get_type__11TMainCursorFPv(temp_r31)) {
                        return 0;
                    }
                    goto block_8;
                }
                if (TMainCursor__sub_8013DF5C(temp_r31, (u8) arg2, (u8) arg3) != 0) {
                    return 0;
                }
                goto block_8;
            }
        }
    }
block_8:
    var_r29 = TWindowActionPalette__sub_801C1C68(arg0, arg4);
    var_r30 = 0;
loop_9:
    if (get_type__11TMainCursorFPv(var_r29) == 1) {
        if (arg2 == (s32) get_type__11TMainCursorFPv(var_r29)) {
            return var_r30;
        }
        goto block_14;
    }
    if (TMainCursor__sub_8013DF5C(var_r29, (u8) arg2, (u8) arg3) != 0) {
        return var_r30;
    }
block_14:
    var_r30 += 1;
    var_r29 += 4;
    if (var_r30 >= 4) {
        return -1;
    }
    goto loop_9;
}

}
#endif
#endif
