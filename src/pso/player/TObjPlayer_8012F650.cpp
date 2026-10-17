#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 scale_current_matrix(void *);
s32 rotate_matrix_x(s32, s32);

void TObjPlayer::handle_move_input() {
    s32 temp_r3;

    temp_r3 = TObjPlayer::get_player_list();
    switch (temp_r3) {
    case 1:
        rotate_matrix_x(0, this->m_204);
        return;
    case 2:
        scale_current_matrix((u8 *)&this->unk_1F8);
        return;
    case 3:
        rotate_matrix_x(0, -this->m_204);
        return;
    }
}

}
