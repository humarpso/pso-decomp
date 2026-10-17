#include "types.h"
#include "pso/TObjCHTimeWin.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

void init_timer__13TObjCHTimeWinFv(void);
s32 TWindowCtrlMain__sub_8024CE58();
void *__ct__13TObjCHTimeWinFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

extern s32 TObjCHTimeWin__timer_value;
extern s32 __vt__13TObjCHTimeWin[];
extern void *TObjCHTimeWin__class_name;

void TObjCHTimeWin::run_task() {
    if ((s32) *(s32 *)((s8 *)this + 0x1C) != 0) {
        ((TWindowCtrl *)TObjCHTimeWin__timer_value)->set_timer_window_time();
        return;
    }
    if (TWindowCtrlMain__sub_8024CE58() == 1) {
        ((s32 (*)(void *))init_timer__13TObjCHTimeWinFv)(this);
        *(s32 *)((s8 *)this + 0x1C) = 1;
    }
}

void init_timer__13TObjCHTimeWinFv(void) { TWindowCtrl::create_alt_timer(); ((TWindowCtrl *)TObjCHTimeWin__timer_value)->set_timer_window_time(); }

}

TObjCHTimeWin::~TObjCHTimeWin() {}

extern "C" {

void *__ct__13TObjCHTimeWinFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjCHTimeWin;
    *(void * *)&((TObjCHTimeWin *)arg0)->m_name = TObjCHTimeWin__class_name;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

void *create_ch_time_win(void *arg0) {
    void *o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = ((void *(*)(void *, void *))__ct__13TObjCHTimeWinFv)(o, arg0);
    }
    return o;
}

}
