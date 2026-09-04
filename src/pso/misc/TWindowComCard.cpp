#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void run_task__14TWindowComCardFv(void* p);
int update_fade__17TWindowSubComCardFPv(void*);
int initialize_subwindow__9TWindowDDFPv(void*);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);

void run_task__14TWindowComCardFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); TWindowSubStatusDisp__sub_80257C28(p, (char*)p + 0x24); }

}
#else
#if PSO_CLASS_PACKAGE == 0x80249920
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowComCard__sub_80249920(s32 arg0, s32 arg1, s32 arg2);
void set_display_value__14TWindowComCardFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_802497A8(s32, s32);

void TWindowComCard__sub_80249920(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp = arg2 + (arg1 * 0x90);
    if (temp != 0) {
        fn_802497A8(arg0 + 0x24, temp);
    }
}

void set_display_value__14TWindowComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp = arg2 + (arg1 << 8);
    if (temp != 0) {
        fn_802497A8(arg0 + 0x24, temp);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802499E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__14TWindowComCardFPvPv(void *arg0, void *arg1);
void *TWindowComCard__ct(void *, void *, void *);
void *TWindowSubComCard__sub_8007A8F8(void *);
void *__nw__7TObjectFUl(int);

void * create__14TWindowComCardFPvPv(void *arg0, void *arg1) {
    void *x0;
    void *o;
    x0 = TWindowSubComCard__sub_8007A8F8(arg1);
    if (x0 == NULL) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0x60);
    if (o != NULL) {
        o = TWindowComCard__ct(o, arg0, x0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80249B50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TWindowComCardFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK __vt__14TWindowComCard[];

void *__dt__14TWindowComCardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TWindowComCard;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80249C10
#include "types.h"

extern "C" {

void* get_kbd_ptr__14TWindowComCardFPv(void* p);
u8 TWindowComCard__sub_80249C18(void* p);
u8 TWindowComCard__sub_80249C20(void* p);

void* get_kbd_ptr__14TWindowComCardFPv(void* p) { return (char*)p + 0x20; }
u8 TWindowComCard__sub_80249C18(void* p) { return *(u8*)((char*)p + 0x8e); }
u8 TWindowComCard__sub_80249C20(void* p) { return *(u8*)((char*)p + 0x8d); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80249C3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_help_mode__14TWindowComCardFPvi(void *arg0, s32 arg1);
void* get_card_name_ptr__14TWindowComCardFPv(void* p);
M2C_UNK TWindowHelpItem__sub_8025B08C(void *, f32, f32);

extern u8 lbl_8044EB50[];

void set_help_mode__14TWindowComCardFPvi(void *arg0, s32 arg1) {
    void *temp_r4;

    if (arg1 == 0xE) {
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 2);
        return;
    }
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) & 0xFFFFFFFD);
    if (arg1 < 0xA) {
        M2C_FIELD(arg0, s32 *, 0x34) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x34) = 2;
    }
    temp_r4 = lbl_8044EB50 + (arg1 * 8);
    TWindowHelpItem__sub_8025B08C(arg0, M2C_FIELD(temp_r4, f32 *, 0), M2C_FIELD(temp_r4, f32 *, 4));
}

void* get_card_name_ptr__14TWindowComCardFPv(void* p) { return (char*)p + 0xa; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80249D34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_selected_index__14TWindowComCardFPvi(void *arg0, s32 arg1);
M2C_UNK set_help_mode__14TWindowComCardFPvi(M2C_UNK, s32);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);

void set_selected_index__14TWindowComCardFPvi(void *arg0, s32 arg1) {
    M2C_UNK temp;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x70) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x70) = arg1;
        temp = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
        set_help_mode__14TWindowComCardFPvi(temp, M2C_FIELD(arg0, s32 *, 0x70));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80249D7C
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowComCard__sub_80249D7C(u8 *arg0, s32 arg1);

extern M2C_UNK lbl_8044EBC0;
extern const f32 lbl_805DCBD0;

void TWindowComCard__sub_80249D7C(u8 *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) ((lbl_805DCBD0 * (f32) M2C_FIELD(arg0, s32 *, 0x6C)) + (M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), f32 *, 0x40) + M2C_FIELD(arg0, f32 *, 0x64)));
        M2C_FIELD(arg0, s32 *, 0x50) = 0xF;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80249DE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_status_disp__14TWindowComCardFi(s32 arg0);
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(s32, s32, s32);

void update_status_disp__14TWindowComCardFi(s32 arg0) {
    M2C_UNK8 *tmp = (M2C_UNK8 *)draw_default_entry__9TWindowDDFi();
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, (s32)tmp);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80249E80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowComCard__sub_80249E80(void *arg0, s16 arg1);
void destroy_window_base__9TWindowDDFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804CE964[];

void *TWindowComCard__sub_80249E80(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CE964;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
