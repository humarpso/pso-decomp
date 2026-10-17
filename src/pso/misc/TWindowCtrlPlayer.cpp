#include "types.h"
#include "pso/misc/TWindowSubComCard_80244774.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/misc/TWindowCtrlPlayer.h"
#include "pso/TObject.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/object/TObjLuker.h"

struct Ctl_8024E2A8 {
    s32 f0;
    u8 pad4[0x18 - 4];
    s32 *vt;
    s16 f1c, f1e, f20;
    s32 f24;
    void *f28;
    void *f2c;
    void *f30;
    void *f34;
    void *f38;
    void *f3c;
};

extern "C" {

void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void run_all_updates__11TWindowCtrlFv(void* p);

s32 is_split_screen(void);
void *__nw__7TObjectFUl(u32);
void *TWindowActionPalette__ct(void *, s32);
}
s32 create_message_information_window(s32 arg0, s32 arg1, s32 arg2);
extern "C" {
s32 get_window_layout_position(s32);
}
s32 create_status_window(s32 arg0);
extern "C" {
void *TWindowMainMenu1P__ct(void *, void *, s32);
void *TWindowMainMenu4P__ct(void *, void *, s32);
extern u8 lbl_8044EC4C[];
extern s32 TWindowCtrlPlayer__name;

void TWindowCtrlPlayer::render() {  }
void TWindowCtrlPlayer::run_task() { sub_8024E0F0(); run_all_updates__11TWindowCtrlFv(this); }

extern s32 __vt__17TWindowCtrlPlayer[];

void *__dt__17TWindowCtrlPlayerFv(TWindowCtrlPlayer *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TWindowCtrlPlayer;
        if (*(void **)((s8 *)arg0 + 0x3C) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x3C)); arg0->m_3c = 0; }
        if (*(void **)((s8 *)arg0 + 0x38) != NULL) { TWindow__close((u8 *)(*(void **)((s8 *)arg0 + 0x38))); arg0->m_38 = 0; }
        if (*(void **)((s8 *)arg0 + 0x34) != NULL) { TWindow__close((u8 *)(*(void **)((s8 *)arg0 + 0x34))); arg0->m_34 = 0; }
        if (*(void **)((s8 *)arg0 + 0x30) != NULL) { TWindow__close((u8 *)(*(void **)((s8 *)arg0 + 0x30))); arg0->m_30 = 0; }
        if (*(void **)((s8 *)arg0 + 0x2C) != NULL) { TWindow__close((u8 *)(*(void **)((s8 *)arg0 + 0x2C))); arg0->m_2c = 0; }
        if (*(void **)((s8 *)arg0 + 0x28) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x28)); arg0->m_28 = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
}

TWindowCtrlPlayer::TWindowCtrlPlayer(TObject *parent, s32 arg2) : TObject(parent) {
    void *p;
    ((struct Ctl_8024E2A8 *)this)->f0 = TWindowCtrlPlayer__name;
    ((struct Ctl_8024E2A8 *)this)->f1c = 0;
    ((struct Ctl_8024E2A8 *)this)->f1e = 0;
    ((struct Ctl_8024E2A8 *)this)->f20 = 0;
    ((struct Ctl_8024E2A8 *)this)->f24 = arg2;
    ((struct Ctl_8024E2A8 *)this)->f28 = 0;
    ((struct Ctl_8024E2A8 *)this)->f2c = 0;
    ((struct Ctl_8024E2A8 *)this)->f30 = 0;
    ((struct Ctl_8024E2A8 *)this)->f34 = 0;
    ((struct Ctl_8024E2A8 *)this)->f38 = 0;
    ((struct Ctl_8024E2A8 *)this)->f3c = 0;
    if (is_split_screen() != 0) {
        p = __nw__7TObjectFUl(0x60);
        if (p != 0) {
            p = TWindowMainMenu4P__ct(p, ((struct Ctl_8024E2A8 *)this), ((struct Ctl_8024E2A8 *)this)->f24);
        }
        ((struct Ctl_8024E2A8 *)this)->f28 = p;
    } else {
        p = __nw__7TObjectFUl(0xAC);
        if (p != 0) {
            p = TWindowMainMenu1P__ct(p, ((struct Ctl_8024E2A8 *)this), ((struct Ctl_8024E2A8 *)this)->f24);
        }
        ((struct Ctl_8024E2A8 *)this)->f28 = p;
    }
    ((struct Ctl_8024E2A8 *)this)->f2c = (void *)create_message_information_window((s32)(get_window_layout_position(0x20)), (s32)lbl_8044EC4C, (s32)(((struct Ctl_8024E2A8 *)this)->f24));
    ((struct Ctl_8024E2A8 *)this)->f30 = (void *)create_status_window(((struct Ctl_8024E2A8 *)this)->f24);
    ((TObject *)(((struct Ctl_8024E2A8 *)this)->f30))->set_flag_4();
    p = __nw__7TObjectFUl(0x78);
    if (p != 0) {
        p = TWindowActionPalette__ct(p, ((struct Ctl_8024E2A8 *)this)->f24);
    }
    ((struct Ctl_8024E2A8 *)this)->f34 = p;
    ((TObject *)(((struct Ctl_8024E2A8 *)this)->f34))->set_flag_4();
}
