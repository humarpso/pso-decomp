#include "types.h"

extern "C" {

void handle_move_input__10TObjPlayerFPv(u8 *arg0);
s32 scale_current_matrix(void *);
s32 rotate_matrix_x(s32, s32);
s32 get_player_list__10TObjPlayerFv();

void handle_move_input__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        rotate_matrix_x(0, *(s32 *)((s8 *)arg0 + 0x204));
        return;
    case 2:
        scale_current_matrix(arg0 + 0x1F8);
        return;
    case 3:
        rotate_matrix_x(0, -*(s32 *)((s8 *)arg0 + 0x204));
        return;
    }
}

}
