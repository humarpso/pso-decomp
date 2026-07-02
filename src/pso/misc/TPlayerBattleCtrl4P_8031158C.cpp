#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TPlayerBattleCtrl4P__sub_8031158C(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TPlayerBattleCtrl4P__sub_8031058C();
M2C_UNK fn_80049574();
M2C_UNK fn_801C5454(s32);
M2C_UNK fn_801F57B4(s32);
M2C_UNK fn_8020910C(s32);
M2C_UNK fn_8020BB18();
M2C_UNK fn_8020BCE4();

extern s32 tl_00;
extern s32 tl_01;

void TPlayerBattleCtrl4P__sub_8031158C(void) {
    s32 var_r31;
    s32 var_r31_2;
    u32 temp_r3;

    TPlayerBattleCtrl4P__sub_8031058C();
    var_r31 = 0;
    do {
        if (TPlayerBattleCtrl4P__sub_801BA74C(var_r31) != 0U) {
            fn_80049574();
        }
        var_r31 += 1;
    } while (var_r31 < 4);
    fn_8020910C(tl_01);
    fn_801F57B4(tl_00);
    fn_8020BCE4();
    fn_8020BB18();
    var_r31_2 = 0;
    do {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31_2);
        if (temp_r3 != 0U) {
            fn_801C5454(temp_r3 + 0x7C4);
        }
        var_r31_2 += 1;
    } while (var_r31_2 < 4);
}

}
