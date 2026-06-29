#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8040A3C0();
M2C_UNK fn_8040AD64();
extern s32 lbl_805D570C;

void fn_80147168(void) {
    if ((s32) lbl_805D570C != 0) {
        fn_8040AD64();
        fn_8040A3C0();
        lbl_805D570C = 0;
    }
}

}
