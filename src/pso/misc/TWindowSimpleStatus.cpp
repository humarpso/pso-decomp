#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct SS_802705D8 { u8 pad0[0x18]; void *vt; u8 pad1c[0x64 - 0x1c]; void *w[4]; };

struct SS_80270668 { s32 f0; u8 pad4[0x14]; void *vt; s16 f1c; s16 f1e; s16 f20; u8 pad22[0x36]; f32 f58; u8 pad5c[4]; s32 f60; s32 w[5]; };

extern "C" {
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK TWindowSubComCard__sub_80270394(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
extern M2C_UNK __vt__14TWindowMessage[];
void render__19TWindowSimpleStatusFv(s32 arg0);
void __dl__7TObjectFPv(void *);
void TWindow__close(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
extern u8 __vt__19TWindowSimpleStatus[];
u8 *__dt__19TWindowSimpleStatusFv(SS_802705D8 *arg0, s16 arg1);
void *TWindowDD__sub_802466E0(void *, void *, s16, void *);
extern u8 __vt__19TWindowSimpleStatus[];
extern s32 lbl_805D39E8;
extern const f32 lbl_805DD3EC;
SS_80270668 *TWindowSimpleStatus__ct(SS_80270668 *arg0, void *arg1, s32 arg2, void *arg3);
}

extern "C" {

void * create__19TWindowSimpleStatusFPvPv(void *arg0, void *arg1);
void run_task__19TWindowSimpleStatusFv(s32 arg0);
M2C_UNK TWindowComCard__sub_8026F9F4(s32, s32);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_80257C28(s32, s32);
void *__nw__7TObjectFUl(int);
M2C_UNK fn_8026FDC0(s32);
M2C_UNK fn_8026FEA8();
M2C_UNK fn_80270014(s32);
M2C_UNK initialize_subwindow__9TWindowDDFPv(s32);
M2C_UNK update_fade__17TWindowSubComCardFPv(s32);
M2C_UNK update_status_help_item(s32);

}
extern "C" {
void render__19TWindowSimpleStatusFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    TWindowSubComCard__sub_80270394((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}

void run_task__19TWindowSimpleStatusFv(s32 arg0) {
    fn_8026FEA8();
    fn_80270014(arg0);
    update_status_help_item(arg0);
    TWindowComCard__sub_8026F9F4(arg0, TWindowSubComCard__sub_8026CBB8(0x1D));
    initialize_subwindow__9TWindowDDFPv(arg0);
    update_fade__17TWindowSubComCardFPv(arg0);
    TWindowSubStatusDisp__sub_80257C28(arg0, arg0 + 0x24);
    fn_8026FDC0(arg0);
}

extern unsigned char lbl_804D0CB0[];

u8 *__dt__19TWindowSimpleStatusFv(SS_802705D8 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vt = __vt__19TWindowSimpleStatus;
        for (i = 0; i < 4; i++) {
            if (arg0->w[i] != NULL) {
                TWindow__close(arg0->w[i]);
                arg0->w[i] = NULL;
            }
        }
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return (u8 *)arg0;
}

SS_80270668 *TWindowSimpleStatus__ct(SS_80270668 *arg0, void *arg1, s32 arg2, void *arg3) {
    s32 i;
    TWindowDD__sub_802466E0(arg0, arg3, arg2, arg1);
    arg0->vt = __vt__19TWindowSimpleStatus;
    arg0->f0 = lbl_805D39E8;
    arg0->f20 = arg2;
    arg0->f60 = 0;
    arg0->f58 = lbl_805DD3EC;
    for (i = 0; i < 5; i++) {
        arg0->w[i] = 0;
    }
    return arg0;
}

void * create__19TWindowSimpleStatusFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x78);
    if (o != NULL) {
        o = TWindowSimpleStatus__ct((SS_80270668 *)(o), (void *)(arg0), (s32)(arg1), (void *)(lbl_804D0CB0));
    }
    return o;
}

}
