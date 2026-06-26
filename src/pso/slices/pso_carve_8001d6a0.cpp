#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8001D568(M2C_UNK, s32);
M2C_UNK fn_8001D600(M2C_UNK, void *, s32);

void fn_8001D6A0(void *arg0, void *arg1, void *arg2, void *arg3, u32 arg4) {
    if (arg4 == 0U) {
        fn_8001D600(0, arg1, M2C_FIELD(arg2, s32 *, 8));
        return;
    }
    fn_8001D568(0, M2C_FIELD(arg1, s32 *, 8));
}

}
