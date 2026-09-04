#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_if_shield_type5__10TObjPlayerFi(s32 arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK TObjPlayer__sub_8010069C(s32);

void apply_if_shield_type5__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        TObjPlayer__sub_8010069C(arg0);
    }
}

}
