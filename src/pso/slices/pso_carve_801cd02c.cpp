#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80019248();
s32 TObjPlayer__sub_801CD078(s32, s32);

s32 TObjPlayer__sub_801CD02C(s32 arg0, s32 arg1) {
    if (TObjPlayer__sub_80019248() != 0) {
        return TObjPlayer__sub_801CD078(arg0, arg1);
    }
    return 0;
}

}
