#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_to_player__13TItemProArmorFPv(void *arg0);
s32 TItemObject__sub_80115D84(void *);
s32 get_item_field_6__10TObjPlayerFPv(s32);
M2C_UNK TObjPlayer__sub_8011F710(s32, s32);

void apply_to_player__13TItemProArmorFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_item_field_6__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    if (temp_r3 != 0) {
        TObjPlayer__sub_8011F710(temp_r3, TItemObject__sub_80115D84(arg0));
    }
}

}
