#include "pso/TFontSmallHelp.h"

TFontSmallHelp::~TFontSmallHelp() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__14TFontSmallHelpFv(u8 *arg0);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void run_task__14TFontSmallHelpFv(u8 *arg0) {
    s32 temp_r3_2;
    u8 *temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x5C));
    if (temp_r3 == NULL) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != (u32) M2C_FIELD(temp_r3, u32 *, 0xDB0)) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, temp_r3 + 0x84C);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (M2C_FIELD(arg0, s32 *, 0x54) + 1);
    temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x58);
    if ((temp_r3_2 > 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x54) >= temp_r3_2)) {
        disallow_rendering__7TObjectFv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
