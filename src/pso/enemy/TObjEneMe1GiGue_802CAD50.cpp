#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_and_trigger__15TObjEneMe1GiGueFi(s32 arg0);
M2C_UNK TObjEneMe1GiGue__sub_802CACD8(s32);
s32 TObjPlayer__sub_80016FF8();

s32 check_and_trigger__15TObjEneMe1GiGueFi(s32 arg0) {
    if (TObjPlayer__sub_80016FF8() != 0) {
        TObjEneMe1GiGue__sub_802CACD8(arg0);
        return 1;
    }
    return 0;
}

}
