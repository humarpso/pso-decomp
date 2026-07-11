#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TNpcPlayer__sub_8034E104(int arg0);
void TNpcPlayer__sub_8034E14C(int arg0);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK play_effect_default__10TObjPlayerFii(s32, M2C_UNK);
M2C_UNK send_code_45_1__10TObjPlayerFi(s32);

s32 obj_isState2_324();

void TNpcPlayer__sub_8034E104(int arg0) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16) arg0);
    if ((temp_r3 != 0) && (obj_isState2_324() == 0)) {
        send_code_45_1__10TObjPlayerFi(temp_r3);
    }
}

s32 obj_isState2_324();

void TNpcPlayer__sub_8034E14C(int arg0) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16) arg0);
    if ((temp_r3 != 0) && (obj_isState2_324() == 0)) {
        play_effect_default__10TObjPlayerFii(temp_r3, -1);
    }
}

}
