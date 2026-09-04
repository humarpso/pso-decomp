#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_800847A8(void);

extern u8 lbl_805D4EE4;

s32 TObjPlayer__sub_800847A8(void) {
    if ((lbl_805D4EE4 & 2) && (lbl_805D4EE4 & 1)) {
        return 1;
    }
    return 0;
}

}
