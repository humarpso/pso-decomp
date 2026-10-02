#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_mode_action__10TObjPlayerFii(s32 arg0, s32 arg1);
u32 get_item_field_6__10TObjPlayerFPv();
s32 TObjPlayer__sub_801CEC1C(s32);
s32 weapon_has_extra_attack();

s32 check_mode_action__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (arg1 == 2) {
        if (get_item_field_6__10TObjPlayerFPv() != 0U) {
            if (weapon_has_extra_attack() == 0) {
                return 0;
            }
            goto block_5;
        }
        return 0;
    }
block_5:
    return TObjPlayer__sub_801CEC1C(arg0);
}

}
