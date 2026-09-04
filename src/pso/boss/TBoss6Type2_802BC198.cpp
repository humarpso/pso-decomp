#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 choose_turn_motion__11TBoss6Type2FPv(void *arg0);
s32 is_target_valid__11TBoss6Type2FPv(void *arg0);
s32 TBoss4Type2__sub_80141FA8(s32, s32);
void *TPlayerBattleCtrl4P__sub_801BA74C(u16);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32, f32);
s32 is_split_screen();

extern const f64 TBoss6Type2__data_804713C0;

s32 choose_turn_motion__11TBoss6Type2FPv(void *arg0) {
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
    temp_f0 = get_ad_end_text_start__10TObjPlayerFv(temp_f3 - M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(temp_r3, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 0x40), temp_f3);
    var_r31 = 0xF;
    if (TBoss4Type2__sub_80141FA8(M2C_FIELD(arg0, s32 *, 0x60), (s32) (TBoss6Type2__data_804713C0 * temp_f0)) < 0) {
        var_r31 = 0x10;
    }
    return var_r31;
}

extern s32 lbl_805D53A0;

s32 is_target_valid__11TBoss6Type2FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0) {
        return 0;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x55C) == 0xFFFF) {
        return 1;
    }
    if (is_split_screen() != 0) {
        return 0;
    }
    return (lbl_805D53A0 - (s32) M2C_FIELD(arg0, u16 *, 0x55C)) != 0 ? 1 : 0;
}

}
