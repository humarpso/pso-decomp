#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern s16 lbl_805D5CE8;

void TObjCityAreaWarp__vt17(void) {
    fn_8022675C(0x40003205, 0, 0, 0);
    lbl_805D5CE8 = 1;
}

}
