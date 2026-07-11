#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_80010550(s32);
u32 TObjPlayer__sub_801B5EA4(s32);
M2C_UNK TObjPlayer__sub_801B5FB0();

void fn_801CB904(s32 arg0) {
    TObjPlayer__sub_801B5FB0();
    if (TObjPlayer__sub_801B5EA4(arg0) == 0U) {
        TObjPlayer__sub_80010550(arg0);
    }
}

}
