#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8002AEB8(s32, M2C_UNK);
M2C_UNK fn_80049574();
M2C_UNK TOMineTrap__sub_8016FCC4();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TObjPlayer__sub_801BE648();
M2C_UNK fn_801C2AD0();
M2C_UNK fn_801C4120(u16, M2C_UNK);
M2C_UNK fn_801C512C();
M2C_UNK fn_801C5454(s32);
M2C_UNK fn_801F57B4(s32);
M2C_UNK fn_8020910C(s32);
M2C_UNK fn_8020BB18();
M2C_UNK fn_8020BCE4();
extern s32 lbl_805D53A0;
extern s32 tl_00;
extern s32 tl_01;

void fn_801C2E98(void *arg0) {
    s32 temp_r3;
    s32 var_r31;
    u32 temp_r3_2;

    fn_801C2AD0();
    fn_801C4120((u16) lbl_805D53A0, 1);
    temp_r3 = TObjPlayer__sub_801BE648();
    if (temp_r3 != 0) {
        fn_80049574();
        fn_8002AEB8(temp_r3 + 0x644, 0xE10);
    }
    TOMineTrap__sub_8016FCC4();
    fn_8020910C(tl_01);
    fn_801F57B4(tl_00);
    fn_8020BCE4();
    fn_801C512C();
    fn_8020BB18();
    var_r31 = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    do {
        temp_r3_2 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
        if (temp_r3_2 != 0U) {
            fn_801C5454(temp_r3_2 + 0x7C4);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
