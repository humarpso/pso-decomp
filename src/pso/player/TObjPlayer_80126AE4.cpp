#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_on_shield_state6__10TObjPlayerFi(s32 arg0);
void *init_with_update_handler__10TObjPlayerFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK refresh_owner_stats__5TItemFPv(s32);
void TObjPlayer__sub_80120D50(void *);

void apply_on_shield_state6__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 6) {
        refresh_owner_stats__5TItemFPv(arg0);
    }
}

extern M2C_UNK lbl_804A2D88[];
extern M2C_UNK spawn_weapon_impact_effect[];

void *init_with_update_handler__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2D88;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = spawn_weapon_impact_effect;
    return arg0;
}

}
