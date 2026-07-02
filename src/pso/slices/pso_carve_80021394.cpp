#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(M2C_UNK);
extern const f32 lbl_805D7F28;
extern const f32 lbl_805D7F44;

void fn_80021394(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x864) = 0;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D7F28;
        M2C_FIELD(arg0, f32 *, 0x5DC) = (f32) (lbl_805D7F44 + M2C_FIELD(arg0, f32 *, 0x5E0));
        M2C_FIELD(arg0, f32 *, 0x5D8) = (f32) (M2C_FIELD(arg0, f32 *, 0x5E0) + (M2C_FIELD(arg0, f32 *, 0x5DC) + M2C_FIELD(arg0, f32 *, 0x3C)));
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x864) > 0x96) {
            TObjEneDD__sub_800BBA18(arg0, 8);
        }
    case 5:
    case 1:
        return;
    case 0:
        if ((TPlayerBattleCtrl4P__sub_801BA74C(0) != 0U) || (TPlayerBattleCtrl4P__sub_801BA74C(1) != 0U) || (TPlayerBattleCtrl4P__sub_801BA74C(2) != 0U) || (TPlayerBattleCtrl4P__sub_801BA74C(3) != 0U)) {
            M2C_FIELD(arg0, s32 *, 0x864) = (s32) (M2C_FIELD(arg0, s32 *, 0x864) + 1);
        }
        break;
    }
}

}
