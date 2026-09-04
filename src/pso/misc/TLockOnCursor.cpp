#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 free_if_owned__13TLockOnCursorFis(s32 arg0, s16 arg1);
s32 __dt__13TLockOnCursorFis(s32 arg0, s16 arg1);

M2C_UNK __dl__FPv();

s32 free_if_owned__13TLockOnCursorFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

M2C_UNK __dl__FPv();

s32 __dt__13TLockOnCursorFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8013DA64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__13TLockOnCursorFv(s32 arg0);

s32 TMainCursor__sub_8013DF08(s32);
M2C_UNK TLockOnCursor__sub_8013EB80(s32);
M2C_UNK TLockOnCursor__sub_8013EB8C(s32);

void run_task__13TLockOnCursorFv(s32 arg0) {
    if (TMainCursor__sub_8013DF08(arg0 + 0x520) != 0) {
        TLockOnCursor__sub_8013EB8C(arg0 + 0x520);
        return;
    }
    TLockOnCursor__sub_8013EB80(arg0 + 0x520);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013DDF0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 dt__13TLockOnCursorFis(s32 arg0, s16 arg1);

M2C_UNK __dl__FPv(s32);
M2C_UNK free_if_owned__13TLockOnCursorFis(s32, s32);

s32 dt__13TLockOnCursorFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        free_if_owned__13TLockOnCursorFis(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013DE3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TLockOnCursor__ct(void *arg0, void *arg1, void *arg2);
void TLockOnCursor__sub_8013EEC0(void *, void *);
void init_vtable__13TLockOnCursorFPv(void *);
void init_cursor__13TLockOnCursorFPv(void *);
void init_forward__13TLockOnCursorFPv(void *);
void cleanup__13TLockOnCursorFPv(void *);
void reset_fields__13TLockOnCursorFPv(void *);
void init_forward__10TObjPlayerFPv(void *);
void __ct__7TObjectFP7TObject(void *);
void clear_id__10TObjPlayerFPv(void *);
void fn_8013F0A0(void *);
void TMainCursor__sub_8013F1F0(void *);

extern M2C_UNK __vt__13TLockOnCursor[];
extern M2C_UNK TLockOnCursor__sub_8013EFB8[];
extern M2C_UNK __dt_deleting__13TLockOnCursorFis[];
void __construct_array(void *, void *, void *, int, int);
extern void *lbl_805D2CB4;
struct VOff_8013DE3C_arg0 { char pad_0[0x1C]; char f_1C[1]; };

void *TLockOnCursor__ct(void *arg0, void *arg1, void *arg2) {
    struct VOff_8013DE3C_arg0 *self = (struct VOff_8013DE3C_arg0 *)arg0;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TLockOnCursor;
    init_forward__10TObjPlayerFPv(self->f_1C);
    fn_8013F0A0((void *)((char *)arg0 + 36));
    reset_fields__13TLockOnCursorFPv((void *)((char *)arg0 + 60));
    TMainCursor__sub_8013F1F0((void *)((char *)arg0 + 72));
    __construct_array((void *)((char *)arg0 + 92), TLockOnCursor__sub_8013EFB8, __dt_deleting__13TLockOnCursorFis, 292, 4);
    cleanup__13TLockOnCursorFPv((void *)((char *)arg0 + 1260));
    init_forward__13TLockOnCursorFPv((void *)((char *)arg0 + 1288));
    init_cursor__13TLockOnCursorFPv((void *)((char *)arg0 + 1296));
    init_vtable__13TLockOnCursorFPv((void *)((char *)arg0 + 1312));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2CB4;
    TLockOnCursor__sub_8013EEC0(arg0, arg2);
    clear_id__10TObjPlayerFPv(self->f_1C);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E0D0
#include "types.h"

extern "C" {

void TLockOnCursor__sub_8013E0D0(void* p, s32 v);
void destroy_lock_on__11TMainCursorFPvi(void* p, s32 a1);

void TLockOnCursor__sub_8013E0D0(void* p, s32 v) { *(s32*)((char*)p + 0x8) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E0D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__13TLockOnCursorFPvPvPv(void *arg0, void *arg1, void *arg2);
void set_field_0__13TForceOperateFPvs(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void disallow_rendering__7TObjectFv(void *);
void fn_8013E020(void *);

extern M2C_UNK lbl_804A7260[];
struct VOff_8013E0D8_arg0_8013e0d8 { char pad_0[0x1C]; char f_1C[1]; };

void *init__13TLockOnCursorFPvPvPv(void *arg0, void *arg1, void *arg2) {
    struct VOff_8013E0D8_arg0_8013e0d8 *self = (struct VOff_8013E0D8_arg0_8013e0d8 *)arg0;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A7260;
    fn_8013E020(self->f_1C);
    disallow_rendering__7TObjectFv(arg0);
    set_field_0__13TForceOperateFPvs(self->f_1C, arg2);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013EA08
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

int render_part__13TLockOnCursorFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x8, 2); }
void update_cursor_pos__13TLockOnCursorFPv(void* p) { TMainCursor__sub_8013E378((char*)p + 0xc, (char*)p + 0x14); }
int set_flag_8_bit0__13TLockOnCursorFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x8, 1); }
int update_ring__13TLockOnCursorFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x8, 1); }
int is_bit1_set__13TLockOnCursorFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x8, 2); }
int is_inactive__13TLockOnCursorFPv(void* p) { return (TObjPlayer__sub_8001BEF8((char*)p + 0x1c, 2)) == 0; }
int update_ring_sub__13TLockOnCursorFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x8, 2); }
s32 TLockOnCursor__sub_8013EB2C(void* p) { return *(s32*)((char*)p + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013EB34
#include "types.h"

extern "C" {

int TLockOnCursor__sub_8013EB34(void);

    extern int TLockOnCursor__data_805D5648;
int TLockOnCursor__sub_8013EB34(void) {  return TLockOnCursor__data_805D5648; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013EB3C
#include "types.h"

extern "C" {

int test_flag_1_at_8__13TLockOnCursorFPv(void* p);
s32 get_target__13TLockOnCursorFPv(void* p);
void TLockOnCursor__sub_8013EB80(void* p);
void TLockOnCursor__sub_8013EB8C(void* p);
s32 release_target__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EBBC(void* p);
s32 cleanup_field__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EBE8(void* p);
s32 cleanup_field_3c__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EC14(void* p);
int TObjPlayer__sub_8001BEF8(void*, int);

int test_flag_1_at_8__13TLockOnCursorFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x8, 1); }
s32 get_target__13TLockOnCursorFPv(void* p) { return *(s32*)((char*)p + 0x0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013EB80
#include "types.h"

extern "C" {

int test_flag_1_at_8__13TLockOnCursorFPv(void* p);
s32 get_target__13TLockOnCursorFPv(void* p);
void TLockOnCursor__sub_8013EB80(void* p);
void TLockOnCursor__sub_8013EB8C(void* p);
s32 release_target__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EBBC(void* p);
s32 cleanup_field__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EBE8(void* p);
s32 cleanup_field_3c__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EC14(void* p);
int TObjPlayer__sub_8001BEF8(void*, int);

void TLockOnCursor__sub_8013EB80(void* p) { *(s32*)((char*)p + 0x4) = 0; }
void TLockOnCursor__sub_8013EB8C(void* p) { *(s32*)((char*)p + 0x4) = 1; }
s32 release_target__13TLockOnCursorFPv(void* p) { return TLockOnCursor__sub_8013EBBC((char*)p + 0x3c); }
s32 TLockOnCursor__sub_8013EBBC(void* p) { return *(s32*)((char*)p + 0x8); }
s32 cleanup_field__13TLockOnCursorFPv(void* p) { return TLockOnCursor__sub_8013EBE8((char*)p + 0x3c); }
s32 TLockOnCursor__sub_8013EBE8(void* p) { return *(s32*)((char*)p + 0x4); }
s32 cleanup_field_3c__13TLockOnCursorFPv(void* p) { return TLockOnCursor__sub_8013EC14((char*)p + 0x3c); }
s32 TLockOnCursor__sub_8013EC14(void* p) { return *(s32*)((char*)p + 0x0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013ED0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 __dt_deleting__13TLockOnCursorFis(s32 arg0, s16 arg1);
M2C_UNK TLockOnCursor__sub_8013ED68(s32, M2C_UNK);
M2C_UNK free_if_valid__14TPlyDispConfigFis(s32, M2C_UNK);
M2C_UNK __dl__FPv(s32);

s32 __dt_deleting__13TLockOnCursorFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        TLockOnCursor__sub_8013ED68(arg0 + 0x9C, -1);
        free_if_valid__14TPlyDispConfigFis(arg0, -1);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013EDC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLockOnCursor__sub_8013EDC4(s32 arg0, s16 arg1);
M2C_UNK __dl__FPv();

s32 TLockOnCursor__sub_8013EDC4(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013EE00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 destroy__13TLockOnCursorFis(s32 arg0, s16 arg1);

M2C_UNK free_if_valid__14TPlyDispConfigFis(s32, M2C_UNK);
M2C_UNK __dl__FPv(s32);
M2C_UNK destroy__11TMainCursorFis(s32, M2C_UNK);

s32 destroy__13TLockOnCursorFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        destroy__11TMainCursorFis(arg0 + 0x14, -1);
        destroy__11TMainCursorFis(arg0 + 0xC, -1);
        free_if_valid__14TPlyDispConfigFis(arg0 + 8, -1);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013EE68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy__13TLockOnCursorFPvs(void *arg0, s16 arg1);
M2C_UNK free_if_valid__14TPlyDispConfigFis(void *, s16);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804A7248[];

void *destroy__13TLockOnCursorFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = lbl_804A7248;
        free_if_valid__14TPlyDispConfigFis(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013EEC0
#include "types.h"

extern "C" {

void TLockOnCursor__sub_8013EEC0(void* p, s16 v);

void TLockOnCursor__sub_8013EEC0(void* p, s16 v) { *(s16*)((char*)p + 0x20) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013EEC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_vtable__13TLockOnCursorFPv(void *arg0);
void init_gc_tag(void *);

extern M2C_UNK lbl_804A7248[];

void *init_vtable__13TLockOnCursorFPv(void *arg0) {
    init_gc_tag(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x8) = lbl_804A7248;
    M2C_FIELD(arg0, u32 *, 0x4) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013EF0C
#include "types.h"

extern "C" {

int init_forward__10TObjPlayerFPv(void*);
int fn_8004438C(void*);
int init_gc_tag(void*);
int TMainCursor__sub_8013E240(void*);
int reset__11TMainCursorFi(void*);
int TLockOnCursor__sub_8013EC1C(void*);
int TLockOnCursor__sub_8013EC38(void*);
void reset_fields__13TLockOnCursorFPv(void* p);
void TMainCursor__sub_8013F104(void* p, s32 v);
void TMainCursor__sub_8013F10C(void* p, s32 v);
void TMainCursor__sub_8013F114(void* p);
void set_cursor_id__11TMainCursorFPvs(void* p, s16 v);
void set_field2__11TMainCursorFPvs(void* p, s16 v);
void set_size__11TMainCursorFPvf(void* p, f32 v);
f32 TMainCursor__sub_8013F14C(void* p);
s32 TMainCursor__sub_8013F168(void* p);
void TMainCursor__sub_8013F170(void* p, s32 v);
f32 get_pos__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013F180(void* p, f32 v);
int get_rader_map__11TMainCursorFPv(void* p);
int copy_vec4__13TRaderMapCoreFPvPv(void*);

void* init_cursor__13TLockOnCursorFPv(void* p) { TMainCursor__sub_8013E240(p); return p; }
void* init_forward__13TLockOnCursorFPv(void* p) { TLockOnCursor__sub_8013EC1C(p); return p; }
void* cleanup__13TLockOnCursorFPv(void* p) { init_gc_tag((char*)p + 0x8); reset__11TMainCursorFi((char*)p + 0xc); reset__11TMainCursorFi((char*)p + 0x14); TLockOnCursor__sub_8013EC38(p); return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013F054
#include "types.h"

extern "C" {

int init_forward__10TObjPlayerFPv(void*);
int fn_8004438C(void*);
int init_gc_tag(void*);
int TMainCursor__sub_8013E240(void*);
int reset__11TMainCursorFi(void*);
int TLockOnCursor__sub_8013EC1C(void*);
int TLockOnCursor__sub_8013EC38(void*);
void reset_fields__13TLockOnCursorFPv(void* p);
void TMainCursor__sub_8013F104(void* p, s32 v);
void TMainCursor__sub_8013F10C(void* p, s32 v);
void TMainCursor__sub_8013F114(void* p);
void set_cursor_id__11TMainCursorFPvs(void* p, s16 v);
void set_field2__11TMainCursorFPvs(void* p, s16 v);
void set_size__11TMainCursorFPvf(void* p, f32 v);
f32 TMainCursor__sub_8013F14C(void* p);
s32 TMainCursor__sub_8013F168(void* p);
void TMainCursor__sub_8013F170(void* p, s32 v);
f32 get_pos__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013F180(void* p, f32 v);
int get_rader_map__11TMainCursorFPv(void* p);
int copy_vec4__13TRaderMapCoreFPvPv(void*);

void* init_sub__13TLockOnCursorFPv(void* p) { fn_8004438C(p); init_forward__10TObjPlayerFPv((char*)p + 0x8); return p; }
void reset_fields__13TLockOnCursorFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; *(s32*)((char*)p + 0x8) = 0; }

}
#endif
#endif
