#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
M2C_UNK fn_80070BE8(M2C_UNK);
M2C_UNK fn_80291EAC(M2C_UNK);

void fn_801EA764(void) {
    if (is_split_screen() == 1) {
        fn_80291EAC(1);
        return;
    }
    fn_80070BE8(1);
}

}
