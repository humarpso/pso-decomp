#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void update_shield_effect__10TObjPlayerFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFv();
s32 scale_matrix(s32, f32, f32, f32);

void update_shield_effect__10TObjPlayerFPv(void *arg0) {
    f32 temp_f1;

    if (get_slot_count__14TItemProShieldFv() == 5) {
        switch (TObjPlayer::get_player_list()) {
        case 1:
            temp_f1 = *(f32 *)((s8 *)arg0 + 0x1F8);
            scale_matrix(0, temp_f1, temp_f1, temp_f1);
            break;
        }
    }
}

}
