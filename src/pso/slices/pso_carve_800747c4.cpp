#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_testFlags30(u32, M2C_UNK);
s32 fn_80074758(s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowCtrlMain__sub_8024CE58();
extern s32 lbl_805D53A0;

s32 fn_can_show_solo_win_screen(s32 arg0) {
    u32 temp_r31;

    temp_r31 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if ((TWindowCtrlMain__sub_8024CE58() == 1) && (fn_80074758(arg0) != 0) && (temp_r31 != 0U) && (obj_testFlags30(temp_r31, 0x02000000) == 0)) {
        return 1;
    }
    return 0;
}

}
