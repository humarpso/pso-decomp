#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct VBase_803399B4 { char pad[0x18]; };

struct VObj_803399B4 : VBase_803399B4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

struct Ent_803399B4 { u8 pad0[0x20]; u8 f20[0x30]; };

struct Win_803399B4 {
    u8 pad0[0x1C];
    u8 state;
    u8 pad1D[3];
    s32 f20;
    VObj_803399B4 *f24;
};

extern "C" {
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
void play_sound_effect(s32, s32, s32, s32);
s32 is_player_input_active(s32);
extern Ent_803399B4 lbl_8050E208[];
void run_task__22TWindowSubTradeMessageFv(Win_803399B4 *self);
}

extern "C" {

void *TWindowSubTradeMessage__ct(void *arg0, void *arg1, void *arg2);
void *__dt__22TWindowSubTradeMessageFv(void *arg0, s16 arg1);
void render__22TWindowSubTradeMessageFv(void);
void TLobby__sub_802D29B8(void *);
void TLobby__sub_802D29DC(void *);
void TWindow__close(void *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void render__22TWindowSubTradeMessageFv(void) {  }

extern M2C_UNK __vt__22TWindowSubTradeMessage[];

void run_task__22TWindowSubTradeMessageFv(Win_803399B4 *self) {
    s32 idx = is_player_input_active(self->f20);
    switch (self->state) {
    case 0:
        self->state = 1;
    case 1:
        if (TWindowShortListCtrl__check_controller_button(lbl_8050E208[idx].f20, 2) != 0 ||
            test_flag_4c__23TAdSinglePlyChrSelectGCFPv(lbl_8050E208[4].f20, 2) != 0) {
            play_sound_effect(0x52F16, 0, 0, 0);
            self->f24->m7();
            self->state = 2;
        }
        break;
    case 2:
        break;
    }
}

void *__dt__22TWindowSubTradeMessageFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TWindowSubTradeMessage;
        TLobby__sub_802D29B8(arg0);
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__22TWindowSubTradeMessage[];
extern void *lbl_805D4278;

void *TWindowSubTradeMessage__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TWindowSubTradeMessage;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4278;
    M2C_FIELD(arg0, void **, 0x24) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    TLobby__sub_802D29DC(arg0);
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

}
