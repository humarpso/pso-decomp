#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss8Dragon__sub_802F4D00(void *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(M2C_UNK);

extern const f32 lbl_805DED50;

void TBoss8Dragon__sub_802F4D00(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x84C) = 0;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DED50;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x84C) > 0x96) {
            TObjEneDD__sub_800BBA18(arg0, 8);
        }
        break;
    case 0:
        if ((TPlayerBattleCtrl4P__sub_801BA74C(0) != 0U) || (TPlayerBattleCtrl4P__sub_801BA74C(1) != 0U) || (TPlayerBattleCtrl4P__sub_801BA74C(2) != 0U) || (TPlayerBattleCtrl4P__sub_801BA74C(3) != 0U)) {
            M2C_FIELD(arg0, s32 *, 0x84C) = (s32) (M2C_FIELD(arg0, s32 *, 0x84C) + 1);
        }
        break;
    case 5:
    case 1:
        break;
    }
}

}
