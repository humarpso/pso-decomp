#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__14TObjBgmColCtrlFv(void *arg0);
s32 TOKeyMachine01__sub_802034A8();
M2C_UNK TObjBgmColCtrl__sub_8017E1E4();
s32 TObjBgmColCtrl__sub_8017E8E4();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TRaderMapCore__sub_8030A808();
s32 fn_8017E8F8();
M2C_UNK run_tasks__7TObjectFv(void *);

extern s32 lbl_805D53A0;
extern s32 lbl_805D55A0;
extern s32 lbl_805D5B04;
extern u32 lbl_805D5B08;
extern s32 lbl_805D5B0C;

void run_task__14TObjBgmColCtrlFv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r4 - 1);
    if ((temp_r4 <= 0) && ((TOKeyMachine01__sub_802034A8() == 0xF) || (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U)) && (fn_8017E8F8() == 0)) {
        if (TRaderMapCore__sub_8030A808() == 1) {
            if (TObjBgmColCtrl__sub_8017E8E4() == 0) {
                TObjBgmColCtrl__sub_8017E1E4();
            }
        } else {
            lbl_805D5B04 = 0;
            void *thisObj = (void *)(u32)lbl_805D5B08;
            if (thisObj != NULL) {
                run_tasks__7TObjectFv(thisObj);
            }
            if ((s32) lbl_805D5B04 == 0) {
                if (TObjBgmColCtrl__sub_8017E8E4() == 0) {
                    TObjBgmColCtrl__sub_8017E1E4();
                }
                if ((TOKeyMachine01__sub_802034A8() == 0xF) && ((s32) lbl_805D55A0 != (s32) lbl_805D5B0C)) {
                    TObjBgmColCtrl__sub_8017E1E4();
                }
            }
        }
    }
}

}
