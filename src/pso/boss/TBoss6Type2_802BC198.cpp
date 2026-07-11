#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_802BC198(void *arg0);
s32 TBoss4Type2__sub_80141FA8(s32, s32);
void *TPlayerBattleCtrl4P__sub_801BA74C(u16);
f64 fn_80019760(f32, f32, f32);

extern const f64 TBoss6Type2__data_804713C0;

s32 TBoss6Type2__sub_802BC198(void *arg0) {
    f32 temp_f3;
    f64 temp_f0;
    s32 var_r31;
    s32 var_r31_2;
    void *temp_r3;

    var_r31_2 = 0xF;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x466));
    if (M2C_FIELD(arg0, u8 *, 0x478) & 1) {
        var_r31_2 = 0x10;
    }
    if (temp_r3 == NULL) {
        return var_r31_2;
    }
    temp_f3 = M2C_FIELD(temp_r3, f32 *, 0x38);
    temp_f0 = fn_80019760(temp_f3 - M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(temp_r3, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 0x40), temp_f3);
    var_r31 = 0xF;
    if (TBoss4Type2__sub_80141FA8(M2C_FIELD(arg0, s32 *, 0x60), (s32) (TBoss6Type2__data_804713C0 * temp_f0)) < 0) {
        var_r31 = 0x10;
    }
    return var_r31;
}

}
