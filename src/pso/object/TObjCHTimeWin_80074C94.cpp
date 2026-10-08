#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__13TObjCHTimeWinFv(void *arg0);
M2C_UNK init_timer__13TObjCHTimeWinFv(void *);
s32 TWindowCtrlMain__sub_8024CE58();
M2C_UNK set_timer_window_time__11TWindowCtrlFi(s32);

extern s32 lbl_805D4E40;

void run_task__13TObjCHTimeWinFv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        set_timer_window_time__11TWindowCtrlFi(lbl_805D4E40);
        return;
    }
    if (TWindowCtrlMain__sub_8024CE58() == 1) {
        init_timer__13TObjCHTimeWinFv(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

}
