#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TObjPlayer__sub_80141CF8(s32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern s32 lbl_805D53A0;

int fn_800811AC(s32 arg0, f32 farg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 == 0U) {
        return 0;
    }
    return (u32) __cntlzw(TObjPlayer__sub_80141CF8(temp_r3 + 0x38, arg0 + 0x38) < farg0) >> 5;
}

}
