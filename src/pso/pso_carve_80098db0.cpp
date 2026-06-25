#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800BBA18(void *, M2C_UNK);

s32 fn_80098DB0(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x494) >= 5) {
        fn_800BBA18(arg0, 8);
        return 1;
    }
    return 0;
}

}
