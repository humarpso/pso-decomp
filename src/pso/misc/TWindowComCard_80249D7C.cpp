#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowComCard__sub_80249D7C(u8 *arg0, s32 arg1);

extern const f32 lbl_805DCBD0;

#pragma push
#pragma fp_contract on
void TWindowComCard__sub_80249D7C(u8 *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) ((lbl_805DCBD0 * (f32) M2C_FIELD(arg0, s32 *, 0x6C)) + (M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), f32 *, 0x40) + M2C_FIELD(arg0, f32 *, 0x64)));
        M2C_FIELD(arg0, s32 *, 0x50) = 0xF;
    }
}
#pragma pop

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
typedef struct Parent_80249ED8 {
    u8 pad0[0x40];
    f32 x;
    f32 y;
} Parent_80249ED8;

typedef struct Vec2_80249ED8 {
    f32 x;
    f32 y;
} Vec2_80249ED8;

typedef struct Win_80249ED8 {
    u8 pad0[0x18];
    s32 *vtbl;
    u8 pad1C[0x30 - 0x1C];
    f32 x;
    f32 y;
    u8 pad38[0x60 - 0x38];
    Parent_80249ED8 *parent;
    Vec2_80249ED8 ofs;
    s32 col;
    s32 mode;
} Win_80249ED8;

void *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
void save_position__17TWindowSubComCardFPv(void *p);
void TWindowDD__sub_802466E0(void *, void *, s16, s32);
void set_help_mode__14TWindowComCardFPvi(void *, s32);
s32 get_zero_vec2();
extern s32 lbl_804CE950[];
extern const f32 lbl_805DCBD0;
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *, int, f32);
M2C_UNK update_window_entry_list(void *, void *);
void TWindowComCard__sub_80249E24(u8 *arg0);
void queue_destruction__7TObjectFv(void *);
extern struct Obj054_80249DE4 *TWindowCtrl__data_805D63F8;
extern u16 lbl_805D63FC;
void TWindowTradeRequest__sub_80249FCC(void);
}

extern "C" {

struct Obj054_80249DE4 { char pad[0x38]; u32 field38; };

void *TWindowComCard__sub_80249E80(void *arg0, s16 arg1);
void request_active_window_close(void);
void update_status_disp__14TWindowComCardFi(s32 arg0);
M2C_UNK draw_visible_window_entries(s32, s32, s32);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK set_flag1e_bit8__11TWindowCtrlFPv(void*);

void update_status_disp__14TWindowComCardFi(s32 arg0) {
    M2C_UNK8 *tmp = (M2C_UNK8 *)draw_default_entry__9TWindowDDFi();
    draw_visible_window_entries(arg0, arg0 + 0x24, (s32)tmp);
}

extern M2C_UNK lbl_804CE964[];

void TWindowComCard__sub_80249E24(u8 *arg0) {
    f32 temp_f1;
    u8 *temp_r4;
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x60));
    temp_f1 = M2C_FIELD(temp_r4, f32 *, 0x44);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x68));
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    initialize_subwindow__9TWindowDDFPv((void *)(arg0), (int) (temp_r4), (f32) (temp_f1));
    update_fade__17TWindowSubComCardFPv((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
}

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

#pragma push
#pragma fp_contract on
Win_80249ED8 *TWindowComCard__sub_80249ED8(Win_80249ED8 *o, Parent_80249ED8 *parent, Vec2_80249ED8 *ofs, s32 col, s32 mode, s32 arg5) {
    TWindowDD__sub_802466E0(o, lbl_804CE950, arg5, get_zero_vec2());
    o->vtbl = (s32 *)lbl_804CE964;
    o->parent = parent;
    o->ofs.x = ofs->x;
    o->ofs.y = ofs->y;
    o->col = col;
    o->mode = mode;
    o->x = lbl_805DCBD0 * (f32)o->col + (o->parent->x + o->ofs.x);
    o->y = o->parent->y + o->ofs.y;
    save_position__17TWindowSubComCardFPv(o);
    set_help_mode__14TWindowComCardFPvi(get_array_entry__20TWindowSubStatusDispFPvi(o, 0), mode);
    return o;
}
#pragma pop

extern struct Obj054_80249DE4 *TWindowCtrl__data_805D63F8;

void TWindowTradeRequest__sub_80249FCC(void) {
    u8 *temp_r3;
    lbl_805D63FC &= 0xFFFFFFF7;
    if ((void *) (*(u8 * *)&TWindowCtrl__data_805D63F8) != NULL) {
        temp_r3 = (u8 *)(M2C_FIELD((*(u8 * *)&TWindowCtrl__data_805D63F8), u8 **, 0x40));
        if (temp_r3 != NULL) {
            queue_destruction__7TObjectFv(temp_r3);
            M2C_FIELD((*(u8 * *)&TWindowCtrl__data_805D63F8), u8 **, 0x40) = NULL;
        }
    }
}

void request_active_window_close(void) {
    if ((TWindowCtrl__data_805D63F8 != NULL) && (TWindowCtrl__data_805D63F8->field38 != 0U)) {
        set_flag1e_bit8__11TWindowCtrlFPv((void*)TWindowCtrl__data_805D63F8->field38);
    }
}

}
