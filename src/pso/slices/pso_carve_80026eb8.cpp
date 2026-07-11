#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_flag_100__10TObjPlayerFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern s32 lbl_805D53A0;

s32 TBoss1Dragon__sub_80026EB8(s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r31;

    var_r31 = arg3;
    if ((TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) == 0U) || (check_flag_100__10TObjPlayerFPv() != 0)) {
        arg2 &= 0xFFFCF9F9;
    }
    return arg2 & var_r31;
}

}
