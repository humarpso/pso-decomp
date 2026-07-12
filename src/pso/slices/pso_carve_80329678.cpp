#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_8001BEF8(M2C_UNK *, M2C_UNK);
extern M2C_UNK lbl_805D6C84;

void fn_80329678(void) {
    TObjPlayer__sub_8001BEF8(&lbl_805D6C84, 1);
}

}
