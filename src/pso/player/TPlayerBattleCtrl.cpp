#include "pso/TPlayerBattleCtrl.h"

void TPlayerBattleCtrl::run_task() {}

TPlayerBattleCtrl::~TPlayerBattleCtrl() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK fn_801C4D28(void *);
extern s32 lbl_805D55C0;
void run_task__17TPlayerBattleCtrlFv(u8 *arg0);
}

extern "C" {

void run_task__17TPlayerBattleCtrlFv(u8 *arg0) {
    if ((s32) lbl_805D55C0 == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != -1) {
                M2C_FIELD(arg0, s32 *, 0x20) = -1;
                fn_801C4D28((void *) (arg0));
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
        }
        fn_801C4D28((void *) (arg0));
    }
}

}
