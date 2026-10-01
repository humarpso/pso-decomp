#include "pso/TLevelSelect.h"

TLevelSelect::~TLevelSelect() {}

#include "types.h"

struct Self_80133068 { u8 pad[0x20]; s32 f20; s32 f24; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Self_8013319C {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    s32 count;
    void *cur;
    void *guide;
};

struct Ent_8013319C { s32 id; s32 b; s32 c; };

struct Ents_8013319C { Ent_8013319C e[4]; };

struct Pos_8013319C { s32 x; s32 y; };

struct Poss_8013319C { Pos_8013319C p[4]; };

extern "C" {
s32 TLevelSelect__sub_801F441C(int, int);
int TLevelSelect__sub_80132F9C(void);
void TKeyBoardControl__sub_8000F9CC(s32);
void queue_destruction__7TObjectFv(void *);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 get_selected_slot__23TAdSinglePlyChrSelectGCFPv(s32);
s32 TAdSinglePlyChrSelectGC__sub_801334DC(s32);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
void TAdMultiChgGameModeGC__sub_8023E834(void);
void set_game_mode_changed__21TAdMultiChgGameModeGCFv(void);
void set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, s32, u32);
extern u8 lbl_8050E208[];
extern u8 lbl_8050E3B8[];
extern s32 lbl_805D5550;
void run_task__12TLevelSelectFv(Self_80133068 *self);
void __ct__7TObjectFP7TObject(void *, void *);
void TKeyBoardControl__sub_8000F90C(s32);
void TKeyBoardControl__sub_8000F9CC(s32);
void queue_destruction__7TObjectFv(void *);
int TLevelSelect__sub_80132F9C(void);
void *__nw__7TObjectFUl(u32);
void __ct__9TAdBackGCFv(void *, void *);
void __ct__12TAdBackTxtGCFv(void *, void *);
void __ct__8TAdRayGCFv(void *, void *);
void __ct__10TAdTitleGCFv(void *, void *, int);
void __ct__13TAdTitleTexGCFv(void *, void *);
void __ct__14TAdSelectTxtGCFv(void *, void *, void *, int);
void *__ct__14TAdSelectCurGCFv(void *, void *, void *, void *);
void *__ct__13TAdGuideTxtGCFv(void *, void *);
void TLevelSelect__sub_802AEBE4(void *, void *);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
void set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, s32, u32);
void TAdMcSelectGC__sub_80019DA8(void *, s32, f32);
extern Ents_8013319C lbl_8043ED28;
extern Pos_8013319C lbl_8043ED58[];
extern Poss_8013319C lbl_8043ED60;
extern u8 __vt__12TLevelSelect[];
extern s32 lbl_805D2CA0;
extern s32 lbl_805D5550;
extern void *tl_01;
extern const f32 lbl_805DB080;
Self_8013319C *__ct__12TLevelSelectFv(Self_8013319C *self);
}

extern "C" {

void render__12TLevelSelectFv(void);

void render__12TLevelSelectFv(void) {  }
int TLevelSelect__sub_80132F9C(void) {
    u8 f;
    int n;
    f = 0;
    if (TLevelSelect__sub_801F441C(0, 0x35) != 0 || TLevelSelect__sub_801F441C(0, 0x57) != 0) {
        f = 1;
    }
    n = f;
    f = 0;
    if (TLevelSelect__sub_801F441C(1, 0x37) != 0 || TLevelSelect__sub_801F441C(1, 0x57) != 0) {
        f = 1;
    }
    n += f;
    f = 0;
    if (TLevelSelect__sub_801F441C(2, 0x37) != 0 || TLevelSelect__sub_801F441C(2, 0x57) != 0) {
        f = 1;
    }
    n += f;
    return n;
}
void run_task__12TLevelSelectFv(Self_80133068 *self) {
    TAdMultiChgGameModeGC__sub_8023E834();
    if (lbl_805D5550 != TAdSinglePlyChrSelectGC__sub_801334DC(self->f20)) {
        set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(self->f24, 1, TAdSinglePlyChrSelectGC__sub_80132F2C(0xD, TAdSinglePlyChrSelectGC__sub_801334DC(self->f20) + 1));
    }
    lbl_805D5550 = TAdSinglePlyChrSelectGC__sub_801334DC(self->f20);
    switch (get_selected_slot__23TAdSinglePlyChrSelectGCFPv(self->f20)) {
    case 1:
        TKeyBoardControl__sub_8000F9CC(0xE);
        break;
    case 0:
    default:
        if (TWindowShortListCtrl__check_controller_button(&lbl_8050E3B8[0x20], 2) != 0 ||
            test_flag_4c__23TAdSinglePlyChrSelectGCFPv(&lbl_8050E208[0x160], 2) != 0) {
            queue_destruction__7TObjectFv(self);
            set_game_mode_changed__21TAdMultiChgGameModeGCFv();
        }
        break;
    }
}
Self_8013319C *__ct__12TLevelSelectFv(Self_8013319C *self) {
    void *p;
    u32 i;
    __ct__7TObjectFP7TObject(self, tl_01);
    self->vt = __vt__12TLevelSelect;
    self->f0 = lbl_805D2CA0;
    TKeyBoardControl__sub_8000F90C(2);
    lbl_805D5550 = 0;
    self->count = ((int (*)(void *))TLevelSelect__sub_80132F9C)(self);
    if (self->count == 0) {
        TKeyBoardControl__sub_8000F9CC(0xE);
        queue_destruction__7TObjectFv(self);
        return self;
    }
    if ((p = __nw__7TObjectFUl(0x24)) != NULL) {
        __ct__9TAdBackGCFv(p, self);
    }
    if ((p = __nw__7TObjectFUl(0x28)) != NULL) {
        __ct__12TAdBackTxtGCFv(p, self);
    }
    if ((p = __nw__7TObjectFUl(0x24)) != NULL) {
        __ct__8TAdRayGCFv(p, self);
    }
    if ((p = __nw__7TObjectFUl(0x138)) != NULL) {
        __ct__10TAdTitleGCFv(p, self, 2);
    }
    if ((p = __nw__7TObjectFUl(0x9C)) != NULL) {
        __ct__13TAdTitleTexGCFv(p, self);
    }
    {
        Ents_8013319C ents = lbl_8043ED28;
        for (i = 0; i < self->count + 1; i++) {
            ents.e[i].id = -1;
        }
        if ((p = __nw__7TObjectFUl(0xE0)) != NULL) {
            __ct__14TAdSelectTxtGCFv(p, self, &ents.e[0], 0);
        }
        if ((p = __nw__7TObjectFUl(0xE0)) != NULL) {
            __ct__14TAdSelectTxtGCFv(p, self, &ents.e[1], 1);
        }
        if ((p = __nw__7TObjectFUl(0xE0)) != NULL) {
            __ct__14TAdSelectTxtGCFv(p, self, &ents.e[2], 2);
        }
        if ((p = __nw__7TObjectFUl(0xE0)) != NULL) {
            __ct__14TAdSelectTxtGCFv(p, self, &ents.e[3], 3);
        }
        {
            Pos_8013319C pos = lbl_8043ED58[0];
            Poss_8013319C poss = lbl_8043ED60;
            p = __nw__7TObjectFUl(0x708);
            if (p != NULL) {
                p = __ct__14TAdSelectCurGCFv(p, self, &poss, &pos);
            }
            self->cur = p;
            TLevelSelect__sub_802AEBE4(self->cur, &poss.p[0]);
            p = __nw__7TObjectFUl(0x44);
            if (p != NULL) {
                p = __ct__13TAdGuideTxtGCFv(p, self);
            }
            self->guide = p;
            ((void (*)(void *, s32, u32))set_entry_value__22TAdMultiPlyChrSelectGCFiiUi)(self->guide, 0, TAdSinglePlyChrSelectGC__sub_80132F2C(0xD, 0));
            ((void (*)(void *, s32, u32))set_entry_value__22TAdMultiPlyChrSelectGCFiiUi)(self->guide, 1, TAdSinglePlyChrSelectGC__sub_80132F2C(0xD, 1));
            switch (self->count) {
            case 1:
                TLevelSelect__sub_802AEBE4(self->cur, &poss.p[1]);
                break;
            case 2:
                TLevelSelect__sub_802AEBE4(self->cur, &poss.p[1]);
                TLevelSelect__sub_802AEBE4(self->cur, &poss.p[2]);
                break;
            case 3:
                TLevelSelect__sub_802AEBE4(self->cur, &poss.p[1]);
                TLevelSelect__sub_802AEBE4(self->cur, &poss.p[2]);
                TLevelSelect__sub_802AEBE4(self->cur, &poss.p[3]);
                break;
            }
        }
    }
    TAdMcSelectGC__sub_80019DA8(self, 2, lbl_805DB080);
    return self;
}

}
