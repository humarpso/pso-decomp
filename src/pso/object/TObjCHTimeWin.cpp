#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjCHTimeWin__sub_80074CF0(void);
void run_task__13TObjCHTimeWinFv(void *arg0);
s32 TWindowCtrlMain__sub_8024CE58();
int TWindowCtrl__sub_8024A4B0(void*);
int TWindowCtrl__sub_8024A530(void);

extern s32 lbl_805D4E40;

void run_task__13TObjCHTimeWinFv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        TWindowCtrl__sub_8024A4B0((void*)(lbl_805D4E40));
        return;
    }
    if (TWindowCtrlMain__sub_8024CE58() == 1) {
        TObjCHTimeWin__sub_80074CF0(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

    extern int lbl_805D4E40;
void TObjCHTimeWin__sub_80074CF0(void) { TWindowCtrl__sub_8024A530(); TWindowCtrl__sub_8024A4B0((void*)((void*)(lbl_805D4E40))); }

}
