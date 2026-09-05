#include "pso/TObjBagWarnWin.h"

TObjBagWarnWin::~TObjBagWarnWin() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjBagWarnWin__sub_8006EC20(void *);
M2C_UNK TObjBagWarnWin__sub_8006EDD8(void *);
M2C_UNK TWindow__close(int);
s32 TWindowCtrlMain__sub_8024CE58();
void run_task__14TObjBagWarnWinFv(u8 *arg0);
}

extern "C" {

void run_task__14TObjBagWarnWinFv(u8 *arg0) {
    s32 temp_r0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        if (TWindowCtrlMain__sub_8024CE58() != 0) {
            if (TObjBagWarnWin__sub_8006EC20((void *) (arg0)) != 0) {
                temp_r0 = M2C_FIELD(arg0, s32 *, 0xA0) - 1;
                M2C_FIELD(arg0, s32 *, 0xA0) = temp_r0;
                if (temp_r0 < 0) {
                    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0xA0) = 0x1E;
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0xA0) == 0) {
                TObjBagWarnWin__sub_8006EDD8((void *) (arg0));
            }
        }
    } else if (TObjBagWarnWin__sub_8006EC20((void *) (arg0)) == 0) {
        TWindow__close((int) (M2C_FIELD(arg0, u32 *, 0x1C)));
        M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
        M2C_FIELD(arg0, s32 *, 0xA0) = 0x1E;
    }
}

}
