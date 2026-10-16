#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 scale_current_matrix(void *);
u8 get_slot_count__14TItemProShieldFv();
s32 post_translate_matrix(void *);
s32 rotate_matrix_z(int, int);

void TObjPlayer::update_area_effect_objects() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3_2;
    u8 temp_r3;

    temp_r3 = get_slot_count__14TItemProShieldFv();
    switch ((s32) temp_r3) {
    case 6:
        if (TObjPlayer::get_player_list() == 4) {
            rotate_matrix_z((int) (0), (int) (*(s32 *)&this->unk_1F8));
        }
        break;
    case 5:
        temp_r3_2 = TObjPlayer::get_player_list();
        switch (temp_r3_2) {
        case 1:
            post_translate_matrix((void *) (arg0 + 0x208));
            return;
        case 2:
            post_translate_matrix((void *) (arg0 + 0x214));
            return;
        case 3:
            scale_current_matrix((void *) (arg0 + 0x1FC));
            break;
        }
        break;
    }
}

}
