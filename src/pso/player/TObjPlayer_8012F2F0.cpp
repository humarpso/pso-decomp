#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_boss2tunnel__10TObjPlayerFPv(void *arg0);
void apply_on_shield_state5__10TObjPlayerFi(s32 arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK TObjPlayer__sub_8010069C(s32);
M2C_UNK TObjPlayer__sub_80100EB4(void *, M2C_UNK);
M2C_UNK setup_particle_once__10TObjPlayerFPv(void *);
s32 get_player_list__10TObjPlayerFv();

void update_boss2tunnel__10TObjPlayerFPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1F8) != 0) && (get_player_list__10TObjPlayerFv() == 1)) {
        setup_particle_once__10TObjPlayerFPv(arg0);
        TObjPlayer__sub_80100EB4(arg0, 0);
    }
}

void apply_on_shield_state5__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        TObjPlayer__sub_8010069C(arg0);
    }
}

}
