#include "types.h"
#include "pso/ui/TAdMultiConfirmGC.h"
#include "pso/TAdMultiChgGameModeGC.h"
#include "pso/ui/TAdMultiPlyChrSelectGC.h"

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
void TAdMultiConfirmGC__sub_802E03D0(void *);
void TAdMultiConfirmGC__sub_802E0448(void *);
s32 fn_802E0454(void *);
s32 multi_confirm_cancel_requested(s32);
s32 are_all_entries_finished(s32);
void *get_localized_text_entry(s32, s32);
void *__nw__7TObjectFUl(u32);
void __ct__9TAdBackGCFv(void *, void *);
void __ct__12TAdBackTxtGCFv(void *, void *);
void __ct__10TAdTitleGCFP7TObjectl(void *, void *, s32);
void __ct__13TAdTitleTexGCFv(void *, void *);
void *__ct__13TAdGuideTxtGCFv(void *, void *);
s32 is_multiplayer_character_slot_selected(u32);
void *get_or_create_player__22TAdMultiPlyChrSelectGCFiiii(void *, u32, u32, s32);
void fn_802FF7EC(void *);
void *__ct__12TAdMultiOkGCFv(void *, void *, OkArg_802FFA3C *);
void __ct__18TAdMultiPlayerNoGCFv(void *, void *, u32, u32, s32);
extern s32 __vt__17TAdMultiConfirmGC[];
extern s32 TAdMultiConfirmGC__name;
extern u8 lbl_805DEF30;
void *__dt__17TAdMultiConfirmGCFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void fn_802FF760(void *);

void TAdMultiConfirmGC::render() {  }

void TAdMultiConfirmGC::run_task() {
    Obj_802FF87C *arg0 = (Obj_802FF87C *)this;
    u32 j;
    u32 i;
    switch (arg0->state) {
    case 0:
        arg0->state = 1;
        break;
    case 1:
        for (i = 0; i < 4; i++) {
            if (arg0->players[i] != NULL) {
                ((TAdMultiPlyChrSelectGC *)(arg0->players[i]))->set_field_100(2);
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
        if (multi_confirm_cancel_requested(arg0->x48) != 0) {
            TAdMultiChgGameModeGC::set_change_game_mode();
        } else if (are_all_entries_finished(arg0->x48) != 0) {
            TAdMultiChgGameModeGC::set_state_0xc();
        }
        break;
    }
}

void *__dt__17TAdMultiConfirmGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TAdMultiConfirmGC;
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
}
TAdMultiConfirmGC::TAdMultiConfirmGC(TObject *parent) : TObject(parent) {
    OkArg_802FFA3C arg;
    u32 i;
    u32 j;
    u32 n;
    void *p;
    ((TAdMultiConfirmGC_802FFA3C *)this)->x0 = TAdMultiConfirmGC__name;
    ((TAdMultiConfirmGC_802FFA3C *)this)->state = 0;
    ((TAdMultiConfirmGC_802FFA3C *)this)->guide = 0;
    for (i = 0; i < 4; i++) {
        ((TAdMultiConfirmGC_802FFA3C *)this)->players[i] = 0;
    }
    if ((p = __nw__7TObjectFUl(0x24)) != 0) {
        __ct__9TAdBackGCFv(p, ((TAdMultiConfirmGC_802FFA3C *)this));
    }
    if ((p = __nw__7TObjectFUl(0x28)) != 0) {
        __ct__12TAdBackTxtGCFv(p, ((TAdMultiConfirmGC_802FFA3C *)this));
    }
    if ((p = __nw__7TObjectFUl(0x138)) != 0) {
        __ct__10TAdTitleGCFP7TObjectl(p, ((TAdMultiConfirmGC_802FFA3C *)this), 0x10);
    }
    if ((p = __nw__7TObjectFUl(0x9C)) != 0) {
        __ct__13TAdTitleTexGCFv(p, ((TAdMultiConfirmGC_802FFA3C *)this));
    }
    ((TAdMultiConfirmGC_802FFA3C *)this)->count = 0;
    for (i = 0; i < 4; i++) {
        ((TAdMultiConfirmGC_802FFA3C *)this)->ids[i] = 0;
    }
    for (i = 0; i < 4; i++) {
        if (is_multiplayer_character_slot_selected(i) != 0) {
            ((TAdMultiConfirmGC_802FFA3C *)this)->ids[((TAdMultiConfirmGC_802FFA3C *)this)->count] = i;
            ((TAdMultiConfirmGC_802FFA3C *)this)->count++;
        }
    }
    arg.count = ((TAdMultiConfirmGC_802FFA3C *)this)->count;
    arg.mask = 0;
    for (j = 0; j < (n = ((TAdMultiConfirmGC_802FFA3C *)this)->count); j++) {
        ((TAdMultiConfirmGC_802FFA3C *)this)->players[j] = get_or_create_player__22TAdMultiPlyChrSelectGCFiiii(((TAdMultiConfirmGC_802FFA3C *)this), n + 1, j, ((TAdMultiConfirmGC_802FFA3C *)this)->ids[j]);
        if ((p = __nw__7TObjectFUl(0x48)) != 0) {
            __ct__18TAdMultiPlayerNoGCFv(p, ((TAdMultiConfirmGC_802FFA3C *)this), ((TAdMultiConfirmGC_802FFA3C *)this)->count, j, ((TAdMultiConfirmGC_802FFA3C *)this)->ids[j]);
        }
        arg.mask |= 1 << ((TAdMultiConfirmGC_802FFA3C *)this)->ids[j];
    }
    p = __nw__7TObjectFUl(0x984);
    if (p != 0) {
        p = __ct__12TAdMultiOkGCFv(p, ((TAdMultiConfirmGC_802FFA3C *)this), &arg);
    }
    ((TAdMultiConfirmGC_802FFA3C *)this)->ok = p;
    p = __nw__7TObjectFUl(0x44);
    if (p != 0) {
        p = __ct__13TAdGuideTxtGCFv(p, ((TAdMultiConfirmGC_802FFA3C *)this));
    }
    ((TAdMultiConfirmGC_802FFA3C *)this)->guide = p;
    ((TAdMultiPlyChrSelectGC *)(((TAdMultiConfirmGC_802FFA3C *)this)->guide))->set_entry_value(0, (u32)(get_localized_text_entry(0x25, 0)));
    ((TAdMultiPlyChrSelectGC *)(((TAdMultiConfirmGC_802FFA3C *)this)->guide))->set_entry_value(1, (u32)(&lbl_805DEF30));
    fn_802FF7EC(((TAdMultiConfirmGC_802FFA3C *)this));
}
extern "C" {
#pragma pop

}
