#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_to_players__10TNpcPlayerFiPvi(s32 arg0, void *arg1, s32 arg2);
M2C_UNK TObjPlayer__sub_801C5F54(s32, s32, f32, f32, f32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TTecLuker__sub_801BAB1C(s32, s32);
u16 get_action_flags__10TNpcPlayerFPv(s32);

s32 obj_isState3_324();
s32 obj_getField1c(s32);

void apply_to_players__10TNpcPlayerFiPvi(s32 arg0, void *arg1, s32 arg2) {
    s32 var_r31;
    s32 temp_r3;

    var_r31 = 0;
    do {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
        if ((temp_r3 != 0) && (obj_isState3_324() != 0) && ((u16) get_action_flags__10TNpcPlayerFPv(temp_r3) != 0xFFFF)) {
            TObjPlayer__sub_801C5F54(obj_getField1c(temp_r3), arg2, M2C_FIELD(arg1, f32 *, 0), M2C_FIELD(arg1, f32 *, 4), M2C_FIELD(arg1, f32 *, 8));
            TTecLuker__sub_801BAB1C(temp_r3, arg0);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
