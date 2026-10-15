#include "types.h"

extern "C" {

void s_rank_shot_turn_barrels(void *arg0);
s32 rotate_matrix_z(s32, s32);
s32 get_player_list__10TObjPlayerFv();

void s_rank_shot_turn_barrels(void *arg0) {
    if (get_player_list__10TObjPlayerFv() == 1) {
        rotate_matrix_z(0, *(s32 *)((s8 *)arg0 + 0x200));
    }
    if (get_player_list__10TObjPlayerFv() == 4) {
        rotate_matrix_z(0, -*(s32 *)((s8 *)arg0 + 0x200));
    }
}

}
