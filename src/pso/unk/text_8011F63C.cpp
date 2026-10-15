#include "types.h"
#include "pso/items/TItemWeapon.h"

extern "C" {
s32 test_action_mask__10TObjPlayerFl(int, int);
}

extern "C" {

s32 TItemWeapon::get_attack_stage() {
    u8 *arg0 = (u8 *)this;
    u32 temp_r3;
    temp_r3 = *(u32 *)((s8 *)arg0 + 0xF0);
    if (temp_r3 != 0U) {
        if (test_action_mask__10TObjPlayerFl((int) (temp_r3), (int) (0x20)) != 0) {
            return 0;
        }
        if (test_action_mask__10TObjPlayerFl((int) (*(u32 *)((s8 *)arg0 + 0xF0)), (int) (0x40)) != 0) {
            return 1;
        }
        if (test_action_mask__10TObjPlayerFl((int) (*(u32 *)((s8 *)arg0 + 0xF0)), (int) (0x80)) != 0) {
            return 2;
        }
        goto block_7;
    }
block_7:
    return -1;
}

}
