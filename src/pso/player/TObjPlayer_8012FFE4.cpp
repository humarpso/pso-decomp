#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_shield_effect__10TObjPlayerFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
s32 get_player_list__10TObjPlayerFv();

void update_shield_effect__10TObjPlayerFPv(void *arg0) {
    f32 temp_f1;

    if (get_slot_count__14TItemProShieldFPv() == 5) {
        switch (get_player_list__10TObjPlayerFv()) {
        case 1:
            temp_f1 = M2C_FIELD(arg0, f32 *, 0x1F8);
            TOMonitorMachine01__sub_803D8B5C(0, temp_f1, temp_f1, temp_f1);
            break;
        }
    }
}

}
