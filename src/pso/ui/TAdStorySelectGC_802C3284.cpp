#include "pso/TAdStorySelectGC.h"

TAdStorySelectGC::~TAdStorySelectGC() {}

#include "types.h"

struct Obj_802C3288 { u8 pad[0x1C]; s32 f1C; s32 f20; };

struct A_802C3400 { f32 x, y; };

struct B_802C3400 { A_802C3400 e[2]; };

struct CE_802C3400 { s32 a; f32 x, y; };

struct C_802C3400 { CE_802C3400 e[2]; };

struct Self_802C3400 { s32 f0; u8 pad4[0x14]; void *vt; void *f1C; void *f20; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
s32 get_localized_text_entry(s32, s32);
s32 get_selected_slot__23TAdSinglePlyChrSelectGCFPv(s32);
s32 TAdSinglePlyChrSelectGC__sub_801334DC(s32);
s32 TAdStorySelectGC__sub_8019DC14(void);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
void set_state__16TAdStorySelectGCFi(s32);
void play_sound_effect(s32, s32, s32, s32);
void TAdMultiChgGameModeGC__sub_8023E834(void);
void set_change_mode_flags__21TAdMultiChgGameModeGCFv(void);
void set_game_mode__21TAdMultiChgGameModeGCFv(void);
void set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, s32, s32);
extern u8 lbl_8050E208[];
extern s32 lbl_805D67C0;
void run_task__16TAdStorySelectGCFv(Obj_802C3288 *self);
void queue_destruction__7TObjectFv(void *);
void TAdMcSelectGC__sub_80019DA8(void *, s32, f32);
s32 get_localized_text_entry(s32, s32);
void set_state__16TAdStorySelectGCFi(s32);
void *__nw__7TObjectFUl(u32);
void __ct__7TObjectFP7TObject(void *, void *);
void set_change_mode_flags__21TAdMultiChgGameModeGCFv(void);
void request_transition__21TAdMultiChgGameModeGCFv(void);
void set_change_game_mode__21TAdMultiChgGameModeGCFv(void);
s32 TAdMultiPlyChrSelectGC__sub_80299454(void);
void __ct__9TAdBackGCFv(void *, void *);
void __ct__12TAdBackTxtGCFv(void *, void *);
void __ct__8TAdRayGCFv(void *, void *);
void __ct__10TAdTitleGCFv(void *, void *, s32);
s32 get_mode_data__19TAdSelectGameModeGCFv(void);
void __ct__14TAdSelectTxtGCFv(void *, void *, void *, s32);
void __ct__13TAdTitleTexGCFv(void *, void *);
void TLevelSelect__sub_802AEBE4(void *, void *);
void *__ct__14TAdSelectCurGCFv(void *, void *, void *, void *);
void set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, s32, s32);
void *__ct__13TAdGuideTxtGCFv(void *, void *);
s32 get_data__23TAdSinglePlyChrSelectGCFv(s32);
extern C_802C3400 lbl_804719E4;
extern A_802C3400 lbl_804719FC[];
extern B_802C3400 lbl_80471A04;
extern void *__vt__16TAdStorySelectGC[];
extern s32 lbl_805D3EC8;
extern s32 lbl_805D67C0;
extern const f32 lbl_805DE528;
Self_802C3400 *__ct__16TAdStorySelectGCFv(Self_802C3400 *self, void *parent);
}

extern "C" {

void render__16TAdStorySelectGCFv(void);
void TObjPathObj__vt11(void);
void TObjPathObj__vt12(void);

void render__16TAdStorySelectGCFv(void) {  }
void run_task__16TAdStorySelectGCFv(Obj_802C3288 *self) {
    TAdMultiChgGameModeGC__sub_8023E834();
    if (lbl_805D67C0 != TAdSinglePlyChrSelectGC__sub_801334DC(self->f1C)) {
        set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(self->f20, 1, get_localized_text_entry(0x14, TAdSinglePlyChrSelectGC__sub_801334DC(self->f1C) + 1));
    }
    lbl_805D67C0 = TAdSinglePlyChrSelectGC__sub_801334DC(self->f1C);
    switch (get_selected_slot__23TAdSinglePlyChrSelectGCFPv(self->f1C)) {
    case 1:
        switch (TAdStorySelectGC__sub_8019DC14()) {
        case 0:
            set_state__16TAdStorySelectGCFi(0);
            break;
        case 1:
            set_state__16TAdStorySelectGCFi(1);
            break;
        }
        queue_destruction__7TObjectFv(self);
        set_change_mode_flags__21TAdMultiChgGameModeGCFv();
        break;
    case 0:
    default:
        if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 2) != 0 ||
            test_flag_4c__23TAdSinglePlyChrSelectGCFPv(lbl_8050E208 + 0x160, 2) != 0) {
            play_sound_effect(0x52F16, 0, 0, 0);
            set_game_mode__21TAdMultiChgGameModeGCFv();
        }
        break;
    }
}
Self_802C3400 *__ct__16TAdStorySelectGCFv(Self_802C3400 *self, void *parent) {
    void *p;
    s32 id;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = __vt__16TAdStorySelectGC;
    id = lbl_805D3EC8;
    self->f0 = id;
    lbl_805D67C0 = 0;
    self->f1C = 0;
    self->f20 = 0;
    if (get_data__23TAdSinglePlyChrSelectGCFv(id) == 0) {
        request_transition__21TAdMultiChgGameModeGCFv();
        queue_destruction__7TObjectFv(self);
        return self;
    }
    if (get_mode_data__19TAdSelectGameModeGCFv() == 1) {
        set_state__16TAdStorySelectGCFi(0);
        queue_destruction__7TObjectFv(self);
        if (TAdMultiPlyChrSelectGC__sub_80299454() != 0) {
            set_change_game_mode__21TAdMultiChgGameModeGCFv();
        } else {
            set_change_mode_flags__21TAdMultiChgGameModeGCFv();
        }
        return self;
    }
    p = __nw__7TObjectFUl(0x24);
    if (p != NULL) {
        __ct__9TAdBackGCFv(p, self);
    }
    p = __nw__7TObjectFUl(0x28);
    if (p != NULL) {
        __ct__12TAdBackTxtGCFv(p, self);
    }
    p = __nw__7TObjectFUl(0x24);
    if (p != NULL) {
        __ct__8TAdRayGCFv(p, self);
    }
    p = __nw__7TObjectFUl(0x138);
    if (p != NULL) {
        __ct__10TAdTitleGCFv(p, self, 1);
    }
    p = __nw__7TObjectFUl(0x9C);
    if (p != NULL) {
        __ct__13TAdTitleTexGCFv(p, self);
    }
    {
        C_802C3400 c = lbl_804719E4;
        p = __nw__7TObjectFUl(0xE0);
        if (p != NULL) {
            __ct__14TAdSelectTxtGCFv(p, self, &c.e[0], 4);
        }
        p = __nw__7TObjectFUl(0xE0);
        if (p != NULL) {
            __ct__14TAdSelectTxtGCFv(p, self, &c.e[1], 5);
        }
        {
        A_802C3400 a = lbl_804719FC[0];
        B_802C3400 b = lbl_80471A04;
        p = __nw__7TObjectFUl(0x708);
        if (p != NULL) {
            p = __ct__14TAdSelectCurGCFv(p, self, &b, &a);
        }
        self->f1C = p;
        TLevelSelect__sub_802AEBE4(self->f1C, &b.e[0]);
        TLevelSelect__sub_802AEBE4(self->f1C, &b.e[1]);
        }
    }
    p = __nw__7TObjectFUl(0x44);
    if (p != NULL) {
        p = __ct__13TAdGuideTxtGCFv(p, self);
    }
    self->f20 = p;
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi((s32)self->f20, 0, get_localized_text_entry(0x14, 0));
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi((s32)self->f20, 1, get_localized_text_entry(0x14, 1));
    TAdMcSelectGC__sub_80019DA8(self, 0xA, lbl_805DE528);
    return self;
}

}
