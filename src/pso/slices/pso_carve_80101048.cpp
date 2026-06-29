#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8001BED8(M2C_UNK *, M2C_UNK);
s32 fn_8001BEF8(M2C_UNK *, M2C_UNK);
M2C_UNK fn_801E2EFC();
extern M2C_UNK lbl_805D53EC;

void fn_80101048(void) {
    if (fn_8001BEF8(&lbl_805D53EC, 2) == 0) {
        fn_801E2EFC();
        fn_8001BED8(&lbl_805D53EC, 2);
    }
}

}
