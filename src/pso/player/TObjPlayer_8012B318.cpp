#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 scale_current_matrix(void *);
u8 get_slot_count__14TItemProShieldFv();
s32 post_translate_matrix(void *);
s32 rotate_matrix_z(int, int);

void TObjPlayer::update_area_effect_objects() {
    u8 *arg0 = (u8 *)this;
    s32 player_list;

    switch ((s32) get_slot_count__14TItemProShieldFv()) {
    case 6:
        if (TObjPlayer::get_player_list() == 4) {
            rotate_matrix_z(0, (int) (*(s32 *)&this->unk_1F8));
        }
        break;
    case 5:
        player_list = TObjPlayer::get_player_list();
        switch (player_list) {
        case 1:
            post_translate_matrix(arg0 + 0x208);
            return;
        case 2:
            post_translate_matrix(arg0 + 0x214);
            return;
        case 3:
            scale_current_matrix(arg0 + 0x1FC);
            break;
        }
        break;
    }
}

}
