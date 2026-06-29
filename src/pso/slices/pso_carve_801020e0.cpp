#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800196EC();
M2C_UNK fn_80087350(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_801B1CE8(s32, M2C_UNK);

void TItem__sub_801020E0(s32 arg0, s16 arg1, s32 arg2) {
    if (arg1 == fn_800196EC()) {
        fn_80087350(arg0 + 0x38, 0x9B);
        TObjPlayer__sub_801B1CE8(arg2, 0x52802);
    }
}

}
