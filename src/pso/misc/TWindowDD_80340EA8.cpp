#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowDD__sub_80340F70(void);
void draw_and_scroll_entry__9TWindowDDFi(s32 arg0);
void draw_entry_if_visible__9TWindowDDFPvPv(void *arg0, void *arg1);
void *dt__9TWindowDDFPvs(void *arg0, s16 arg1);
void init_window__9TWindowDDFPv(void* p);
M2C_UNK calc_inner_rect__9TWindowDDFPvPv(s32, void *);
M2C_UNK draw_visible_window_entries(s32, s32, void *, f32);
int update_window_entry_list(void*, void*);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
M2C_UNK draw__9TWindowDDFPviif(void *, void *, s32, f32);
void *draw_default_entry__9TWindowDDFi();
int initialize_subwindow__9TWindowDDFPv(void*);
int update_fade__17TWindowSubComCardFPv(void*);

extern "C" void TWindowDD__sub_80340A78();
extern "C" void init__9TWindowDDFPv();
extern "C" void render_shadows__7TObjectFv();
struct W_80340F00 { s32 f0; u8 pad4[0x14]; void *p18; u8 pad1c[0x5C - 0x1C]; s32 f5c; u8 pad60[4]; f32 f64; f32 f68; f32 f6c; };
void *construct_base__9TWindowDDFPvPvsPv(void *, void *, s16, void *);
extern s32 lbl_805D42D0;
extern const f32 lbl_805DFC50;
extern const f32 lbl_805DFC70;
extern "C" void TWindowDD__sub_80340A78();
extern "C" void init__9TWindowDDFPv();
extern "C" void render_shadows__7TObjectFv();
__declspec(section ".data") void *lbl_804EFBC8[2] = {
    (void *)0x0, (void *)0x0,
};
void *lbl_804EFBD0[5] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x3,
};
void *lbl_804EFBE4[7] = {
    (void *)0x0, (void *)0x0, (void *)&dt__9TWindowDDFPvs, (void *)&init__9TWindowDDFPv,
    (void *)&TWindowDD__sub_80340A78, (void *)&render_shadows__7TObjectFv, (void *)0x0,
};

#define lbl_804EFBE4 ((M2C_UNK *)lbl_804EFBE4)
W_80340F00 *TWindowDD__sub_80340F00(W_80340F00 *arg0);

void *dt__9TWindowDDFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFBE4;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

W_80340F00 *TWindowDD__sub_80340F00(W_80340F00 *arg0) {
    construct_base__9TWindowDDFPvPvsPv(arg0, lbl_804EFBD0, 4, lbl_804EFBC8);
    arg0->p18 = lbl_804EFBE4;
    arg0->f0 = lbl_805D42D0;
    arg0->f64 = lbl_805DFC70;
    arg0->f68 = lbl_805DFC70;
    arg0->f6c = lbl_805DFC50;
    arg0->f5c = 0x01000000;
    return arg0;
}

void *TWindowDD__sub_80340F70(void) {
    void *o = __nw__7TObjectFUl(0x70);
    if (o != NULL) {
        o = (void *)TWindowDD__sub_80340F00((W_80340F00 *)o);
    }
    return o;
}

extern f32 lbl_805DFC90;

void draw_and_scroll_entry__9TWindowDDFi(s32 arg0) {
    f32 temp_f1;
    void *temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFi();
    calc_inner_rect__9TWindowDDFPvPv(arg0, temp_r3);
    draw_entry_if_visible__9TWindowDDFPvPv((void *)(arg0), (void *)(temp_r3));
    temp_f1 = M2C_FIELD(temp_r3, f32 *, 0x14);
    M2C_FIELD(temp_r3, f32 *, 0x14) = (f32) (temp_f1 + lbl_805DFC90);
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3, temp_f1);
}

extern f32 lbl_805DFC94;

void draw_entry_if_visible__9TWindowDDFPvPv(void *arg0, void *arg1) {
    if ((s32) M2C_FIELD(arg1, s32 *, 0x30) >= 0) {
        draw__9TWindowDDFPviif(arg0, arg1,
                               M2C_FIELD(arg0, s32 *, 0x60), lbl_805DFC94);
    }
}

void init_window__9TWindowDDFPv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); update_window_entry_list(p, (char*)p + 0x24); }

}
