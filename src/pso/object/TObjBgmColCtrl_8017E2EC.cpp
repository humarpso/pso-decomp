#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjBgmColCtrl__ct(int, int);
s32 TObjBgmColCtrl__sub_8017E550();
u32 __nw__7TObjectFUl(int);
u32 __ct__7TObjectFP7TObject(int, int);
extern u32 TObjBgmColCtrl__data_805D5B08;
extern s32 tl_05;
void TObjBgmColCtrl__sub_8017E3B8(void);
}

extern "C" {

void run_task__14TObjBgmColCtrlFv(void *arg0);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK TObjBgmColCtrl__sub_8017E1E4();
s32 is_active__14TObjBgmColCtrlFv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 get_bgm_object__13TQuestBgmCtrlFv();
M2C_UNK run_tasks__7TObjectFv(void *);

extern s32 lbl_805D53A0;
extern s32 lbl_805D55A0;
extern s32 lbl_805D5B04;
extern u32 TObjBgmColCtrl__data_805D5B08;
extern s32 TObjBgmColCtrl__data_805D5B0C;

void run_task__14TObjBgmColCtrlFv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r4 - 1);
    if ((temp_r4 <= 0) && ((get_global_state__14TOKeyMachine01Fv() == 0xF) || (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U)) && (get_bgm_object__13TQuestBgmCtrlFv() == 0)) {
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
            if (is_active__14TObjBgmColCtrlFv() == 0) {
                TObjBgmColCtrl__sub_8017E1E4();
            }
        } else {
            lbl_805D5B04 = 0;
            void *thisObj = (void *)(u32)TObjBgmColCtrl__data_805D5B08;
            if (thisObj != NULL) {
                run_tasks__7TObjectFv(thisObj);
            }
            if ((s32) lbl_805D5B04 == 0) {
                if (is_active__14TObjBgmColCtrlFv() == 0) {
                    TObjBgmColCtrl__sub_8017E1E4();
                }
                if ((get_global_state__14TOKeyMachine01Fv() == 0xF) && ((s32) lbl_805D55A0 != (s32) TObjBgmColCtrl__data_805D5B0C)) {
                    TObjBgmColCtrl__sub_8017E1E4();
                }
            }
        }
    }
}
void TObjBgmColCtrl__sub_8017E3B8(void) {
    u32 temp_r3;
    u32 temp_r3_2;
    u32 var_r0;
    temp_r3 = __nw__7TObjectFUl((int) (0x1C));
    var_r0 = temp_r3;
    if (var_r0 != 0U) {
        var_r0 = __ct__7TObjectFP7TObject((int) (temp_r3), (int) (0));
    }
    TObjBgmColCtrl__data_805D5B08 = var_r0;
    temp_r3_2 = __nw__7TObjectFUl((int) (0x20));
    if (temp_r3_2 != 0U) {
        TObjBgmColCtrl__ct((int) (temp_r3_2), (int) (tl_05));
    }
    TObjBgmColCtrl__sub_8017E550();
}

}
