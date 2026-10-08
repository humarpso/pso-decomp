#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef struct Obj_802FF87C {
    u8 pad0[0x1C];
    s32 state;
    u32 count;
    u8 pad24[0x34 - 0x24];
    void *players[4];
    u8 pad44[4];
    s32 x48;
} Obj_802FF87C;

struct TAdMultiConfirmGC_802FFA3C {
    s32 x0;
    u8 pad4[0x14];
    void *vt;
    s32 state;
    u32 count;
    s32 ids[4];
    void *players[4];
    void *guide;
    void *ok;
};

struct OkArg_802FFA3C { u32 count; u32 mask; };

extern "C" {
void set_state_0xc__21TAdMultiChgGameModeGCFv(void);
void set_change_game_mode__21TAdMultiChgGameModeGCFv(void);
void set_field_100__22TAdMultiPlyChrSelectGCFPvi(void *, s32);
void TAdMultiConfirmGC__sub_802E03D0(void *);
void TAdMultiConfirmGC__sub_802E0448(void *);
s32 fn_802E0454(void *);
s32 TAdMultiConfirmGC__sub_80306ABC(s32);
s32 fn_80306AC8(s32);
void run_task__17TAdMultiConfirmGCFv(Obj_802FF87C *arg0);
void *get_localized_text_entry(s32, s32);
void *__nw__7TObjectFUl(u32);
void __ct__7TObjectFP7TObject(void *, void *);
void __ct__9TAdBackGCFv(void *, void *);
void __ct__12TAdBackTxtGCFv(void *, void *);
void __ct__10TAdTitleGCFv(void *, void *, s32);
void __ct__13TAdTitleTexGCFv(void *, void *);
void set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(void *, s32, void *);
void *__ct__13TAdGuideTxtGCFv(void *, void *);
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(u32);
void *get_or_create_player__22TAdMultiPlyChrSelectGCFiiii(void *, u32, u32, s32);
void fn_802FF7EC(void *);
void *__ct__12TAdMultiOkGCFv(void *, void *, OkArg_802FFA3C *);
void __ct__18TAdMultiPlayerNoGCFv(void *, void *, u32, u32, s32);
extern M2C_UNK __vt__17TAdMultiConfirmGC[];
extern s32 lbl_805D4050;
extern u8 lbl_805DEF30;
TAdMultiConfirmGC_802FFA3C *TAdMultiConfirmGC__ct(TAdMultiConfirmGC_802FFA3C *self, void *parent);
}

extern "C" {

void *__dt__17TAdMultiConfirmGCFv(void *arg0, s16 arg1);
void render__17TAdMultiConfirmGCFv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void fn_802FF760(void *);

void render__17TAdMultiConfirmGCFv(void) {  }

extern M2C_UNK __vt__17TAdMultiConfirmGC[];

void run_task__17TAdMultiConfirmGCFv(Obj_802FF87C *arg0) {
    u32 j;
    u32 i;
    switch (arg0->state) {
    case 0:
        arg0->state = 1;
        break;
    case 1:
        for (i = 0; i < 4; i++) {
            if (arg0->players[i] != NULL) {
                set_field_100__22TAdMultiPlyChrSelectGCFPvi(arg0->players[i], 2);
            }
        }
        arg0->state = 2;
        break;
    case 2:
        i = 1;
        for (j = 0; j < arg0->count; j++) {
            if (arg0->players[j] != NULL && fn_802E0454(arg0->players[j]) == 0) {
                i = 0;
                break;
            }
        }
        if ((s32)i == 1) {
            for (i = 0; i < arg0->count; i++) {
                if (arg0->players[i] != NULL) {
                    TAdMultiConfirmGC__sub_802E0448(arg0->players[i]);
                    TAdMultiConfirmGC__sub_802E03D0(arg0->players[i]);
                }
            }
            arg0->state = 3;
        }
        break;
    case 3:
        if (TAdMultiConfirmGC__sub_80306ABC(arg0->x48) != 0) {
            set_change_game_mode__21TAdMultiChgGameModeGCFv();
        } else if (fn_80306AC8(arg0->x48) != 0) {
            set_state_0xc__21TAdMultiChgGameModeGCFv();
        }
        break;
    }
}

void *__dt__17TAdMultiConfirmGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TAdMultiConfirmGC;
        fn_802FF760(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma opt_common_subs off
TAdMultiConfirmGC_802FFA3C *TAdMultiConfirmGC__ct(TAdMultiConfirmGC_802FFA3C *self, void *parent) {
    OkArg_802FFA3C arg;
    u32 i;
    u32 j;
    u32 n;
    void *p;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = __vt__17TAdMultiConfirmGC;
    self->x0 = lbl_805D4050;
    self->state = 0;
    self->guide = 0;
    for (i = 0; i < 4; i++) {
        self->players[i] = 0;
    }
    if ((p = __nw__7TObjectFUl(0x24)) != 0) {
        __ct__9TAdBackGCFv(p, self);
    }
    if ((p = __nw__7TObjectFUl(0x28)) != 0) {
        __ct__12TAdBackTxtGCFv(p, self);
    }
    if ((p = __nw__7TObjectFUl(0x138)) != 0) {
        __ct__10TAdTitleGCFv(p, self, 0x10);
    }
    if ((p = __nw__7TObjectFUl(0x9C)) != 0) {
        __ct__13TAdTitleTexGCFv(p, self);
    }
    self->count = 0;
    for (i = 0; i < 4; i++) {
        self->ids[i] = 0;
    }
    for (i = 0; i < 4; i++) {
        if (TAdMultiPlyChrSelectGC__sub_802C64D0(i) != 0) {
            self->ids[self->count] = i;
            self->count++;
        }
    }
    arg.count = self->count;
    arg.mask = 0;
    for (j = 0; j < (n = self->count); j++) {
        self->players[j] = get_or_create_player__22TAdMultiPlyChrSelectGCFiiii(self, n + 1, j, self->ids[j]);
        if ((p = __nw__7TObjectFUl(0x48)) != 0) {
            __ct__18TAdMultiPlayerNoGCFv(p, self, self->count, j, self->ids[j]);
        }
        arg.mask |= 1 << self->ids[j];
    }
    p = __nw__7TObjectFUl(0x984);
    if (p != 0) {
        p = __ct__12TAdMultiOkGCFv(p, self, &arg);
    }
    self->ok = p;
    p = __nw__7TObjectFUl(0x44);
    if (p != 0) {
        p = __ct__13TAdGuideTxtGCFv(p, self);
    }
    self->guide = p;
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(self->guide, 0, get_localized_text_entry(0x25, 0));
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(self->guide, 1, &lbl_805DEF30);
    fn_802FF7EC(self);
    return self;
}
#pragma pop

}
