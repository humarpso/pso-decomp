#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_combat_stats__10TObjPlayerFPv(u8 *arg0);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int, f32);
M2C_UNK TObjPlayer__sub_8001053C(void *);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
s32 is_inactive__10TObjPlayerFPv();
s32 check_actor_blocking_move__10TObjPlayerFPv(void *);
s32 resolve_move_collision__10TObjPlayerFPv(void *);
f32 apply_stat_multipliers_default__10TObjPlayerFv(void *, void *);
s32 check_player_flag1__6TLobbyFPv(void *);

extern const f32 TObjPlayer__data_805DC36C;

s32 update_combat_stats__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f31;
    s32 temp_r3;

    if (is_inactive__10TObjPlayerFPv() == 0) {
        return 0;
    }
    temp_f31 = apply_stat_multipliers_default__10TObjPlayerFv((void *) (arg0 + 0x5E0), (void *) (arg0));
    temp_f1 = temp_f31 * sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x3F0)));
    M2C_FIELD(arg0, f32 *, 0x308) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TObjPlayer__data_805DC36C;
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) (temp_f31 * cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x3F0)), (f32) (temp_f1)));
    if (check_actor_blocking_move__10TObjPlayerFPv((void *) (arg0)) != 0) {
        TObjPlayer__sub_8001053C((void *) (arg0));
        return 0;
    }
    temp_r3 = resolve_move_collision__10TObjPlayerFPv((void *) (arg0));
    if (temp_r3 == 0) {
        return 1;
    }
    if ((is_locally_controlled__10TObjPlayerFPv((void *) (arg0)) != 0) && (check_player_flag1__6TLobbyFPv((void *) (arg0)) == 0) && (temp_r3 == 4)) {
        return 1;
    }
    return 0;
}

}
