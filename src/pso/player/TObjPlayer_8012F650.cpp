#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 scale_current_matrix(void *);
s32 rotate_matrix_x(s32, s32);

void TObjPlayer::handle_move_input() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3;

    temp_r3 = TObjPlayer::get_player_list();
    switch (temp_r3) {
    case 1:
        rotate_matrix_x(0, this->m_204);
        return;
    case 2:
        scale_current_matrix(arg0 + 0x1F8);
        return;
    case 3:
        rotate_matrix_x(0, -this->m_204);
        return;
    }
}

}
