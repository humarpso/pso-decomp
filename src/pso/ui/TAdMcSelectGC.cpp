#include "types.h"
#include "pso/ui/TAdMcSelectGC.h"

struct Self_80329EC8 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    s32 f1C;
    u8 pad20[4];
    s32 f24;
    s32 f28;
    s32 f2C;
    void *f30;
};

extern "C" {
u32 get_mc_count__13TAdMcSelectGCFv();
s32 get_slot_index__13TAdMcSelectGCFv(void *);
s32 get_state_flag__9TMainTaskFv();
void *create_draw_line_ctrl__13TAdMcSelectGCFiif(void *, s32, f32);
void *__nw__7TObjectFUl(u32);
void __ct__7TObjectFP7TObject(void *, void *);
void *__ct__9TAdBackGCFv(void *, void *);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void *__ct__10TAdTitleGCFv(void *, void *, s32);
void init_slot__13TAdMcSelectGCFlPv(void *, s32, void *);
void *__ct__15TAdChrSelSlotGCFv(void *, void *);
void set_field_13c__13TAdMcSelectGCFl(void *, s32);
void set_field_0x1c__13TAdMcSelectGCFl(void *, s32);
void set_select_index__13TAdMcSelectGCFl(void *, s32);
void TAdMcSelectGC__sub_8032A180(void *, s32);
void set_field_134__13TAdMcSelectGCFl(void *, s32);
void set_field_24__13TAdMcSelectGCFl(void *, s32);
void set_field20__13TAdMcSelectGCFf(void *, f32);
void set_field_20__13TAdMcSelectGCFl(void *, s32);
void set_float_1c__13TAdMcSelectGCFf(void *, f32);
void *get_instance__19TAdMcSelectCursorGCFl(void *);
void *__ct__15TAdMcSelectMcGCFv(void *, void *, s32);
void fn_8033F314(void *, s32);
extern u8 lbl_804770F8[];
extern u8 lbl_80477100[];
extern s32 __vt__13TAdMcSelectGC[];
extern s32 lbl_805D41C8;
extern const f32 lbl_805DF718;
extern const f32 lbl_805DF71C;
extern const f32 lbl_805DF720;
Self_80329EC8 *TAdMcSelectGC__ct(Self_80329EC8 *self, void *parent);
}

extern "C" {

void *__dt__13TAdMcSelectGCFv(void *arg0, s16 arg1);
int TAdMcSelectGC__sub_8032A140();
int TAdMcSelectGC__sub_8032A15C();
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);
u32 get_mc_count__13TAdMcSelectGCFv();

void TAdMcSelectGC::render(void *self) {
    if (get_state_flag__9TMainTaskFv() == 1) { return;
    }
}

void TAdMcSelectGC::update_state() {
    if (get_mc_count__13TAdMcSelectGCFv() != 0U) {
        TAdMcSelectGC__sub_8032A140();
    }
}

s32 TAdMcSelectGC::get_selected_slot_index() {
    s32 var_r0;
    u8 *temp_r3;
    temp_r3 = (u8 *)(((int)get_mc_count__13TAdMcSelectGCFv()));
    var_r0 = 0;
    if (temp_r3 != NULL) {
        var_r0 = get_slot_index__13TAdMcSelectGCFv(temp_r3);
    }
    return var_r0;
}

void TAdMcSelectGC::select_if_mc_present() {
    if (get_mc_count__13TAdMcSelectGCFv() != 0U) {
        TAdMcSelectGC__sub_8032A15C();
    }
}

void TAdMcSelectGC::run_task() {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)this + 0x1C);
    switch (temp_r0) {
    case 0:
        *(s32 *)((s8 *)this + 0x1C) = 1;
        return;
    case 1:
        return;
    }
}

extern s32 __vt__13TAdMcSelectGC[];
extern u32 TAdMcSelectGC__instance;

void *__dt__13TAdMcSelectGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TAdMcSelectGC;
        if ((u32) TAdMcSelectGC__instance != 0U) {
            TAdMcSelectGC__instance = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Self_80329EC8 *TAdMcSelectGC__ct(Self_80329EC8 *self, void *parent) {
    void *back;
    void *txt;
    void *p;
    s32 i;
    s32 j;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = (void *)((s32 *)&__vt__13TAdMcSelectGC);
    self->f0 = lbl_805D41C8;
    self->f28 = 0;
    self->f1C = 0;
    self->f24 = 0;
    self->f2C = 0;
    self->f30 = 0;
    back = __nw__7TObjectFUl(0x24);
    if (back != NULL) {
        back = __ct__9TAdBackGCFv(back, self);
    }
    txt = __nw__7TObjectFUl(0x28);
    if (txt != NULL) {
        txt = __ct__12TAdBackTxtGCFv(txt, self);
    }
    set_float_1c__13TAdMcSelectGCFf(back, lbl_805DF718);
    set_field_20__13TAdMcSelectGCFl(back, 0);
    set_field20__13TAdMcSelectGCFf(txt, lbl_805DF71C);
    set_field_24__13TAdMcSelectGCFl(txt, 0);
    p = __nw__7TObjectFUl(0x138);
    if (p != NULL) {
        p = __ct__10TAdTitleGCFv(p, self, 0xD);
    }
    set_field_134__13TAdMcSelectGCFl(p, 0);
    TAdMcSelectGC__sub_8032A180(create_draw_line_ctrl__13TAdMcSelectGCFiif(self, 0x16, lbl_805DF720), 0);
    TAdMcSelectGC__sub_8032A180(create_draw_line_ctrl__13TAdMcSelectGCFiif(self, 0x17, lbl_805DF720), 0);
    p = __nw__7TObjectFUl(0x128);
    if (p != NULL) {
        p = __ct__15TAdChrSelSlotGCFv(p, self);
    }
    self->f30 = p;
    set_select_index__13TAdMcSelectGCFl(self->f30, 0);
    init_slot__13TAdMcSelectGCFlPv(self->f30, 0, lbl_804770F8);
    init_slot__13TAdMcSelectGCFlPv(self->f30, 1, lbl_80477100);
    for (i = 0; i < 2; i++) {
        p = __nw__7TObjectFUl(0x134);
        if (p != NULL) {
            p = __ct__15TAdMcSelectMcGCFv(p, self, i);
        }
        set_field_0x1c__13TAdMcSelectGCFl(p, 0);
    }
    set_field_13c__13TAdMcSelectGCFl(get_instance__19TAdMcSelectCursorGCFl(self), 0);
    for (j = 0; j < 2; j++) {
        fn_8033F314(self, j);
    }
    return self;
}

}
