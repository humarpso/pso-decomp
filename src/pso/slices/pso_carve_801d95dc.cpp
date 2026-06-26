#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801C011C(void *, M2C_UNK);
s32 fn_801D9A04(s16);

s16 fn_801D95DC(void *arg0) {
    if (fn_801D9A04(M2C_FIELD(arg0, s16 *, 4)) == 0) {
        fn_801C011C(arg0, 0);
    }
    return M2C_FIELD(arg0, s16 *, 4);
}

}
