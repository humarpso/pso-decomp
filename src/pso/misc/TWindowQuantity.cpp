#include "types.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TWindowQuantity.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowSubStatusDisp.h"

struct Quantity_8026D000 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void **vt;
    u8 pad1C[0x38 - 0x1C];
    f32 f38;
    u8 pad3C[0x60 - 0x3C];
    f32 f60;
    f32 f64;
    f32 f68;
};

extern "C" {
s32 draw_visible_window_entries(void *, void *, int);
void render__15TWindowQuantityFv(s32 arg0);
s32 get_camera_id__11TCameraCtrlFv(void);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
u32 calc_text_width(void);
u8 *get_array_entry__13TUnk_804CE018Fi(void *, s32);
void construct_base__9TWindowDDFPvPvsPv(void *, void *, s16, s32);
void set_text_entry_string(void *, s32, s32);
s32 get_window_layout_position(s32);
f32 TWindowSubStatusDisp__sub_802877A4(f32);
extern u8 lbl_804D0870[];
extern s32 __vt__15TWindowQuantity[];
extern s32 lbl_805D39B0;
extern const f32 lbl_805DD2D0;
extern const f32 lbl_805DD2D4;
extern const f32 lbl_805DD2D8;
extern const f32 lbl_805DD2DC;
extern const f32 lbl_805DD2E0;
void *TWindowQuantity__ct(void *arg0, void *arg1);
}

extern "C" {

void *create_window_quantity(void *arg0);
void *__dt__15TWindowQuantityFv(void *arg0, s16 arg1);
s32 draw_window_tab(s32, s32, s32, f32);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
int initialize_subwindow__9TWindowDDFv(void*);

void TWindowQuantity::set_position(s32 arg1) {
    draw_window_tab(arg1, arg1 + 0x10, 3, this->m_60);
}

void render__15TWindowQuantityFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((TUnk_804CE018 *)arg0)->setup_window_draw_context((s32)((void *) (arg0 + 0x64)));
    ((TWindowQuantity *)arg0)->set_position((s32)((int) (temp_r3)));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}

void TWindowQuantity::run_task() { initialize_subwindow__9TWindowDDFv(this); update_window_entry_list((char*)this + 0x24); }

extern s32 __vt__15TWindowQuantity[];

void *__dt__15TWindowQuantityFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TWindowQuantity;
        ((TWindowDD *)arg0)->destroy_window_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TWindowQuantity__ct(void *arg0, void *arg1) {
#define self ((Quantity_8026D000 *)arg0)
    u8 *e1;
    u8 *e0;
    s32 id;
    f32 n;
    construct_base__9TWindowDDFPvPvsPv(arg0, lbl_804D0870, (s16)(s32)arg1, get_window_layout_position(0x2A));
    self->vt = ((void * *)&__vt__15TWindowQuantity);
    self->f0 = lbl_805D39B0;
    id = TQuestVmDownLoadServer__sub_8006EF6C(1);
    n = (f32)calc_text_width();
    self->f60 = TWindowSubStatusDisp__sub_802877A4(lbl_805DD2D0 + (lbl_805DD2D4 + n));
    e0 = get_array_entry__13TUnk_804CE018Fi(arg0, 0);
    e1 = get_array_entry__13TUnk_804CE018Fi(arg0, 1);
    set_text_entry_string(e0, id, 0);
    *(f32 *)(e1 + 8) = lbl_805DD2D0 + (lbl_805DD2D4 + (lbl_805DD2D8 + n));
    self->f38 = TWindowSubStatusDisp::get_base_y(self->f60);
    ((TUnk_804CE018 *)arg0)->save_position();
    if (get_camera_id__11TCameraCtrlFv() > 2) {
        self->f64 = lbl_805DD2DC;
        self->f68 = lbl_805DD2DC;
    } else {
        self->f64 = lbl_805DD2E0;
        self->f68 = lbl_805DD2E0;
    }
    return arg0;
#undef self
}

void *create_window_quantity(void *arg0) {
    void *o = __nw__7TObjectFUl(0x6C);
    if (o != NULL) {
        o = TWindowQuantity__ct((void *)(o), (void *)(arg0));
    }
    return o;
}

}
