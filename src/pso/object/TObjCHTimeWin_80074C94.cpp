#include "types.h"
#include "pso/TObjCHTimeWin.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__13TObjCHTimeWinFv(void *arg0);
void init_timer__13TObjCHTimeWinFv(void);
s32 TWindowCtrlMain__sub_8024CE58();
M2C_UNK set_timer_window_time__11TWindowCtrlFi(s32);
int create_alt_timer__11TWindowCtrlFv(void);
void *__ct__13TObjCHTimeWinFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

extern s32 lbl_805D4E40;
extern M2C_UNK __vt__13TObjCHTimeWin[];
extern void *TObjCHTimeWin__class_name;

void run_task__13TObjCHTimeWinFv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        set_timer_window_time__11TWindowCtrlFi(lbl_805D4E40);
        return;
    }
    if (TWindowCtrlMain__sub_8024CE58() == 1) {
        ((M2C_UNK (*)(void *))init_timer__13TObjCHTimeWinFv)(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

void init_timer__13TObjCHTimeWinFv(void) { create_alt_timer__11TWindowCtrlFv(); set_timer_window_time__11TWindowCtrlFi(lbl_805D4E40); }

}

TObjCHTimeWin::~TObjCHTimeWin() {}

extern "C" {

void *__ct__13TObjCHTimeWinFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjCHTimeWin;
    M2C_FIELD(arg0, void **, 0x0) = TObjCHTimeWin__class_name;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
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
