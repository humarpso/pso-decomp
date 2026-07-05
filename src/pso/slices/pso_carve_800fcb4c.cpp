#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
s32 fn_800717B0(void *, s32);
M2C_UNK fn_800FC424(void *, s32);
M2C_UNK fn_800FC430(void *, u32);
M2C_UNK run_task__14TFontSmallHelpFv(void *);
u32 fn_800FC968(s32);
s32 fn_800FCCF4(s32);
s32 fn_801A5188(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern s8 lbl_80509D5C[];

void fn_800FCB4C(void *arg0) {
    s32 temp_r3_2;
    s32 temp_r4;
    u32 temp_r3_3;
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x5C));
    if (temp_r3 == 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r3_2 = fn_801A5188(M2C_FIELD(arg0, s32 *, 0x5C));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x60) != temp_r3_2) {
        M2C_FIELD(arg0, s32 *, 0x60) = temp_r3_2;
        temp_r3_3 = fn_800FC968(M2C_FIELD(arg0, s32 *, 0x5C));
        fn_800FC430(arg0, temp_r3_3);
        if (temp_r3_3 != 0U) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 3) {
                temp_r4 = M2C_FIELD(arg0, s32 *, 0x5C);
                fn_800FC424(arg0, fn_800717B0(lbl_80509D5C + (temp_r4 * 0x11C) + 4, temp_r4));
            } else {
                fn_800FC424(arg0, fn_800FCCF4(temp_r3));
            }
        }
    }
    run_task__14TFontSmallHelpFv(arg0);
}

}
