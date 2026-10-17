#include "types.h"
#include "pso/item/TItemMagSub_80114524.h"
#include "pso/item/TItemData.h"

extern "C" {
s32 mag_node_oscillation_is_disabled();

void initialize_mag_item_data(void *arg0) {
    *(s16 *)((s8 *)arg0 + 4) = 0x1F4;
    *(s16 *)((s8 *)arg0 + 0xA) = 0;
    *(s16 *)((s8 *)arg0 + 8) = 0;
    *(s16 *)((s8 *)arg0 + 6) = 0;
    *(s8 *)((s8 *)arg0 + 0xD) = 0;
    *(s8 *)((s8 *)arg0 + 0xC) = 0;
    *(s16 *)((s8 *)arg0 + 0) = 0;
    *(s16 *)((s8 *)arg0 + 2) = 0x28;
    *(s8 *)((s8 *)arg0 + 0xE) = 0x12;
}

s16 get_mag_total_level(void *mag) {
    return ((TItemData *)mag)->get_stat_percent() + ((TItemData *)mag)->get_percent() + ((TItemData *)mag)->get_mag_mind_level() + ((TItemData *)mag)->get_level();
}

void update_mag_node_oscillation_state(void *arg0) {
    s8 temp_r3;
    s32 temp_r3_2;
    s16 temp_r3_3;
    s16 temp_r0;

    if (mag_node_oscillation_is_disabled() == 0) {
        temp_r3 = *(s8 *)((s8 *)arg0 + 0);
        if (temp_r3 & 0x10) {
            temp_r3_2 = *(s16 *)((s8 *)arg0 + 2) + *(s16 *)((s8 *)arg0 + 6);
            *(s16 *)((s8 *)arg0 + 2) = temp_r3_2;
            if (((s16) temp_r3_2 != 0) && ((s16) *(s16 *)((s8 *)arg0 + 6) < (s16) *(s16 *)((s8 *)arg0 + 2))) {
                *(s16 *)((s8 *)arg0 + 2) = (s16) *(s16 *)((s8 *)arg0 + 4);
            }
        } else if (temp_r3 & 8) {
            *(s16 *)((s8 *)arg0 + 2) = (s16) (*(s16 *)((s8 *)arg0 + 2) + (s8) *(u8 *)((s8 *)arg0 + 1));
            temp_r3_3 = *(s16 *)((s8 *)arg0 + 6);
            if (temp_r3_3 < (s16) *(s16 *)((s8 *)arg0 + 2)) {
                *(s16 *)((s8 *)arg0 + 2) = temp_r3_3;
                *(u8 *)((s8 *)arg0 + 0) = (u8) (*(u8 *)((s8 *)arg0 + 0) & 0xFFFFFFF7);
            }
        } else {
            *(s16 *)((s8 *)arg0 + 2) = (s16) (*(s16 *)((s8 *)arg0 + 2) - (s8) *(u8 *)((s8 *)arg0 + 1));
            if ((s16) *(s16 *)((s8 *)arg0 + 2) < (s16) (temp_r3_3 = *(s16 *)((s8 *)arg0 + 4))) {
                *(s16 *)((s8 *)arg0 + 2) = temp_r3_3;
                *(u8 *)((s8 *)arg0 + 0) = (u8) (*(u8 *)((s8 *)arg0 + 0) | 8);
            }
        }
    }
}

}
