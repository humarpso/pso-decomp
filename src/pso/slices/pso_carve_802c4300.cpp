#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_battle_controller__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_802C4374(s32, s32);

s32 TObjPlayer__sub_802C4300(s32 arg0) {
    s32 r;
    r = update_battle_controller__10TObjPlayerFv();
    if (r == 0) {
        return 0;
    }
    TObjPlayer__sub_802C4374(arg0, r);
    return 1;
}

}
