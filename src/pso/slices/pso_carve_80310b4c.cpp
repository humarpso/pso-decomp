#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801B5200();
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK fn_8024A054();
M2C_UNK fn_8024AD30(u16);
M2C_UNK fn_8024AEF0(u16);

void TPlayerBattleCtrl4P__sub_80310B4C(void *arg0, s32 arg1, s32 arg2) {
    u16 temp_r31;
    s32 temp_r30;

    temp_r31 = (u16)arg1;
    temp_r30 = arg2;
    if (TPlayerBattleCtrl4P__sub_801BA74C(temp_r31) != 0U) {
        fn_801B5200();
    }
    if (temp_r30 != 0) {
        fn_8024AD30(temp_r31);
        fn_8024A054();
        fn_8024AEF0(temp_r31);
    }
}

}
