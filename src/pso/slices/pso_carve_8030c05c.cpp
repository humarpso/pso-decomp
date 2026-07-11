#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);
extern s32 lbl_805D6A84;
extern M2C_UNK lbl_805D6A88;

void reset_globals_805D6A84(void) {
    lbl_805D6A84 = 0;
    memset(&lbl_805D6A88, 0, 4);
}

}
