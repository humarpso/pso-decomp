#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_part__14TObjEneEpsilonFi(s32 arg0);
M2C_UNK enemy_bind_or_clear_target(s32, s32);
s32 enemy_find_nearest_player_in_range();

void spawn_part__14TObjEneEpsilonFi(s32 arg0) {
    M2C_UNK8 *tmp = (M2C_UNK8 *)enemy_find_nearest_player_in_range();
    enemy_bind_or_clear_target(arg0, (s32)tmp);
}

}
