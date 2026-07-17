#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_800196EC();
s32 TObjPlayer__sub_800196F4();
f32 fn_8013157C(void *, void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(int);
extern const f32 lbl_805DDCD0;

s32 fn_8029B214(s32 arg0) {
    f32 temp_f31;
    s32 temp_r31;
    s32 temp_r3;
    s32 var_r29;

    temp_f31 = lbl_805DDCD0;
    var_r29 = 0;
loop_1:
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (var_r29));
    if (temp_r3 != 0) {
        temp_r31 = TObjPlayer__sub_800196F4();
        if ((TObjPlayer__sub_800196EC() == temp_r31) && (fn_8013157C((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38)) < temp_f31)) {
            return 1;
        }
    }
    var_r29 += 1;
    if (var_r29 >= 4) {
        return 0;
    }
    goto loop_1;
}

}
