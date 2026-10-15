#include "types.h"

extern "C" {

void update_shield_effect__10TObjPlayerFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFv();
s32 scale_matrix(s32, f32, f32, f32);
s32 get_player_list__10TObjPlayerFv();

void update_shield_effect__10TObjPlayerFPv(void *arg0) {
    f32 temp_f1;

    if (get_slot_count__14TItemProShieldFv() == 5) {
        switch (get_player_list__10TObjPlayerFv()) {
        case 1:
            temp_f1 = *(f32 *)((s8 *)arg0 + 0x1F8);
            scale_matrix(0, temp_f1, temp_f1, temp_f1);
            break;
        }
    }
}

}
