#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clamp_and_set_unit_value__10TObjPlayerFiUci(s32 arg0, u8 arg1, s32 arg2);
M2C_UNK TItemProUnit__sub_801D98F8(s32, s32, u8);
u8 TObjPlayer__sub_801C010C(s32, s32);
s32 is_invalid_slot__10TObjPlayerFUc(u8);
s32 obj_isState3_324();

void clamp_and_set_unit_value__10TObjPlayerFiUci(s32 arg0, u8 arg1, s32 arg2) {
    if (obj_isState3_324() != 0 && is_invalid_slot__10TObjPlayerFUc(arg1) == 0 &&
        arg1 > (u8)TObjPlayer__sub_801C010C(arg0 + 0x428, arg2)) {
        arg1 = TObjPlayer__sub_801C010C(arg0 + 0x428, arg2);
    }
    TItemProUnit__sub_801D98F8(arg0 + 0x428, arg2, arg1);
}

}
