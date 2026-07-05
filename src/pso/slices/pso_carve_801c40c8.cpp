#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_801B5200();
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK fn_8024A054();
M2C_UNK fn_8024AD30(s32);
M2C_UNK TWindowCtrl__sub_8024AEF0(s32);
extern s32 lbl_805D53A0;

void fn_801C40C8(int arg0, s32 arg1) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(arg0) != 0U) {
        TObjPlayer__sub_801B5200();
    }
    if (arg1 != 0) {
        fn_8024AD30(lbl_805D53A0);
        fn_8024A054();
        TWindowCtrl__sub_8024AEF0(lbl_805D53A0);
    }
}

}
