#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_facing_vector__12TBoss1DragonFPv(void *arg0);
u8 check_attack_ready__12TBoss1DragonFPv(void *arg0);
s32 check_can_attack__12TBoss1DragonFPv(void *arg0);
s32 filter_input_flags__12TBoss1DragonFiii(s32 arg1, s32 arg2, s32 arg3);
s32 TBoss1Dragon__sub_800291B4(void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 check_flag_100__10TObjPlayerFPv();
f32 fn_803D64C0(s32);
f32 fn_803D64DC(s32);

extern s32 lbl_805D53A0;

s32 filter_input_flags__12TBoss1DragonFiii(s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r31;

    var_r31 = arg3;
    if ((TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) == 0U) || (check_flag_100__10TObjPlayerFPv() != 0)) {
        arg2 &= 0xFFFCF9F9;
    }
    return arg2 & var_r31;
}

extern f32 lbl_805D8088;

void calc_facing_vector__12TBoss1DragonFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (lbl_805D8088 * fn_803D64C0(M2C_FIELD(arg0, s32 *, 0x76C)));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (lbl_805D8088 * fn_803D64DC(M2C_FIELD(arg0, s32 *, 0x76C)));
}

s32 check_can_attack__12TBoss1DragonFPv(void *arg0) {
    u8 var_r31;

    var_r31 = 0;
    if ((filter_input_flags__12TBoss1DragonFiii((s32)(arg0), (s32)(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6E4), s32 *, 8)), (s32)(0x400)) != 0) && (TBoss1Dragon__sub_800291B4(arg0) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

u8 check_attack_ready__12TBoss1DragonFPv(void *arg0) {
    u8 var_r31;

    var_r31 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x768) >= 0x96) && (filter_input_flags__12TBoss1DragonFiii((s32)(arg0), (s32)(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6E4), s32 *, 8)), (s32)(0x400)) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

}
