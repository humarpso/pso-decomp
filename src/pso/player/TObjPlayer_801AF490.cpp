#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_battle_value__10TObjPlayerFiii(s32 arg0, int arg1, s32 arg2);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 fn_801AFDB0(s32);
f32 fn_801D94C8(s32, s32);

extern f32 lbl_805DC278;

f32 get_battle_value__10TObjPlayerFiii(s32 arg0, int arg1, s32 arg2) {
    if (TPlayerBattleCtrl4P__sub_801BA74C((u16)arg1) == 0U) {
        return lbl_805DC278;
    }
    return fn_801D94C8(fn_801AFDB0(arg0), arg2);
}

}
