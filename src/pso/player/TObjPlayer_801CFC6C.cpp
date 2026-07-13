#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801CFC6C(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int, f32);
M2C_UNK TObjPlayer__sub_8001053C(void *);
s32 TObjPlayer__sub_80019248(void *);
s32 TObjPlayer__sub_80084854();
s32 TObjPlayer__sub_801B5DDC(void *);
s32 TObjPlayer__sub_801B5EA4(void *);
f32 apply_stat_multipliers_default__10TObjPlayerFv(void *, void *);
s32 check_player_flag1__6TLobbyFPv(void *);

extern const f32 TObjPlayer__data_805DC36C;

s32 TObjPlayer__sub_801CFC6C(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f31;
    s32 temp_r3;

    if (TObjPlayer__sub_80084854() == 0) {
        return 0;
    }
    temp_f31 = apply_stat_multipliers_default__10TObjPlayerFv((void *) (arg0 + 0x5E0), (void *) (arg0));
    temp_f1 = temp_f31 * TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x3F0)));
    M2C_FIELD(arg0, f32 *, 0x308) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TObjPlayer__data_805DC36C;
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) (temp_f31 * TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x3F0)), (f32) (temp_f1)));
    if (TObjPlayer__sub_801B5DDC((void *) (arg0)) != 0) {
        TObjPlayer__sub_8001053C((void *) (arg0));
        return 0;
    }
    temp_r3 = TObjPlayer__sub_801B5EA4((void *) (arg0));
    if (temp_r3 == 0) {
        return 1;
    }
    if ((TObjPlayer__sub_80019248((void *) (arg0)) != 0) && (check_player_flag1__6TLobbyFPv((void *) (arg0)) == 0) && (temp_r3 == 4)) {
        return 1;
    }
    return 0;
}

}
