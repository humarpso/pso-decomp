#include "types.h"

struct B_8032D214 { u8 pad[0x18]; };

struct V_8032D214 : B_8032D214 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void *m5();
};

struct VBase_18_df5984 { char pad[0x18]; };

struct VObj_18_df5984 : VBase_18_df5984 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

extern "C" {
s32 get_state_flag__9TMainTaskFv();
void TAdWarningBaseGC__vt5(void *self);
void send_and_handle__6TLobbyFPvii(s32, void *, int);
s32 update_window_mode_from_progress__6TLobbyFiPv(void *, void *);
extern u8 lbl_80477334[];
extern u8 lbl_8047733C[];
s32 TAdWarningBaseGC__sub_8032D214(V_8032D214 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
void play_sound_effect(int, int, int, int);
void TWindow__close(void *);
s32 TAdWarningBaseGC__sub_8032D214(V_8032D214 *arg0);
extern u8 controller_input_state[];
extern u8 controller_physical_port_bank[];
extern const f32 lbl_805DF7B0;
void TAdWarningBaseGC__vt4(u8 *arg0);
}

extern "C" {

void *TAdWarningBaseGC__ct(void *arg0);
void clear_aram_request_busy(void);
void *TAdWarningBaseGC__vt0(void *arg0, s16 arg1);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *__ct__9TAdBackGCFv(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void queue_destruction__7TObjectFv(void *);

    extern int aram_request_busy_flag;
void clear_aram_request_busy(void) { aram_request_busy_flag = 0; }

extern s32 __vt__16TAdWarningBaseGC[];

void TAdWarningBaseGC__vt5(void *self) {
    if (get_state_flag__9TMainTaskFv() == 1) { return;
    }
}

s32 TAdWarningBaseGC__sub_8032D214(V_8032D214 *arg0) {
    s32 r = update_window_mode_from_progress__6TLobbyFiPv(lbl_80477334, lbl_8047733C);
    send_and_handle__6TLobbyFPvii(r, arg0->m5(), 3);
    return r;
}

void TAdWarningBaseGC__vt4(u8 *arg0) {
    u8 *a;
    u8 *b;
    *(s32 *)((s8 *)arg0 + 0x20) = *(s32 *)((s8 *)arg0 + 0x1C);
    switch (*(s32 *)((s8 *)arg0 + 0x1C)) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0x2C) = TAdWarningBaseGC__sub_8032D214((V_8032D214 *)arg0);
        *(s32 *)((s8 *)arg0 + 0x1C) = 1;
        break;
    case 1:
        play_sound_effect(0x53F06, 0, 0, 0);
        *(s32 *)((s8 *)arg0 + 0x1C) = 2;
        break;
    case 2:
        if (TWindowShortListCtrl__check_controller_button(a = controller_physical_port_bank + 0x20, 4) != 0 ||
            test_flag_4c__23TAdSinglePlyChrSelectGCFPv(b = controller_input_state + 0x160, 4) != 0 ||
            TWindowShortListCtrl__check_controller_button(a, 2) != 0 ||
            test_flag_4c__23TAdSinglePlyChrSelectGCFPv(b, 2) != 0) {
            *(s32 *)((s8 *)arg0 + 0x1C) = 3;
            *(s32 *)((s8 *)arg0 + 0x24) = 4;
        }
        break;
    case 3:
        if (*(void **)((s8 *)arg0 + 0x2C) != NULL) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x2C));
            *(void **)((s8 *)arg0 + 0x2C) = NULL;
        }
        if ((f32)++*(s32 *)((s8 *)arg0 + 0x28) > lbl_805DF7B0) {
            *(s32 *)((s8 *)arg0 + 0x1C) = *(s32 *)((s8 *)arg0 + 0x24);
        }
        break;
    case 4:
        ((V_8032D214 *)arg0)->m4();
        break;
    }
    if (*(s32 *)((s8 *)arg0 + 0x20) != *(s32 *)((s8 *)arg0 + 0x1C)) {
        *(s32 *)((s8 *)arg0 + 0x28) = 0;
    }
}

void *TAdWarningBaseGC__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TAdWarningBaseGC;
        if (*(void **)((s8 *)arg0 + 0x2C) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x2C)); *(s32 *)((s8 *)arg0 + 0x2C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__16TAdWarningBaseGC[];
extern void *lbl_805D4208;

void *TAdWarningBaseGC__ct(void *arg0) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TAdWarningBaseGC;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D4208;
    *(u32 *)((s8 *)arg0 + 0x28) = 0;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    *(u32 *)((s8 *)arg0 + 0x24) = 0;
    *(u32 *)((s8 *)arg0 + 0x2C) = 0;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        __ct__9TAdBackGCFv(o, arg0);
    }
    o2 = __nw__7TObjectFUl(0x28);
    if (o2 != NULL) {
        __ct__12TAdBackTxtGCFv(o2, arg0);
    }
    return arg0;
}

}
