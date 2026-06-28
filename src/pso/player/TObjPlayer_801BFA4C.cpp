#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801BFA4C(s32 arg0, s16 arg1);
M2C_UNK TObjPlayer__sub_801BFA98(s32, s32);
M2C_UNK __dl__FPv(s32);

s32 TObjPlayer__sub_801BFA4C(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        TObjPlayer__sub_801BFA98(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
