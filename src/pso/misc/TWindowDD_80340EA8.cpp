#include "types.h"
#include "pso/misc/TWindowDD.h"

extern "C" {

void *TWindowDD__sub_80340F70(void);
void draw_and_scroll_entry__9TWindowDDFi(s32 arg0);
void *dt__9TWindowDDFPvs(void *arg0, s16 arg1);
s32 draw_visible_window_entries(s32, s32, void *, f32);
int update_window_entry_list(void*, void*);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void *draw_default_entry__9TWindowDDFl();
int update_fade__17TWindowSubComCardFv(void*);

extern "C" void TWindowDD__sub_80340A78();
extern "C" void init__9TWindowDDFv();
extern "C" void render_shadows__7TObjectFv();
struct W_80340F00 { s32 f0; u8 pad4[0x14]; void *p18; u8 pad1c[0x5C - 0x1C]; s32 f5c; u8 pad60[4]; f32 f64; f32 f68; f32 f6c; };
void *construct_base__9TWindowDDFPvPvsPv(void *, void *, s16, void *);
extern s32 lbl_805D42D0;
extern const f32 lbl_805DFC50;
extern const f32 lbl_805DFC70;
extern "C" void TWindowDD__sub_80340A78();
extern "C" void init__9TWindowDDFv();
extern "C" void render_shadows__7TObjectFv();
__declspec(section ".data") void *lbl_804EFBC8[2] = {
    (void *)0x0, (void *)0x0,
};
void *lbl_804EFBD0[5] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x3,
};
void *lbl_804EFBE4[7] = {
    (void *)0x0, (void *)0x0, (void *)&dt__9TWindowDDFPvs, (void *)&init__9TWindowDDFv,
    (void *)&TWindowDD__sub_80340A78, (void *)&render_shadows__7TObjectFv, (void *)0x0,
};

#define lbl_804EFBE4 ((s32 *)lbl_804EFBE4)
W_80340F00 *construct_variant_b__9TWindowDDFPv(W_80340F00 *arg0);

void *dt__9TWindowDDFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804EFBE4;
        ((TWindowDD *)arg0)->destroy_window_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

W_80340F00 *construct_variant_b__9TWindowDDFPv(W_80340F00 *arg0) {
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
        o = (void *)construct_variant_b__9TWindowDDFPv((W_80340F00 *)o);
    }
    return o;
}

extern f32 lbl_805DFC90;

void draw_and_scroll_entry__9TWindowDDFi(s32 arg0) {
    f32 temp_f1;
    void *temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFl();
    ((TWindowDD *)arg0)->calc_inner_rect((u8 *)temp_r3);
    ((TWindowDD *)arg0)->draw_entry_if_visible((void *)(temp_r3));
    temp_f1 = *(f32 *)((s8 *)temp_r3 + 0x14);
    *(f32 *)((s8 *)temp_r3 + 0x14) = (f32) (temp_f1 + lbl_805DFC90);
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3, temp_f1);
}

extern f32 lbl_805DFC94;

void TWindowDD::draw_entry_if_visible(void *arg1) {
    if ((s32) *(s32 *)((s8 *)arg1 + 0x30) >= 0) {
        draw((s32)arg1, (s32)(*(s32 *)&this->m_7c), (f32)lbl_805DFC94);
    }
}

void TWindowDD::init_window() { initialize_subwindow(); update_fade__17TWindowSubComCardFv(this); update_window_entry_list(this, (char*)this + 0x24); }

}
