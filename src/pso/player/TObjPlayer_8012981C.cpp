#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void s_rank_shot_turn_barrels(void *arg0);
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
s32 get_player_list__10TObjPlayerFv();

void s_rank_shot_turn_barrels(void *arg0) {
    if (get_player_list__10TObjPlayerFv() == 1) {
        rotate_matrix_z(0, M2C_FIELD(arg0, s32 *, 0x200));
    }
    if (get_player_list__10TObjPlayerFv() == 4) {
        rotate_matrix_z(0, -M2C_FIELD(arg0, s32 *, 0x200));
    }
}

}
